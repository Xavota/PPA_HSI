// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef HSI_generator_generated_h
#error "generator.generated.h already included, missing '#pragma once' in generator.h"
#endif
#define HSI_generator_generated_h

#define HSI_Source_HSI_generator_h_13_SPARSE_DATA
#define HSI_Source_HSI_generator_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetTexture); \
	DECLARE_FUNCTION(execgroundthruth);


#define HSI_Source_HSI_generator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetTexture); \
	DECLARE_FUNCTION(execgroundthruth);


#define HSI_Source_HSI_generator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAgenerator(); \
	friend struct Z_Construct_UClass_Agenerator_Statics; \
public: \
	DECLARE_CLASS(Agenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(Agenerator)


#define HSI_Source_HSI_generator_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAgenerator(); \
	friend struct Z_Construct_UClass_Agenerator_Statics; \
public: \
	DECLARE_CLASS(Agenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(Agenerator)


#define HSI_Source_HSI_generator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Agenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Agenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Agenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Agenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Agenerator(Agenerator&&); \
	NO_API Agenerator(const Agenerator&); \
public:


#define HSI_Source_HSI_generator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Agenerator(Agenerator&&); \
	NO_API Agenerator(const Agenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Agenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Agenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Agenerator)


#define HSI_Source_HSI_generator_h_13_PRIVATE_PROPERTY_OFFSET
#define HSI_Source_HSI_generator_h_10_PROLOG
#define HSI_Source_HSI_generator_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_generator_h_13_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_generator_h_13_SPARSE_DATA \
	HSI_Source_HSI_generator_h_13_RPC_WRAPPERS \
	HSI_Source_HSI_generator_h_13_INCLASS \
	HSI_Source_HSI_generator_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HSI_Source_HSI_generator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_generator_h_13_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_generator_h_13_SPARSE_DATA \
	HSI_Source_HSI_generator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HSI_Source_HSI_generator_h_13_INCLASS_NO_PURE_DECLS \
	HSI_Source_HSI_generator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HSI_API UClass* StaticClass<class Agenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HSI_Source_HSI_generator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
