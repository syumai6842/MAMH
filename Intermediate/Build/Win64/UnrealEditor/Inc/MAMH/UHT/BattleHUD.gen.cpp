// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Widget/BattleHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
MAMH_API UClass* Z_Construct_UClass_ABattleHUD();
MAMH_API UClass* Z_Construct_UClass_ABattleHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class ABattleHUD
void ABattleHUD::StaticRegisterNativesABattleHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABattleHUD);
UClass* Z_Construct_UClass_ABattleHUD_NoRegister()
{
	return ABattleHUD::StaticClass();
}
struct Z_Construct_UClass_ABattleHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Widget/BattleHUD.h" },
		{ "ModuleRelativePath", "Public/Widget/BattleHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABattleHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABattleHUD_Statics::ClassParams = {
	&ABattleHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ABattleHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABattleHUD()
{
	if (!Z_Registration_Info_UClass_ABattleHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABattleHUD.OuterSingleton, Z_Construct_UClass_ABattleHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABattleHUD.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<ABattleHUD>()
{
	return ABattleHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleHUD);
ABattleHUD::~ABattleHUD() {}
// End Class ABattleHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABattleHUD, ABattleHUD::StaticClass, TEXT("ABattleHUD"), &Z_Registration_Info_UClass_ABattleHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattleHUD), 1602625667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleHUD_h_2215062342(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
