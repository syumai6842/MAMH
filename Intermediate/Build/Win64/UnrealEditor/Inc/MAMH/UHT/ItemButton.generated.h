// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/Component/Battle/ItemButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAMH_ItemButton_generated_h
#error "ItemButton.generated.h already included, missing '#pragma once' in ItemButton.h"
#endif
#define MAMH_ItemButton_generated_h

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemButtonClicked);


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemButton(); \
	friend struct Z_Construct_UClass_UItemButton_Statics; \
public: \
	DECLARE_CLASS(UItemButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MAMH"), NO_API) \
	DECLARE_SERIALIZER(UItemButton)


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemButton(UItemButton&&); \
	UItemButton(const UItemButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemButton) \
	NO_API virtual ~UItemButton();


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_15_PROLOG
#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_18_INCLASS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAMH_API UClass* StaticClass<class UItemButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
