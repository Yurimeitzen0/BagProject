// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIS_CPP_StatItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_CPP_StatItem() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_AAIS_CPP_StatItem_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_AAIS_CPP_StatItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AiGame();
// End Cross Module References
	void AAIS_CPP_StatItem::StaticRegisterNativesAAIS_CPP_StatItem()
	{
	}
	UClass* Z_Construct_UClass_AAIS_CPP_StatItem_NoRegister()
	{
		return AAIS_CPP_StatItem::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIS_CPP_StatItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AIS_CPP_StatItem.h" },
				{ "ModuleRelativePath", "AIS_CPP_StatItem.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatRestore_MetaData[] = {
				{ "Category", "Stat" },
				{ "ModuleRelativePath", "AIS_CPP_StatItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatRestore = { UE4CodeGen_Private::EPropertyClass::Array, "StatRestore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAIS_CPP_StatItem, StatRestore), METADATA_PARAMS(NewProp_StatRestore_MetaData, ARRAY_COUNT(NewProp_StatRestore_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatRestore_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "StatRestore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryStatIndex_MetaData[] = {
				{ "Category", "Stat" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AIS_CPP_StatItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrimaryStatIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PrimaryStatIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AAIS_CPP_StatItem, PrimaryStatIndex), METADATA_PARAMS(NewProp_PrimaryStatIndex_MetaData, ARRAY_COUNT(NewProp_PrimaryStatIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StatRestore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StatRestore_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimaryStatIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAIS_CPP_StatItem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAIS_CPP_StatItem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIS_CPP_StatItem, 3589793174);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIS_CPP_StatItem(Z_Construct_UClass_AAIS_CPP_StatItem, &AAIS_CPP_StatItem::StaticClass, TEXT("/Script/AiGame"), TEXT("AAIS_CPP_StatItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIS_CPP_StatItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
