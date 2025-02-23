// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIGAME_AIS_DataProvider_generated_h
#error "AIS_DataProvider.generated.h already included, missing '#pragma once' in AIS_DataProvider.h"
#endif
#define AIGAME_AIS_DataProvider_generated_h

#define AiGame_Source_AiGame_AIS_DataProvider_h_15_RPC_WRAPPERS
#define AiGame_Source_AiGame_AIS_DataProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AiGame_Source_AiGame_AIS_DataProvider_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIS_DataProvider(); \
	friend AIGAME_API class UClass* Z_Construct_UClass_UAIS_DataProvider(); \
public: \
	DECLARE_CLASS(UAIS_DataProvider, UAIDataProvider_QueryParams, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AiGame"), NO_API) \
	DECLARE_SERIALIZER(UAIS_DataProvider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AiGame_Source_AiGame_AIS_DataProvider_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAIS_DataProvider(); \
	friend AIGAME_API class UClass* Z_Construct_UClass_UAIS_DataProvider(); \
public: \
	DECLARE_CLASS(UAIS_DataProvider, UAIDataProvider_QueryParams, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AiGame"), NO_API) \
	DECLARE_SERIALIZER(UAIS_DataProvider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AiGame_Source_AiGame_AIS_DataProvider_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIS_DataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIS_DataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIS_DataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIS_DataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIS_DataProvider(UAIS_DataProvider&&); \
	NO_API UAIS_DataProvider(const UAIS_DataProvider&); \
public:


#define AiGame_Source_AiGame_AIS_DataProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIS_DataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIS_DataProvider(UAIS_DataProvider&&); \
	NO_API UAIS_DataProvider(const UAIS_DataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIS_DataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIS_DataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIS_DataProvider)


#define AiGame_Source_AiGame_AIS_DataProvider_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequiredIndex() { return STRUCT_OFFSET(UAIS_DataProvider, RequiredIndex); }


#define AiGame_Source_AiGame_AIS_DataProvider_h_12_PROLOG
#define AiGame_Source_AiGame_AIS_DataProvider_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_PRIVATE_PROPERTY_OFFSET \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_RPC_WRAPPERS \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_INCLASS \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AiGame_Source_AiGame_AIS_DataProvider_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_PRIVATE_PROPERTY_OFFSET \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_INCLASS_NO_PURE_DECLS \
	AiGame_Source_AiGame_AIS_DataProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AiGame_Source_AiGame_AIS_DataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
