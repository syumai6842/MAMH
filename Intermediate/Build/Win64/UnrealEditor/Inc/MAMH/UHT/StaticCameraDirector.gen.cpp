// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/StaticCameraDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticCameraDirector() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MAMH_API UClass* Z_Construct_UClass_AStaticCameraDirector();
MAMH_API UClass* Z_Construct_UClass_AStaticCameraDirector_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class AStaticCameraDirector
void AStaticCameraDirector::StaticRegisterNativesAStaticCameraDirector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStaticCameraDirector);
UClass* Z_Construct_UClass_AStaticCameraDirector_NoRegister()
{
	return AStaticCameraDirector::StaticClass();
}
struct Z_Construct_UClass_AStaticCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StaticCameraDirector.h" },
		{ "ModuleRelativePath", "Public/StaticCameraDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/StaticCameraDirector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticCameraDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticCameraDirector_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStaticCameraDirector, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticCameraDirector_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCameraDirector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStaticCameraDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCameraDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStaticCameraDirector_Statics::ClassParams = {
	&AStaticCameraDirector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStaticCameraDirector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCameraDirector_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_AStaticCameraDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStaticCameraDirector()
{
	if (!Z_Registration_Info_UClass_AStaticCameraDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStaticCameraDirector.OuterSingleton, Z_Construct_UClass_AStaticCameraDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStaticCameraDirector.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<AStaticCameraDirector>()
{
	return AStaticCameraDirector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticCameraDirector);
AStaticCameraDirector::~AStaticCameraDirector() {}
// End Class AStaticCameraDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_StaticCameraDirector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStaticCameraDirector, AStaticCameraDirector::StaticClass, TEXT("AStaticCameraDirector"), &Z_Registration_Info_UClass_AStaticCameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStaticCameraDirector), 358047055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_StaticCameraDirector_h_359515635(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_StaticCameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_StaticCameraDirector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
