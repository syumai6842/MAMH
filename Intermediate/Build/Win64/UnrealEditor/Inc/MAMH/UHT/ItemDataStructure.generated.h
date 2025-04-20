// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/ItemDataStructure.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAMH_ItemDataStructure_generated_h
#error "ItemDataStructure.generated.h already included, missing '#pragma once' in ItemDataStructure.h"
#endif
#define MAMH_ItemDataStructure_generated_h

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatModifier_Statics; \
	MAMH_API static class UScriptStruct* StaticStruct();


template<> MAMH_API UScriptStruct* StaticStruct<struct FStatModifier>();

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemActiveEffect(); \
	friend struct Z_Construct_UClass_UItemActiveEffect_Statics; \
public: \
	DECLARE_CLASS(UItemActiveEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MAMH"), NO_API) \
	DECLARE_SERIALIZER(UItemActiveEffect)


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemActiveEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemActiveEffect(UItemActiveEffect&&); \
	UItemActiveEffect(const UItemActiveEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemActiveEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemActiveEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemActiveEffect) \
	NO_API virtual ~UItemActiveEffect();


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_41_PROLOG
#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_44_INCLASS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAMH_API UClass* StaticClass<class UItemActiveEffect>();

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemPassiveEffect(); \
	friend struct Z_Construct_UClass_UItemPassiveEffect_Statics; \
public: \
	DECLARE_CLASS(UItemPassiveEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MAMH"), NO_API) \
	DECLARE_SERIALIZER(UItemPassiveEffect)


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemPassiveEffect(UItemPassiveEffect&&); \
	UItemPassiveEffect(const UItemPassiveEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemPassiveEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemPassiveEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemPassiveEffect) \
	NO_API virtual ~UItemPassiveEffect();


#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_50_PROLOG
#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_53_INCLASS_NO_PURE_DECLS \
	FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAMH_API UClass* StaticClass<class UItemPassiveEffect>();

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemDataStructure_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MAMH_API UScriptStruct* StaticStruct<struct FItemDataStructure>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h


#define FOREACH_ENUM_EORIGINALSTATTYPE(op) \
	op(EOriginalStatType::Attack) \
	op(EOriginalStatType::Defense) \
	op(EOriginalStatType::Health) \
	op(EOriginalStatType::CritRate) 

enum class EOriginalStatType : uint8;
template<> struct TIsUEnumClass<EOriginalStatType> { enum { Value = true }; };
template<> MAMH_API UEnum* StaticEnum<EOriginalStatType>();

#define FOREACH_ENUM_EMODIFIERTYPE(op) \
	op(EModifierType::Additive) \
	op(EModifierType::Multiplicative) 

enum class EModifierType : uint8;
template<> struct TIsUEnumClass<EModifierType> { enum { Value = true }; };
template<> MAMH_API UEnum* StaticEnum<EModifierType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
