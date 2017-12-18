// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIS_CPP_StatItem.h"
PRAGMA_DISABLE_OPTIMIZATION
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
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_AiGame();
			OuterClass = AAIS_CPP_StatItem::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_StatRestore = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StatRestore"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(StatRestore, AAIS_CPP_StatItem), 0x0010000000000005);
				UProperty* NewProp_StatRestore_Inner = new(EC_InternalUseOnlyConstructor, NewProp_StatRestore, TEXT("StatRestore"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_PrimaryStatIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrimaryStatIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PrimaryStatIndex, AAIS_CPP_StatItem), 0x0011000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<AAIS_CPP_StatItem> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AIS_CPP_StatItem.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AIS_CPP_StatItem.h"));
				MetaData->SetValue(NewProp_StatRestore, TEXT("Category"), TEXT("Stat"));
				MetaData->SetValue(NewProp_StatRestore, TEXT("ModuleRelativePath"), TEXT("AIS_CPP_StatItem.h"));
				MetaData->SetValue(NewProp_PrimaryStatIndex, TEXT("Category"), TEXT("Stat"));
				MetaData->SetValue(NewProp_PrimaryStatIndex, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_PrimaryStatIndex, TEXT("ModuleRelativePath"), TEXT("AIS_CPP_StatItem.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIS_CPP_StatItem, 355914011);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIS_CPP_StatItem(Z_Construct_UClass_AAIS_CPP_StatItem, &AAIS_CPP_StatItem::StaticClass, TEXT("/Script/AiGame"), TEXT("AAIS_CPP_StatItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIS_CPP_StatItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
