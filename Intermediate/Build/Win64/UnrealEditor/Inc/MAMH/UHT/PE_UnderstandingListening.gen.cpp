// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Item/PassiveEffect/PE_UnderstandingListening.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePE_UnderstandingListening() {}

// Begin Cross Module References
MAMH_API UClass* Z_Construct_UClass_UItemPassiveEffect();
MAMH_API UClass* Z_Construct_UClass_UPE_UnderstandingListening();
MAMH_API UClass* Z_Construct_UClass_UPE_UnderstandingListening_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class UPE_UnderstandingListening
void UPE_UnderstandingListening::StaticRegisterNativesUPE_UnderstandingListening()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPE_UnderstandingListening);
UClass* Z_Construct_UClass_UPE_UnderstandingListening_NoRegister()
{
	return UPE_UnderstandingListening::StaticClass();
}
struct Z_Construct_UClass_UPE_UnderstandingListening_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/PassiveEffect/PE_UnderstandingListening.h" },
		{ "ModuleRelativePath", "Public/Item/PassiveEffect/PE_UnderstandingListening.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPE_UnderstandingListening>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPE_UnderstandingListening_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemPassiveEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPE_UnderstandingListening_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPE_UnderstandingListening_Statics::ClassParams = {
	&UPE_UnderstandingListening::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPE_UnderstandingListening_Statics::Class_MetaDataParams), Z_Construct_UClass_UPE_UnderstandingListening_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPE_UnderstandingListening()
{
	if (!Z_Registration_Info_UClass_UPE_UnderstandingListening.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPE_UnderstandingListening.OuterSingleton, Z_Construct_UClass_UPE_UnderstandingListening_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPE_UnderstandingListening.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UPE_UnderstandingListening>()
{
	return UPE_UnderstandingListening::StaticClass();
}
UPE_UnderstandingListening::UPE_UnderstandingListening() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPE_UnderstandingListening);
UPE_UnderstandingListening::~UPE_UnderstandingListening() {}
// End Class UPE_UnderstandingListening

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_PassiveEffect_PE_UnderstandingListening_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPE_UnderstandingListening, UPE_UnderstandingListening::StaticClass, TEXT("UPE_UnderstandingListening"), &Z_Registration_Info_UClass_UPE_UnderstandingListening, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPE_UnderstandingListening), 136995395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_PassiveEffect_PE_UnderstandingListening_h_1163281369(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_PassiveEffect_PE_UnderstandingListening_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Item_PassiveEffect_PE_UnderstandingListening_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
