// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/Component/Battle/ChatSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChat;
#ifdef MAMH_ChatSlot_generated_h
#error "ChatSlot.generated.h already included, missing '#pragma once' in ChatSlot.h"
#endif
#define MAMH_ChatSlot_generated_h

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit);


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatSlot(); \
	friend struct Z_Construct_UClass_UChatSlot_Statics; \
public: \
	DECLARE_CLASS(UChatSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MAMH"), NO_API) \
	DECLARE_SERIALIZER(UChatSlot)


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChatSlot(UChatSlot&&); \
	UChatSlot(const UChatSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatSlot) \
	NO_API virtual ~UChatSlot();


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_15_PROLOG
#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_18_INCLASS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAMH_API UClass* StaticClass<class UChatSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
