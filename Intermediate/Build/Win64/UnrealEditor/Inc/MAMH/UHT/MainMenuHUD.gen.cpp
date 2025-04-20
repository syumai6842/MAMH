// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Widget/MainMenuHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
MAMH_API UClass* Z_Construct_UClass_AMainMenuHUD();
MAMH_API UClass* Z_Construct_UClass_AMainMenuHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class AMainMenuHUD
void AMainMenuHUD::StaticRegisterNativesAMainMenuHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainMenuHUD);
UClass* Z_Construct_UClass_AMainMenuHUD_NoRegister()
{
	return AMainMenuHUD::StaticClass();
}
struct Z_Construct_UClass_AMainMenuHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Widget/MainMenuHUD.h" },
		{ "ModuleRelativePath", "Public/Widget/MainMenuHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainMenuHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuHUD_Statics::ClassParams = {
	&AMainMenuHUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainMenuHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainMenuHUD()
{
	if (!Z_Registration_Info_UClass_AMainMenuHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainMenuHUD.OuterSingleton, Z_Construct_UClass_AMainMenuHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainMenuHUD.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<AMainMenuHUD>()
{
	return AMainMenuHUD::StaticClass();
}
AMainMenuHUD::AMainMenuHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuHUD);
AMainMenuHUD::~AMainMenuHUD() {}
// End Class AMainMenuHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainMenuHUD, AMainMenuHUD::StaticClass, TEXT("AMainMenuHUD"), &Z_Registration_Info_UClass_AMainMenuHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainMenuHUD), 1102906655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuHUD_h_3883357688(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
