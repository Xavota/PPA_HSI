// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HSI_Terrain_CPP_generated_h
#error "Terrain_CPP.generated.h already included, missing '#pragma once' in Terrain_CPP.h"
#endif
#define HSI_Terrain_CPP_generated_h

#define HSI_Source_HSI_Terrain_CPP_h_12_SPARSE_DATA
#define HSI_Source_HSI_Terrain_CPP_h_12_RPC_WRAPPERS
#define HSI_Source_HSI_Terrain_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HSI_Source_HSI_Terrain_CPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrain_CPP(); \
	friend struct Z_Construct_UClass_ATerrain_CPP_Statics; \
public: \
	DECLARE_CLASS(ATerrain_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(ATerrain_CPP)


#define HSI_Source_HSI_Terrain_CPP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATerrain_CPP(); \
	friend struct Z_Construct_UClass_ATerrain_CPP_Statics; \
public: \
	DECLARE_CLASS(ATerrain_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(ATerrain_CPP)


#define HSI_Source_HSI_Terrain_CPP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATerrain_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATerrain_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrain_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrain_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATerrain_CPP(ATerrain_CPP&&); \
	NO_API ATerrain_CPP(const ATerrain_CPP&); \
public:


#define HSI_Source_HSI_Terrain_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATerrain_CPP(ATerrain_CPP&&); \
	NO_API ATerrain_CPP(const ATerrain_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrain_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrain_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATerrain_CPP)


#define HSI_Source_HSI_Terrain_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(ATerrain_CPP, Size); } \
	FORCEINLINE static uint32 __PPO__Tiles() { return STRUCT_OFFSET(ATerrain_CPP, Tiles); } \
	FORCEINLINE static uint32 __PPO__TextureTiles() { return STRUCT_OFFSET(ATerrain_CPP, TextureTiles); } \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(ATerrain_CPP, Material); } \
	FORCEINLINE static uint32 __PPO__ColorMap() { return STRUCT_OFFSET(ATerrain_CPP, ColorMap); } \
	FORCEINLINE static uint32 __PPO__HeightMap() { return STRUCT_OFFSET(ATerrain_CPP, HeightMap); } \
	FORCEINLINE static uint32 __PPO__MaxHeight() { return STRUCT_OFFSET(ATerrain_CPP, MaxHeight); }


#define HSI_Source_HSI_Terrain_CPP_h_9_PROLOG
#define HSI_Source_HSI_Terrain_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_Terrain_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_Terrain_CPP_h_12_SPARSE_DATA \
	HSI_Source_HSI_Terrain_CPP_h_12_RPC_WRAPPERS \
	HSI_Source_HSI_Terrain_CPP_h_12_INCLASS \
	HSI_Source_HSI_Terrain_CPP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HSI_Source_HSI_Terrain_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_Terrain_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_Terrain_CPP_h_12_SPARSE_DATA \
	HSI_Source_HSI_Terrain_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HSI_Source_HSI_Terrain_CPP_h_12_INCLASS_NO_PURE_DECLS \
	HSI_Source_HSI_Terrain_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HSI_API UClass* StaticClass<class ATerrain_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HSI_Source_HSI_Terrain_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
