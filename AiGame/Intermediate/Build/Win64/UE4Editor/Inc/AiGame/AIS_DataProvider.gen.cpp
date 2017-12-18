// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIS_DataProvider.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIS_DataProvider() {}
// Cross Module References
	AIGAME_API UClass* Z_Construct_UClass_UAIS_DataProvider_NoRegister();
	AIGAME_API UClass* Z_Construct_UClass_UAIS_DataProvider();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	UPackage* Z_Construct_UPackage__Script_AiGame();
// End Cross Module References
	void UAIS_DataProvider::StaticRegisterNativesUAIS_DataProvider()
	{
	}
	UClass* Z_Construct_UClass_UAIS_DataProvider_NoRegister()
	{
		return UAIS_DataProvider::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIS_DataProvider()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAIDataProvider_QueryParams();
			Z_Construct_UPackage__Script_AiGame();
			OuterClass = UAIS_DataProvider::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20003080u;


				UProperty* NewProp_RequiredIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RequiredIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RequiredIndex, UAIS_DataProvider), 0x0020080000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UAIS_DataProvider> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("AutoExpandCategories"), TEXT("Provider"));
				MetaData->SetValue(OuterClass, TEXT("DisplayName"), TEXT("Owner's Properties"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AIS_DataProvider.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AIS_DataProvider.h"));
				MetaData->SetValue(NewProp_RequiredIndex, TEXT("ModuleRelativePath"), TEXT("AIS_DataProvider.h"));
				MetaData->SetValue(NewProp_RequiredIndex, TEXT("ToolTip"), TEXT("UPROPERTY empty because the data provider class already exposes their functions"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIS_DataProvider, 3795800214);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIS_DataProvider(Z_Construct_UClass_UAIS_DataProvider, &UAIS_DataProvider::StaticClass, TEXT("/Script/AiGame"), TEXT("UAIS_DataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIS_DataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
