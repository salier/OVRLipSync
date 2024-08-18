// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/OVRLipSync/Public/OVRLipSyncPlaybackActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncPlaybackActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// End Cross Module References
	DEFINE_FUNCTION(UOVRLipSyncPlaybackActorComponent::execSetPlaybackSequence)
	{
		P_GET_OBJECT(UOVRLipSyncFrameSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackSequence(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncPlaybackActorComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncPlaybackActorComponent::execStart)
	{
		P_GET_OBJECT(UAudioComponent,Z_Param_InAudioComponent);
		P_GET_OBJECT(UOVRLipSyncFrameSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start(Z_Param_InAudioComponent,Z_Param_InSequence);
		P_NATIVE_END;
	}
	void UOVRLipSyncPlaybackActorComponent::StaticRegisterNativesUOVRLipSyncPlaybackActorComponent()
	{
		UClass* Class = UOVRLipSyncPlaybackActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlaybackSequence", &UOVRLipSyncPlaybackActorComponent::execSetPlaybackSequence },
			{ "Start", &UOVRLipSyncPlaybackActorComponent::execStart },
			{ "Stop", &UOVRLipSyncPlaybackActorComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics
	{
		struct OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms
		{
			UOVRLipSyncFrameSequence* InSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms, InSequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Sets playback sequence property" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, nullptr, "SetPlaybackSequence", nullptr, nullptr, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics
	{
		struct OVRLipSyncPlaybackActorComponent_eventStart_Parms
		{
			UAudioComponent* InAudioComponent;
			UOVRLipSyncFrameSequence* InSequence;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAudioComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent = { "InAudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncPlaybackActorComponent_eventStart_Parms, InAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent_MetaData), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncPlaybackActorComponent_eventStart_Parms, InSequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Start playback of the canned sequence synchronized with AudioComponent" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, nullptr, "Start", nullptr, nullptr, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::OVRLipSyncPlaybackActorComponent_eventStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::OVRLipSyncPlaybackActorComponent_eventStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOVRLipSyncPlaybackActorComponent);
	UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister()
	{
		return UOVRLipSyncPlaybackActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence, "SetPlaybackSequence" }, // 1660758617
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start, "Start" }, // 1236139208
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop, "Stop" }, // 2937189259
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncPlaybackActorComponent.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "LipSync Sequence to be played" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncPlaybackActorComponent, Sequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence_MetaData), Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "LipSync" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncPlaybackActorComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncPlaybackActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::ClassParams = {
		&UOVRLipSyncPlaybackActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent()
	{
		if (!Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.OuterSingleton, Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.OuterSingleton;
	}
	template<> OVRLIPSYNC_API UClass* StaticClass<UOVRLipSyncPlaybackActorComponent>()
	{
		return UOVRLipSyncPlaybackActorComponent::StaticClass();
	}
	UOVRLipSyncPlaybackActorComponent::UOVRLipSyncPlaybackActorComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncPlaybackActorComponent);
	UOVRLipSyncPlaybackActorComponent::~UOVRLipSyncPlaybackActorComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, UOVRLipSyncPlaybackActorComponent::StaticClass, TEXT("UOVRLipSyncPlaybackActorComponent"), &Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncPlaybackActorComponent), 351459932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_1251242988(TEXT("/Script/OVRLipSync"),
		Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
