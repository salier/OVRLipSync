// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRLipSyncLiveActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVRLIPSYNC_OVRLipSyncLiveActorComponent_generated_h
#error "OVRLipSyncLiveActorComponent.generated.h already included, missing '#pragma once' in OVRLipSyncLiveActorComponent.h"
#endif
#define OVRLIPSYNC_OVRLipSyncLiveActorComponent_generated_h

#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_SPARSE_DATA
#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVoiceCaptureTimer); \
	DECLARE_FUNCTION(execFeedAudio); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPermissionCallback); \
	DECLARE_FUNCTION(execStart);


#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_ACCESSORS
#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponent(); \
	friend struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncActorComponent, UOVRLipSyncActorComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponent)


#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncActorComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncActorComponent(UOVRLipSyncActorComponent&&); \
	NO_API UOVRLipSyncActorComponent(const UOVRLipSyncActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncActorComponent) \
	NO_API virtual ~UOVRLipSyncActorComponent();


#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_40_PROLOG
#define FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_SPARSE_DATA \
	FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_ACCESSORS \
	FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRLIPSYNC_API UClass* StaticClass<class UOVRLipSyncActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_liptest_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h


#define FOREACH_ENUM_OVRLIPSYNCPROVIDERKIND(op) \
	op(OVRLipSyncProviderKind::Original) \
	op(OVRLipSyncProviderKind::Enhanced) \
	op(OVRLipSyncProviderKind::EnhancedWithLaughter) 

enum class OVRLipSyncProviderKind : uint8;
template<> struct TIsUEnumClass<OVRLipSyncProviderKind> { enum { Value = true }; };
template<> OVRLIPSYNC_API UEnum* StaticEnum<OVRLipSyncProviderKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
