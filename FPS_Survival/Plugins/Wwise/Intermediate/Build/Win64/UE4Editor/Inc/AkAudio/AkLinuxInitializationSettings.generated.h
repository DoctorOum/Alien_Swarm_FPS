// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkLinuxInitializationSettings_generated_h
#error "AkLinuxInitializationSettings.generated.h already included, missing '#pragma once' in AkLinuxInitializationSettings.h"
#endif
#define AKAUDIO_AkLinuxInitializationSettings_generated_h

#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering) \
	{ \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering) \
	{ \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkLinuxInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkLinuxInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkLinuxInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkLinuxInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAkLinuxInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkLinuxInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkLinuxInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkLinuxInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkLinuxInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLinuxInitializationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLinuxInitializationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLinuxInitializationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkLinuxInitializationSettings(UAkLinuxInitializationSettings&&); \
	NO_API UAkLinuxInitializationSettings(const UAkLinuxInitializationSettings&); \
public:


#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkLinuxInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkLinuxInitializationSettings(UAkLinuxInitializationSettings&&); \
	NO_API UAkLinuxInitializationSettings(const UAkLinuxInitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLinuxInitializationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLinuxInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLinuxInitializationSettings)


#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_PRIVATE_PROPERTY_OFFSET
#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_7_PROLOG
#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_RPC_WRAPPERS \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_INCLASS \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_INCLASS_NO_PURE_DECLS \
	FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkLinuxInitializationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkLinuxInitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Survival_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Linux_AkLinuxInitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
