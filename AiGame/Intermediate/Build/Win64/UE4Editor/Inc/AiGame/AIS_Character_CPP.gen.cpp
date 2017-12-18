// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIS_Character_CPP.h"
PRAGMA_DISABLE_OPTIMIZATION
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
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_AiGame();
			OuterClass = AAIS_Character_CPP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_StatDesirability = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StatDesirability"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(StatDesirability, AAIS_Character_CPP), 0x0010000000000005);
				UProperty* NewProp_StatDesirability_Inner = new(EC_InternalUseOnlyConstructor, NewProp_StatDesirability, TEXT("StatDesirability"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<AAIS_Character_CPP> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AIS_Character_CPP.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AIS_Character_CPP.h"));
				MetaData->SetValue(NewProp_StatDesirability, TEXT("Category"), TEXT("Stat"));
				MetaData->SetValue(NewProp_StatDesirability, TEXT("ModuleRelativePath"), TEXT("AIS_Character_CPP.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIS_Character_CPP, 1979685367);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIS_Character_CPP(Z_Construct_UClass_AAIS_Character_CPP, &AAIS_Character_CPP::StaticClass, TEXT("/Script/AiGame"), TEXT("AAIS_Character_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIS_Character_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
