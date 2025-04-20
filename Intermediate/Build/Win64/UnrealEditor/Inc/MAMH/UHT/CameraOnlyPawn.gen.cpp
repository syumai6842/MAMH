// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Utility/CameraOnlyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraOnlyPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
MAMH_API UClass* Z_Construct_UClass_AACameraOnlyPawn();
MAMH_API UClass* Z_Construct_UClass_AACameraOnlyPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class AACameraOnlyPawn
void AACameraOnlyPawn::StaticRegisterNativesAACameraOnlyPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACameraOnlyPawn);
UClass* Z_Construct_UClass_AACameraOnlyPawn_NoRegister()
{
	return AACameraOnlyPawn::StaticClass();
}
struct Z_Construct_UClass_AACameraOnlyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Utility/CameraOnlyPawn.h" },
		{ "ModuleRelativePath", "Public/Utility/CameraOnlyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedCamera_MetaData[] = {
		{ "Category", "ACameraOnlyPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/CameraOnlyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FixedCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACameraOnlyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AACameraOnlyPawn_Statics::NewProp_FixedCamera = { "FixedCamera", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACameraOnlyPawn, FixedCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedCamera_MetaData), NewProp_FixedCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACameraOnlyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACameraOnlyPawn_Statics::NewProp_FixedCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACameraOnlyPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AACameraOnlyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACameraOnlyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AACameraOnlyPawn_Statics::ClassParams = {
	&AACameraOnlyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AACameraOnlyPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AACameraOnlyPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACameraOnlyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AACameraOnlyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AACameraOnlyPawn()
{
	if (!Z_Registration_Info_UClass_AACameraOnlyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACameraOnlyPawn.OuterSingleton, Z_Construct_UClass_AACameraOnlyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AACameraOnlyPawn.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<AACameraOnlyPawn>()
{
	return AACameraOnlyPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AACameraOnlyPawn);
AACameraOnlyPawn::~AACameraOnlyPawn() {}
// End Class AACameraOnlyPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_CameraOnlyPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AACameraOnlyPawn, AACameraOnlyPawn::StaticClass, TEXT("AACameraOnlyPawn"), &Z_Registration_Info_UClass_AACameraOnlyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACameraOnlyPawn), 3619316206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_CameraOnlyPawn_h_3392134160(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_CameraOnlyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_CameraOnlyPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
