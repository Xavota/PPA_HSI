// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HSI_HSIGameModeBase_generated_h
#error "HSIGameModeBase.generated.h already included, missing '#pragma once' in HSIGameModeBase.h"
#endif
#define HSI_HSIGameModeBase_generated_h

#define HSI_Source_HSI_HSIGameModeBase_h_15_SPARSE_DATA
#define HSI_Source_HSI_HSIGameModeBase_h_15_RPC_WRAPPERS
#define HSI_Source_HSI_HSIGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HSI_Source_HSI_HSIGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHSIGameModeBase(); \
	friend struct Z_Construct_UClass_AHSIGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AHSIGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(AHSIGameModeBase)


#define HSI_Source_HSI_HSIGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHSIGameModeBase(); \
	friend struct Z_Construct_UClass_AHSIGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AHSIGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(AHSIGameModeBase)


#define HSI_Source_HSI_HSIGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHSIGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHSIGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHSIGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHSIGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHSIGameModeBase(AHSIGameModeBase&&); \
	NO_API AHSIGameModeBase(const AHSIGameModeBase&); \
public:


#define HSI_Source_HSI_HSIGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHSIGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHSIGameModeBase(AHSIGameModeBase&&); \
	NO_API AHSIGameModeBase(const AHSIGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHSIGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHSIGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHSIGameModeBase)


#define HSI_Source_HSI_HSIGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define HSI_Source_HSI_HSIGameModeBase_h_12_PROLOG
#define HSI_Source_HSI_HSIGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_HSIGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_HSIGameModeBase_h_15_SPARSE_DATA \
	HSI_Source_HSI_HSIGameModeBase_h_15_RPC_WRAPPERS \
	HSI_Source_HSI_HSIGameModeBase_h_15_INCLASS \
	HSI_Source_HSI_HSIGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HSI_Source_HSI_HSIGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_HSIGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_HSIGameModeBase_h_15_SPARSE_DATA \
	HSI_Source_HSI_HSIGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HSI_Source_HSI_HSIGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	HSI_Source_HSI_HSIGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HSI_API UClass* StaticClass<class AHSIGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HSI_Source_HSI_HSIGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
