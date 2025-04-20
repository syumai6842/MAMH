// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Item/ItemDataStructure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataStructure() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
MAMH_API UClass* Z_Construct_UClass_UItemActiveEffect();
MAMH_API UClass* Z_Construct_UClass_UItemActiveEffect_NoRegister();
MAMH_API UClass* Z_Construct_UClass_UItemPassiveEffect();
MAMH_API UClass* Z_Construct_UClass_UItemPassiveEffect_NoRegister();
MAMH_API UEnum* Z_Construct_UEnum_MAMH_EModifierType();
MAMH_API UEnum* Z_Construct_UEnum_MAMH_EOriginalStatType();
MAMH_API UScriptStruct* Z_Construct_UScriptStruct_FItemDataStructure();
MAMH_API UScriptStruct* Z_Construct_UScriptStruct_FStatModifier();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Enum EOriginalStatType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOriginalStatType;
static UEnum* EOriginalStatType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOriginalStatType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOriginalStatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MAMH_EOriginalStatType, (UObject*)Z_Construct_UPackage__Script_MAMH(), TEXT("EOriginalStatType"));
	}
	return Z_Registration_Info_UEnum_EOriginalStatType.OuterSingleton;
}
template<> MAMH_API UEnum* StaticEnum<EOriginalStatType>()
{
	return EOriginalStatType_StaticEnum();
}
struct Z_Construct_UEnum_MAMH_EOriginalStatType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "EOriginalStatType::Attack" },
		{ "BlueprintType", "true" },
		{ "CritRate.Name", "EOriginalStatType::CritRate" },
		{ "Defense.Name", "EOriginalStatType::Defense" },
		{ "Health.Name", "EOriginalStatType::Health" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOriginalStatType::Attack", (int64)EOriginalStatType::Attack },
		{ "EOriginalStatType::Defense", (int64)EOriginalStatType::Defense },
		{ "EOriginalStatType::Health", (int64)EOriginalStatType::Health },
		{ "EOriginalStatType::CritRate", (int64)EOriginalStatType::CritRate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MAMH_EOriginalStatType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MAMH,
	nullptr,
	"EOriginalStatType",
	"EOriginalStatType",
	Z_Construct_UEnum_MAMH_EOriginalStatType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MAMH_EOriginalStatType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MAMH_EOriginalStatType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MAMH_EOriginalStatType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MAMH_EOriginalStatType()
{
	if (!Z_Registration_Info_UEnum_EOriginalStatType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOriginalStatType.InnerSingleton, Z_Construct_UEnum_MAMH_EOriginalStatType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOriginalStatType.InnerSingleton;
}
// End Enum EOriginalStatType

// Begin Enum EModifierType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifierType;
static UEnum* EModifierType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModifierType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModifierType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MAMH_EModifierType, (UObject*)Z_Construct_UPackage__Script_MAMH(), TEXT("EModifierType"));
	}
	return Z_Registration_Info_UEnum_EModifierType.OuterSingleton;
}
template<> MAMH_API UEnum* StaticEnum<EModifierType>()
{
	return EModifierType_StaticEnum();
}
struct Z_Construct_UEnum_MAMH_EModifierType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.Name", "EModifierType::Additive" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
		{ "Multiplicative.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdZ\xef\xbf\xbd^\xef\xbf\xbdo\xef\xbf\xbdt\n" },
		{ "Multiplicative.Name", "EModifierType::Multiplicative" },
		{ "Multiplicative.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdZ\xef\xbf\xbd^\xef\xbf\xbdo\xef\xbf\xbdt" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModifierType::Additive", (int64)EModifierType::Additive },
		{ "EModifierType::Multiplicative", (int64)EModifierType::Multiplicative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MAMH_EModifierType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MAMH,
	nullptr,
	"EModifierType",
	"EModifierType",
	Z_Construct_UEnum_MAMH_EModifierType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MAMH_EModifierType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MAMH_EModifierType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MAMH_EModifierType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MAMH_EModifierType()
{
	if (!Z_Registration_Info_UEnum_EModifierType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifierType.InnerSingleton, Z_Construct_UEnum_MAMH_EModifierType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModifierType.InnerSingleton;
}
// End Enum EModifierType

// Begin ScriptStruct FStatModifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatModifier;
class UScriptStruct* FStatModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatModifier, (UObject*)Z_Construct_UPackage__Script_MAMH(), TEXT("StatModifier"));
	}
	return Z_Registration_Info_UScriptStruct_StatModifier.OuterSingleton;
}
template<> MAMH_API UScriptStruct* StaticStruct<FStatModifier>()
{
	return FStatModifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
	nullptr,
	&NewStructOps,
	"StatModifier",
	nullptr,
	0,
	sizeof(FStatModifier),
	alignof(FStatModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatModifier()
{
	if (!Z_Registration_Info_UScriptStruct_StatModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatModifier.InnerSingleton, Z_Construct_UScriptStruct_FStatModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatModifier.InnerSingleton;
}
// End ScriptStruct FStatModifier

// Begin Class UItemActiveEffect
void UItemActiveEffect::StaticRegisterNativesUItemActiveEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemActiveEffect);
UClass* Z_Construct_UClass_UItemActiveEffect_NoRegister()
{
	return UItemActiveEffect::StaticClass();
}
struct Z_Construct_UClass_UItemActiveEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Item/ItemDataStructure.h" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemActiveEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemActiveEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemActiveEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemActiveEffect_Statics::ClassParams = {
	&UItemActiveEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemActiveEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemActiveEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemActiveEffect()
{
	if (!Z_Registration_Info_UClass_UItemActiveEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemActiveEffect.OuterSingleton, Z_Construct_UClass_UItemActiveEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemActiveEffect.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UItemActiveEffect>()
{
	return UItemActiveEffect::StaticClass();
}
UItemActiveEffect::UItemActiveEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemActiveEffect);
UItemActiveEffect::~UItemActiveEffect() {}
// End Class UItemActiveEffect

// Begin Class UItemPassiveEffect
void UItemPassiveEffect::StaticRegisterNativesUItemPassiveEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemPassiveEffect);
UClass* Z_Construct_UClass_UItemPassiveEffect_NoRegister()
{
	return UItemPassiveEffect::StaticClass();
}
struct Z_Construct_UClass_UItemPassiveEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Item/ItemDataStructure.h" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemPassiveEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemPassiveEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemPassiveEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemPassiveEffect_Statics::ClassParams = {
	&UItemPassiveEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemPassiveEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemPassiveEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemPassiveEffect()
{
	if (!Z_Registration_Info_UClass_UItemPassiveEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemPassiveEffect.OuterSingleton, Z_Construct_UClass_UItemPassiveEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemPassiveEffect.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UItemPassiveEffect>()
{
	return UItemPassiveEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemPassiveEffect);
UItemPassiveEffect::~UItemPassiveEffect() {}
// End Class UItemPassiveEffect

// Begin ScriptStruct FItemDataStructure
static_assert(std::is_polymorphic<FItemDataStructure>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemDataStructure cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemDataStructure;
class UScriptStruct* FItemDataStructure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDataStructure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemDataStructure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDataStructure, (UObject*)Z_Construct_UPackage__Script_MAMH(), TEXT("ItemDataStructure"));
	}
	return Z_Registration_Info_UScriptStruct_ItemDataStructure.OuterSingleton;
}
template<> MAMH_API UScriptStruct* StaticStruct<FItemDataStructure>()
{
	return FItemDataStructure::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemDataStructure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ItemDataStructure" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_line_MetaData[] = {
		{ "Category", "ItemDataStructure" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[] = {
		{ "Category", "ItemDataStructure" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activeEffect_MetaData[] = {
		{ "Category", "ItemDataStructure" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_passiveEffect_MetaData[] = {
		{ "Category", "ItemDataStructure" },
		{ "ModuleRelativePath", "Public/Item/ItemDataStructure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_line;
	static const UECodeGen_Private::FStrPropertyParams NewProp_description;
	static const UECodeGen_Private::FClassPropertyParams NewProp_activeEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_passiveEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDataStructure>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDataStructure, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_line = { "line", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDataStructure, line), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_line_MetaData), NewProp_line_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDataStructure, description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_description_MetaData), NewProp_description_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_activeEffect = { "activeEffect", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDataStructure, activeEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemActiveEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activeEffect_MetaData), NewProp_activeEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_passiveEffect = { "passiveEffect", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDataStructure, passiveEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemPassiveEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_passiveEffect_MetaData), NewProp_passiveEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDataStructure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_line,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_activeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewProp_passiveEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStructure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDataStructure_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemDataStructure",
	Z_Construct_UScriptStruct_FItemDataStructure_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStructure_Statics::PropPointers),
	sizeof(FItemDataStructure),
	alignof(FItemDataStructure),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStructure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemDataStructure_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemDataStructure()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDataStructure.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemDataStructure.InnerSingleton, Z_Construct_UScriptStruct_FItemDataStructure_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemDataStructure.InnerSingleton;
}
// End ScriptStruct FItemDataStructure

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOriginalStatType_StaticEnum, TEXT("EOriginalStatType"), &Z_Registration_Info_UEnum_EOriginalStatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2460550790U) },
		{ EModifierType_StaticEnum, TEXT("EModifierType"), &Z_Registration_Info_UEnum_EModifierType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3598426316U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatModifier::StaticStruct, Z_Construct_UScriptStruct_FStatModifier_Statics::NewStructOps, TEXT("StatModifier"), &Z_Registration_Info_UScriptStruct_StatModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatModifier), 2118705999U) },
		{ FItemDataStructure::StaticStruct, Z_Construct_UScriptStruct_FItemDataStructure_Statics::NewStructOps, TEXT("ItemDataStructure"), &Z_Registration_Info_UScriptStruct_ItemDataStructure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemDataStructure), 637548578U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemActiveEffect, UItemActiveEffect::StaticClass, TEXT("UItemActiveEffect"), &Z_Registration_Info_UClass_UItemActiveEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemActiveEffect), 815803329U) },
		{ Z_Construct_UClass_UItemPassiveEffect, UItemPassiveEffect::StaticClass, TEXT("UItemPassiveEffect"), &Z_Registration_Info_UClass_UItemPassiveEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemPassiveEffect), 995365101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_2408688365(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemDataStructure_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
