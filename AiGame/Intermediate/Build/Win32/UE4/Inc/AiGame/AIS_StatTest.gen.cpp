// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIS_StatTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_StatTest() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_UAIS_StatTest_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_UAIS_StatTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AiGame();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
// End Cross Module References
	void UAIS_StatTest::StaticRegisterNativesUAIS_StatTest()
	{
	}
	UClass* Z_Construct_UClass_UAIS_StatTest_NoRegister()
	{
		return UAIS_StatTest::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIS_StatTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
				(UObject* (*)())Z_Construct_UPackage__Script_AiGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Amount of Needed Stat" },
				{ "IncludePath", "AIS_StatTest.h" },
				{ "ModuleRelativePath", "AIS_StatTest.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededStatIndex_MetaData[] = {
				{ "Category", "Stat" },
				{ "ModuleRelativePath", "AIS_StatTest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeededStatIndex = { UE4CodeGen_Private::EPropertyClass::Struct, "NeededStatIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000010001, 1, nullptr, STRUCT_OFFSET(UAIS_StatTest, NeededStatIndex), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(NewProp_NeededStatIndex_MetaData, ARRAY_COUNT(NewProp_NeededStatIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NeededStatIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIS_StatTest>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIS_StatTest::StaticClass,
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
	IMPLEMENT_CLASS(UAIS_StatTest, 3248073149);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIS_StatTest(Z_Construct_UClass_UAIS_StatTest, &UAIS_StatTest::StaticClass, TEXT("/Script/AiGame"), TEXT("UAIS_StatTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIS_StatTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
