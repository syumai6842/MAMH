// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Item/ItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MAMH_API UClass* Z_Construct_UClass_UItemActiveEffect_NoRegister();
MAMH_API UClass* Z_Construct_UClass_UItemBase();
MAMH_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
MAMH_API UClass* Z_Construct_UClass_UItemPassiveEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class UItemBase
void UItemBase::StaticRegisterNativesUItemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemBase);
UClass* Z_Construct_UClass_UItemBase_NoRegister()
{
	return UItemBase::StaticClass();
}
struct Z_Construct_UClass_UItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item/ItemBase.h" },
		{ "ModuleRelativePath", "Public/Item/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Item/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_line_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Item/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Item/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activeEffect_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Item/ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_passiveEffect_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Item/ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_line;
	static const UECodeGen_Private::FStrPropertyParams NewProp_description;
	static const UECodeGen_Private::FClassPropertyParams NewProp_activeEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_passiveEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_line = { "line", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, line), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_line_MetaData), NewProp_line_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_description_MetaData), NewProp_description_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_activeEffect = { "activeEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, activeEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemActiveEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activeEffect_MetaData), NewProp_activeEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_passiveEffect = { "passiveEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, passiveEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemPassiveEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_passiveEffect_MetaData), NewProp_passiveEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_line,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_activeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_passiveEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemBase_Statics::ClassParams = {
	&UItemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemBase()
{
	if (!Z_Registration_Info_UClass_UItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemBase.OuterSingleton, Z_Construct_UClass_UItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemBase.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UItemBase>()
{
	return UItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBase);
UItemBase::~UItemBase() {}
// End Class UItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemBase, UItemBase::StaticClass, TEXT("UItemBase"), &Z_Registration_Info_UClass_UItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemBase), 1617378647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemBase_h_3687568272(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
