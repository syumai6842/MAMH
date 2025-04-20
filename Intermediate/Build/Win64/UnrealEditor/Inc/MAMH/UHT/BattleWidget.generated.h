// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/BattleWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
struct FChat;
#ifdef MAMH_BattleWidget_generated_h
#error "BattleWidget.generated.h already included, missing '#pragma once' in BattleWidget.h"
#endif
#define MAMH_BattleWidget_generated_h

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetItemSlot); \
	DECLARE_FUNCTION(execSetChatSlot);


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBattleWidget(); \
	friend struct Z_Construct_UClass_UBattleWidget_Statics; \
public: \
	DECLARE_CLASS(UBattleWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MAMH"), NO_API) \
	DECLARE_SERIALIZER(UBattleWidget)


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBattleWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBattleWidget(UBattleWidget&&); \
	UBattleWidget(const UBattleWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBattleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBattleWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBattleWidget) \
	NO_API virtual ~UBattleWidget();


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_20_PROLOG
#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_23_INCLASS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAMH_API UClass* StaticClass<class UBattleWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
