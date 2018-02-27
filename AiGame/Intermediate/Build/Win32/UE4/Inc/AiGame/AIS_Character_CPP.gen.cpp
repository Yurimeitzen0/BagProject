// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIS_Character_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_Character_CPP() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_AAIS_Character_CPP_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_AAIS_Character_CPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AiGame();
// End Cross Module References
	void AAIS_Character_CPP::StaticRegisterNativesAAIS_Character_CPP()
	{
	}
	UClass* Z_Construct_UClass_AAIS_Character_CPP_NoRegister()
	{
		return AAIS_Character_CPP::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIS_Character_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AIS_Character_CPP.h" },
				{ "ModuleRelativePath", "AIS_Character_CPP.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatDesirability_MetaData[] = {
				{ "Category", "Stat" },
				{ "ModuleRelativePath", "AIS_Character_CPP.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatDesirability = { UE4CodeGen_Private::EPropertyClass::Array, "StatDesirability", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAIS_Character_CPP, StatDesirability), METADATA_PARAMS(NewProp_StatDesirability_MetaData, ARRAY_COUNT(NewProp_StatDesirability_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatDesirability_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "StatDesirability", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StatDesirability,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StatDesirability_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAIS_Character_CPP>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAIS_Character_CPP::StaticClass,
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
	IMPLEMENT_CLASS(AAIS_Character_CPP, 4036174594);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIS_Character_CPP(Z_Construct_UClass_AAIS_Character_CPP, &AAIS_Character_CPP::StaticClass, TEXT("/Script/AiGame"), TEXT("AAIS_Character_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIS_Character_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
