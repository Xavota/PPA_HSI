// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HSI_ExportWidget_generated_h
#error "ExportWidget.generated.h already included, missing '#pragma once' in ExportWidget.h"
#endif
#define HSI_ExportWidget_generated_h

#define HSI_Source_HSI_ExportWidget_h_15_SPARSE_DATA
#define HSI_Source_HSI_ExportWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportImageConfig);


#define HSI_Source_HSI_ExportWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportImageConfig);


#define HSI_Source_HSI_ExportWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExportWidget(); \
	friend struct Z_Construct_UClass_UExportWidget_Statics; \
public: \
	DECLARE_CLASS(UExportWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(UExportWidget)


#define HSI_Source_HSI_ExportWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUExportWidget(); \
	friend struct Z_Construct_UClass_UExportWidget_Statics; \
public: \
	DECLARE_CLASS(UExportWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HSI"), NO_API) \
	DECLARE_SERIALIZER(UExportWidget)


#define HSI_Source_HSI_ExportWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExportWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExportWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExportWidget(UExportWidget&&); \
	NO_API UExportWidget(const UExportWidget&); \
public:


#define HSI_Source_HSI_ExportWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExportWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExportWidget(UExportWidget&&); \
	NO_API UExportWidget(const UExportWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExportWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportWidget)


#define HSI_Source_HSI_ExportWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define HSI_Source_HSI_ExportWidget_h_12_PROLOG
#define HSI_Source_HSI_ExportWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_ExportWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_ExportWidget_h_15_SPARSE_DATA \
	HSI_Source_HSI_ExportWidget_h_15_RPC_WRAPPERS \
	HSI_Source_HSI_ExportWidget_h_15_INCLASS \
	HSI_Source_HSI_ExportWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HSI_Source_HSI_ExportWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HSI_Source_HSI_ExportWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	HSI_Source_HSI_ExportWidget_h_15_SPARSE_DATA \
	HSI_Source_HSI_ExportWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HSI_Source_HSI_ExportWidget_h_15_INCLASS_NO_PURE_DECLS \
	HSI_Source_HSI_ExportWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HSI_API UClass* StaticClass<class UExportWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HSI_Source_HSI_ExportWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
