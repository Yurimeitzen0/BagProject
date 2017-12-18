// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIS_StatTest.h"
PRAGMA_DISABLE_OPTIMIZATION
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
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvQueryTest();
			Z_Construct_UPackage__Script_AiGame();
			OuterClass = UAIS_StatTest::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_NeededStatIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NeededStatIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NeededStatIndex, UAIS_StatTest), 0x0020088000010001, Z_Construct_UScriptStruct_FAIDataProviderIntValue());
				static TCppClassTypeInfo<TCppClassTypeTraits<UAIS_StatTest> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("DisplayName"), TEXT("Amount of Needed Stat"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AIS_StatTest.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AIS_StatTest.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_NeededStatIndex, TEXT("Category"), TEXT("Stat"));
				MetaData->SetValue(NewProp_NeededStatIndex, TEXT("ModuleRelativePath"), TEXT("AIS_StatTest.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIS_StatTest, 3175618629);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIS_StatTest(Z_Construct_UClass_UAIS_StatTest, &UAIS_StatTest::StaticClass, TEXT("/Script/AiGame"), TEXT("UAIS_StatTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIS_StatTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
