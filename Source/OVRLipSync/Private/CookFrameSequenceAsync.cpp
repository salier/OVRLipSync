// Fill out your copyright notice in the Description page of Project Settings.


#include "CookFrameSequenceAsync.h"
#include "Sound/SoundWave.h"
#include "Misc/ScopedSlowTask.h"
#include "Async/Async.h"
#include "Misc/Paths.h"
#include "Misc/MessageDialog.h"
#include "Logging/MessageLog.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogCookFrameSequence, Log, All);

#define LOCTEXT_NAMESPACE "CookFrameSequence"

constexpr auto LipSyncSequenceUpateFrequency = 100;
constexpr auto LipSyncSequenceDuration = 1.0f / LipSyncSequenceUpateFrequency;

UCookFrameSequenceAsync* UCookFrameSequenceAsync::CookFrameSequence(const TArray<uint8>& RawSamples, bool UseOfflineModel)
{
    UCookFrameSequenceAsync* BPNode = NewObject<UCookFrameSequenceAsync>();

    BPNode->RawSamples = RawSamples;
    BPNode->UseOfflineModel = UseOfflineModel;

    return BPNode;
}

void UCookFrameSequenceAsync::Activate()
{
    if (RawSamples.Num() <= 44)
    {
        UE_LOG(LogCookFrameSequence, Error, TEXT("RawSamples size is too small."));
        FMessageLog("CookFrameSequence").Error(LOCTEXT("RawSamplesTooSmall", "RawSamples size is too small."));
        onFrameSequenceCooked.Broadcast(nullptr, false);
        return;
    }

    FWaveModInfo waveInfo;
    uint8 *waveData = const_cast<uint8*>(RawSamples.GetData());

    if (waveInfo.ReadWaveInfo(waveData, RawSamples.Num()))
    {
        int32 NumChannels = *waveInfo.pChannels;
        int32 SampleRate = *waveInfo.pSamplesPerSec;
        auto PCMDataSize = waveInfo.SampleDataSize / sizeof(int16_t);
        int16_t* PCMData = reinterpret_cast<int16_t*>(waveData + 44);
        int32 ChunkSizeSamples = static_cast<int32>(SampleRate * LipSyncSequenceDuration);
        int32 ChunkSize = NumChannels * ChunkSizeSamples;
        int BufferSize = 4096;

        FString modelPath = UseOfflineModel ? FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("OVRLipSync"),
            TEXT("OfflineModel"), TEXT("ovrlipsync_offline_model.pb"))
            : FString();

        Async(EAsyncExecution::Thread, [this, PCMData, PCMDataSize, ChunkSize, ChunkSizeSamples, SampleRate, BufferSize, modelPath, NumChannels]()
        {
            UOVRLipSyncFrameSequence* Sequence = NewObject<UOVRLipSyncFrameSequence>();
            UOVRLipSyncContextWrapper context(ovrLipSyncContextProvider_Enhanced, SampleRate, BufferSize, modelPath);
            float LaughterScore = 0.0f;
            int32_t FrameDelayInMs = 0;
            TArray<float> Visemes;
            for (int offs = 0; offs + ChunkSize < PCMDataSize; offs += ChunkSize)
            {
                context.ProcessFrame(PCMData + offs, ChunkSizeSamples, Visemes, LaughterScore, FrameDelayInMs, NumChannels > 1);
                Sequence->Add(Visemes, LaughterScore);
            }
            AsyncTask(ENamedThreads::GameThread, [Sequence, this]() {
                onFrameSequenceCooked.Broadcast(Sequence, true);
            });
        });

    }
    else
    {
        UE_LOG(LogCookFrameSequence, Error, TEXT("Failed to read wave info."));
        FMessageLog("CookFrameSequence").Error(LOCTEXT("FailedToReadWaveInfo", "Failed to read wave info."));
        onFrameSequenceCooked.Broadcast(nullptr, false);
    }
}

#undef LOCTEXT_NAMESPACE