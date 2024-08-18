// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/OVRLipSync/Public/CookFrameSequenceAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookFrameSequenceAsync() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UCookFrameSequenceAsync();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UCookFrameSequenceAsync_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
	OVRLIPSYNC_API UFunction* Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics
	{
		struct _Script_OVRLipSync_eventFrameSequenceCoocked_Parms
		{
			UOVRLipSyncFrameSequence* FrameSequence;
			bool Success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameSequence;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::NewProp_FrameSequence = { "FrameSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OVRLipSync_eventFrameSequenceCoocked_Parms, FrameSequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OVRLipSync_eventFrameSequenceCoocked_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OVRLipSync_eventFrameSequenceCoocked_Parms), &Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::NewProp_FrameSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CookFrameSequenceAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OVRLipSync, nullptr, "FrameSequenceCoocked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::_Script_OVRLipSync_eventFrameSequenceCoocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::_Script_OVRLipSync_eventFrameSequenceCoocked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFrameSequenceCoocked_DelegateWrapper(const FMulticastScriptDelegate& FrameSequenceCoocked, UOVRLipSyncFrameSequence* FrameSequence, bool Success)
{
	struct _Script_OVRLipSync_eventFrameSequenceCoocked_Parms
	{
		UOVRLipSyncFrameSequence* FrameSequence;
		bool Success;
	};
	_Script_OVRLipSync_eventFrameSequenceCoocked_Parms Parms;
	Parms.FrameSequence=FrameSequence;
	Parms.Success=Success ? true : false;
	FrameSequenceCoocked.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCookFrameSequenceAsync::execCookFrameSequence)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_RawSamples);
		P_GET_UBOOL(Z_Param_UseOfflineModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCookFrameSequenceAsync**)Z_Param__Result=UCookFrameSequenceAsync::CookFrameSequence(Z_Param_Out_RawSamples,Z_Param_UseOfflineModel);
		P_NATIVE_END;
	}
	void UCookFrameSequenceAsync::StaticRegisterNativesUCookFrameSequenceAsync()
	{
		UClass* Class = UCookFrameSequenceAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CookFrameSequence", &UCookFrameSequenceAsync::execCookFrameSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics
	{
		struct CookFrameSequenceAsync_eventCookFrameSequence_Parms
		{
			TArray<uint8> RawSamples;
			bool UseOfflineModel;
			UCookFrameSequenceAsync* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawSamples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawSamples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawSamples;
		static void NewProp_UseOfflineModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseOfflineModel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_RawSamples_Inner = { "RawSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_RawSamples_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_RawSamples = { "RawSamples", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CookFrameSequenceAsync_eventCookFrameSequence_Parms, RawSamples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_RawSamples_MetaData), Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_RawSamples_MetaData) };
	void Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_UseOfflineModel_SetBit(void* Obj)
	{
		((CookFrameSequenceAsync_eventCookFrameSequence_Parms*)Obj)->UseOfflineModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_UseOfflineModel = { "UseOfflineModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CookFrameSequenceAsync_eventCookFrameSequence_Parms), &Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_UseOfflineModel_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CookFrameSequenceAsync_eventCookFrameSequence_Parms, ReturnValue), Z_Construct_UClass_UCookFrameSequenceAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_RawSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_RawSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_UseOfflineModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LipSync" },
		{ "CPP_Default_UseOfflineModel", "false" },
		{ "ModuleRelativePath", "Public/CookFrameSequenceAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCookFrameSequenceAsync, nullptr, "CookFrameSequence", nullptr, nullptr, Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::CookFrameSequenceAsync_eventCookFrameSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::CookFrameSequenceAsync_eventCookFrameSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookFrameSequenceAsync);
	UClass* Z_Construct_UClass_UCookFrameSequenceAsync_NoRegister()
	{
		return UCookFrameSequenceAsync::StaticClass();
	}
	struct Z_Construct_UClass_UCookFrameSequenceAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onFrameSequenceCooked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFrameSequenceCooked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookFrameSequenceAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookFrameSequenceAsync_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCookFrameSequenceAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCookFrameSequenceAsync_CookFrameSequence, "CookFrameSequence" }, // 3899613242
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookFrameSequenceAsync_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookFrameSequenceAsync_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CookFrameSequenceAsync.h" },
		{ "ModuleRelativePath", "Public/CookFrameSequenceAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookFrameSequenceAsync_Statics::NewProp_onFrameSequenceCooked_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/CookFrameSequenceAsync.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCookFrameSequenceAsync_Statics::NewProp_onFrameSequenceCooked = { "onFrameSequenceCooked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCookFrameSequenceAsync, onFrameSequenceCooked), Z_Construct_UDelegateFunction_OVRLipSync_FrameSequenceCoocked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookFrameSequenceAsync_Statics::NewProp_onFrameSequenceCooked_MetaData), Z_Construct_UClass_UCookFrameSequenceAsync_Statics::NewProp_onFrameSequenceCooked_MetaData) }; // 1414782908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookFrameSequenceAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookFrameSequenceAsync_Statics::NewProp_onFrameSequenceCooked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookFrameSequenceAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookFrameSequenceAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookFrameSequenceAsync_Statics::ClassParams = {
		&UCookFrameSequenceAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCookFrameSequenceAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCookFrameSequenceAsync_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCookFrameSequenceAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UCookFrameSequenceAsync_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCookFrameSequenceAsync_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCookFrameSequenceAsync()
	{
		if (!Z_Registration_Info_UClass_UCookFrameSequenceAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookFrameSequenceAsync.OuterSingleton, Z_Construct_UClass_UCookFrameSequenceAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookFrameSequenceAsync.OuterSingleton;
	}
	template<> OVRLIPSYNC_API UClass* StaticClass<UCookFrameSequenceAsync>()
	{
		return UCookFrameSequenceAsync::StaticClass();
	}
	UCookFrameSequenceAsync::UCookFrameSequenceAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookFrameSequenceAsync);
	UCookFrameSequenceAsync::~UCookFrameSequenceAsync() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_CookFrameSequenceAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_CookFrameSequenceAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCookFrameSequenceAsync, UCookFrameSequenceAsync::StaticClass, TEXT("UCookFrameSequenceAsync"), &Z_Registration_Info_UClass_UCookFrameSequenceAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookFrameSequenceAsync), 2949048337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_CookFrameSequenceAsync_h_4176376550(TEXT("/Script/OVRLipSync"),
		Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_CookFrameSequenceAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_CookFrameSequenceAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
