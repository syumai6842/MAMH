// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Item/ActiveEffect/AE_HealHP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAE_HealHP() {}

// Begin Cross Module References
MAMH_API UClass* Z_Construct_UClass_UAE_HealHP();
MAMH_API UClass* Z_Construct_UClass_UAE_HealHP_NoRegister();
MAMH_API UClass* Z_Construct_UClass_UItemActiveEffect();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class UAE_HealHP
void UAE_HealHP::StaticRegisterNativesUAE_HealHP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAE_HealHP);
UClass* Z_Construct_UClass_UAE_HealHP_NoRegister()
{
	return UAE_HealHP::StaticClass();
}
struct Z_Construct_UClass_UAE_HealHP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/ActiveEffect/AE_HealHP.h" },
		{ "ModuleRelativePath", "Public/Item/ActiveEffect/AE_HealHP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAE_HealHP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAE_HealHP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemActiveEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAE_HealHP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAE_HealHP_Statics::ClassParams = {
	&UAE_HealHP::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAE_HealHP_Statics::Class_MetaDataParams), Z_Construct_UClass_UAE_HealHP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAE_HealHP()
{
	if (!Z_Registration_Info_UClass_UAE_HealHP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAE_HealHP.OuterSingleton, Z_Construct_UClass_UAE_HealHP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAE_HealHP.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UAE_HealHP>()
{
	return UAE_HealHP::StaticClass();
}
UAE_HealHP::UAE_HealHP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAE_HealHP);
UAE_HealHP::~UAE_HealHP() {}
// End Class UAE_HealHP

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ActiveEffect_AE_HealHP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAE_HealHP, UAE_HealHP::StaticClass, TEXT("UAE_HealHP"), &Z_Registration_Info_UClass_UAE_HealHP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAE_HealHP), 3049366643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ActiveEffect_AE_HealHP_h_3087109369(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ActiveEffect_AE_HealHP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_ActiveEffect_AE_HealHP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
