// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/MenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MAMH_API UClass* Z_Construct_UClass_AMenuGameMode();
MAMH_API UClass* Z_Construct_UClass_AMenuGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class AMenuGameMode
void AMenuGameMode::StaticRegisterNativesAMenuGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMenuGameMode);
UClass* Z_Construct_UClass_AMenuGameMode_NoRegister()
{
	return AMenuGameMode::StaticClass();
}
struct Z_Construct_UClass_AMenuGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MenuGameMode.h" },
		{ "ModuleRelativePath", "Public/MenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMenuGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuGameMode_Statics::ClassParams = {
	&AMenuGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMenuGameMode()
{
	if (!Z_Registration_Info_UClass_AMenuGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuGameMode.OuterSingleton, Z_Construct_UClass_AMenuGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMenuGameMode.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<AMenuGameMode>()
{
	return AMenuGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuGameMode);
AMenuGameMode::~AMenuGameMode() {}
// End Class AMenuGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_MenuGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMenuGameMode, AMenuGameMode::StaticClass, TEXT("AMenuGameMode"), &Z_Registration_Info_UClass_AMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuGameMode), 3039314172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_MenuGameMode_h_3958788728(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_MenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_MenuGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
