// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/OVRLipSync/Public/OVRLipSyncFrame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncFrame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
	OVRLIPSYNC_API UScriptStruct* Z_Construct_UScriptStruct_FOVRLipSyncFrame();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OVRLipSyncFrame;
class UScriptStruct* FOVRLipSyncFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OVRLipSyncFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OVRLipSyncFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOVRLipSyncFrame, (UObject*)Z_Construct_UPackage__Script_OVRLipSync(), TEXT("OVRLipSyncFrame"));
	}
	return Z_Registration_Info_UScriptStruct_OVRLipSyncFrame.OuterSingleton;
}
template<> OVRLIPSYNC_API UScriptStruct* StaticStruct<FOVRLipSyncFrame>()
{
	return FOVRLipSyncFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisemeScores_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisemeScores_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisemeScores;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaughterScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaughterScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOVRLipSyncFrame>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_Inner = { "VisemeScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores = { "VisemeScores", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOVRLipSyncFrame, VisemeScores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_MetaData), Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore = { "LaughterScore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOVRLipSyncFrame, LaughterScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore_MetaData), Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
		nullptr,
		&NewStructOps,
		"OVRLipSyncFrame",
		Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers),
		sizeof(FOVRLipSyncFrame),
		alignof(FOVRLipSyncFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOVRLipSyncFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_OVRLipSyncFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OVRLipSyncFrame.InnerSingleton, Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OVRLipSyncFrame.InnerSingleton;
	}
	void UOVRLipSyncFrameSequence::StaticRegisterNativesUOVRLipSyncFrameSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOVRLipSyncFrameSequence);
	UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister()
	{
		return UOVRLipSyncFrameSequence::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSequence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSequence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OVRLipSyncFrame.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_Inner = { "FrameSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOVRLipSyncFrame, METADATA_PARAMS(0, nullptr) }; // 2003252833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence = { "FrameSequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncFrameSequence, FrameSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_MetaData), Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_MetaData) }; // 2003252833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncFrameSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::ClassParams = {
		&UOVRLipSyncFrameSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence()
	{
		if (!Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.OuterSingleton, Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.OuterSingleton;
	}
	template<> OVRLIPSYNC_API UClass* StaticClass<UOVRLipSyncFrameSequence>()
	{
		return UOVRLipSyncFrameSequence::StaticClass();
	}
	UOVRLipSyncFrameSequence::UOVRLipSyncFrameSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncFrameSequence);
	UOVRLipSyncFrameSequence::~UOVRLipSyncFrameSequence() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_Statics::ScriptStructInfo[] = {
		{ FOVRLipSyncFrame::StaticStruct, Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewStructOps, TEXT("OVRLipSyncFrame"), &Z_Registration_Info_UScriptStruct_OVRLipSyncFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOVRLipSyncFrame), 2003252833U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncFrameSequence, UOVRLipSyncFrameSequence::StaticClass, TEXT("UOVRLipSyncFrameSequence"), &Z_Registration_Info_UClass_UOVRLipSyncFrameSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncFrameSequence), 3697740703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_616517417(TEXT("/Script/OVRLipSync"),
		Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
