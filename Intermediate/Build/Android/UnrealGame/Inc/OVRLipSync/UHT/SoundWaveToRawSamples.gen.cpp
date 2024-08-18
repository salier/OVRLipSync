// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/OVRLipSync/Public/SoundWaveToRawSamples.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveToRawSamples() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_USoundWaveToRawSamples();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_USoundWaveToRawSamples_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// End Cross Module References
	DEFINE_FUNCTION(USoundWaveToRawSamples::execConvertSoundWaveToRawSamples)
	{
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutRawSamples);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USoundWaveToRawSamples::ConvertSoundWaveToRawSamples(Z_Param_SoundWave,Z_Param_Out_OutRawSamples);
		P_NATIVE_END;
	}
	void USoundWaveToRawSamples::StaticRegisterNativesUSoundWaveToRawSamples()
	{
		UClass* Class = USoundWaveToRawSamples::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertSoundWaveToRawSamples", &USoundWaveToRawSamples::execConvertSoundWaveToRawSamples },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics
	{
		struct SoundWaveToRawSamples_eventConvertSoundWaveToRawSamples_Parms
		{
			USoundWave* SoundWave;
			TArray<uint8> OutRawSamples;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutRawSamples_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRawSamples;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundWaveToRawSamples_eventConvertSoundWaveToRawSamples_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_OutRawSamples_Inner = { "OutRawSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_OutRawSamples = { "OutRawSamples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundWaveToRawSamples_eventConvertSoundWaveToRawSamples_Parms, OutRawSamples), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundWaveToRawSamples_eventConvertSoundWaveToRawSamples_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundWaveToRawSamples_eventConvertSoundWaveToRawSamples_Parms), &Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_OutRawSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_OutRawSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SoundWaveToRawSamples.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundWaveToRawSamples, nullptr, "ConvertSoundWaveToRawSamples", nullptr, nullptr, Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::SoundWaveToRawSamples_eventConvertSoundWaveToRawSamples_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::SoundWaveToRawSamples_eventConvertSoundWaveToRawSamples_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundWaveToRawSamples);
	UClass* Z_Construct_UClass_USoundWaveToRawSamples_NoRegister()
	{
		return USoundWaveToRawSamples::StaticClass();
	}
	struct Z_Construct_UClass_USoundWaveToRawSamples_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundWaveToRawSamples_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWaveToRawSamples_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundWaveToRawSamples_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundWaveToRawSamples_ConvertSoundWaveToRawSamples, "ConvertSoundWaveToRawSamples" }, // 952357866
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWaveToRawSamples_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWaveToRawSamples_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundWaveToRawSamples.h" },
		{ "ModuleRelativePath", "Public/SoundWaveToRawSamples.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundWaveToRawSamples_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWaveToRawSamples>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundWaveToRawSamples_Statics::ClassParams = {
		&USoundWaveToRawSamples::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundWaveToRawSamples_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundWaveToRawSamples_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USoundWaveToRawSamples()
	{
		if (!Z_Registration_Info_UClass_USoundWaveToRawSamples.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundWaveToRawSamples.OuterSingleton, Z_Construct_UClass_USoundWaveToRawSamples_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundWaveToRawSamples.OuterSingleton;
	}
	template<> OVRLIPSYNC_API UClass* StaticClass<USoundWaveToRawSamples>()
	{
		return USoundWaveToRawSamples::StaticClass();
	}
	USoundWaveToRawSamples::USoundWaveToRawSamples(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWaveToRawSamples);
	USoundWaveToRawSamples::~USoundWaveToRawSamples() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_SoundWaveToRawSamples_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_SoundWaveToRawSamples_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundWaveToRawSamples, USoundWaveToRawSamples::StaticClass, TEXT("USoundWaveToRawSamples"), &Z_Registration_Info_UClass_USoundWaveToRawSamples, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundWaveToRawSamples), 1846621378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_SoundWaveToRawSamples_h_313563342(TEXT("/Script/OVRLipSync"),
		Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_SoundWaveToRawSamples_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_SoundWaveToRawSamples_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
