// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioType() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UAkAudioType::StaticRegisterNativesUAkAudioType()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioType_NoRegister()
	{
		return UAkAudioType::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ShortID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAudioType.h" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioType, UserData), METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID = { "ShortID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioType, ShortID), METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010010800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioType, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioType_Statics::ClassParams = {
		&UAkAudioType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioType_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioType, 2841308647);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioType>()
	{
		return UAkAudioType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioType(Z_Construct_UClass_UAkAudioType, &UAkAudioType::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
