// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Character/BattleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
MAMH_API UClass* Z_Construct_UClass_ABattleController();
MAMH_API UClass* Z_Construct_UClass_ABattleController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class ABattleController
void ABattleController::StaticRegisterNativesABattleController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABattleController);
UClass* Z_Construct_UClass_ABattleController_NoRegister()
{
	return ABattleController::StaticClass();
}
struct Z_Construct_UClass_ABattleController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/BattleController.h" },
		{ "ModuleRelativePath", "Public/Character/BattleController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABattleController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABattleController_Statics::ClassParams = {
	&ABattleController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABattleController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABattleController()
{
	if (!Z_Registration_Info_UClass_ABattleController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABattleController.OuterSingleton, Z_Construct_UClass_ABattleController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABattleController.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<ABattleController>()
{
	return ABattleController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleController);
ABattleController::~ABattleController() {}
// End Class ABattleController

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Character_BattleController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABattleController, ABattleController::StaticClass, TEXT("ABattleController"), &Z_Registration_Info_UClass_ABattleController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattleController), 815548608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Character_BattleController_h_3600955221(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Character_BattleController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Character_BattleController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
