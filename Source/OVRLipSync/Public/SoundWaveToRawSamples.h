#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/SoundWave.h"
#include "SoundWaveToRawSamples.generated.h"

UCLASS()
class USoundWaveToRawSamples : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Audio")
    static bool ConvertSoundWaveToRawSamples(USoundWave* SoundWave, TArray<uint8>& OutRawSamples);
};