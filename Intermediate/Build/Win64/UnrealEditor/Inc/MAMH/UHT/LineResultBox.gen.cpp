// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Widget/Component/Battle/LineResultBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineResultBox() {}

// Begin Cross Module References
MAMH_API UClass* Z_Construct_UClass_ULineResultBox();
MAMH_API UClass* Z_Construct_UClass_ULineResultBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class ULineResultBox
void ULineResultBox::StaticRegisterNativesULineResultBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineResultBox);
UClass* Z_Construct_UClass_ULineResultBox_NoRegister()
{
	return ULineResultBox::StaticClass();
}
struct Z_Construct_UClass_ULineResultBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/Component/Battle/LineResultBox.h" },
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/LineResultBox.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineResultBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULineResultBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineResultBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineResultBox_Statics::ClassParams = {
	&ULineResultBox::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineResultBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ULineResultBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULineResultBox()
{
	if (!Z_Registration_Info_UClass_ULineResultBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineResultBox.OuterSingleton, Z_Construct_UClass_ULineResultBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULineResultBox.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<ULineResultBox>()
{
	return ULineResultBox::StaticClass();
}
ULineResultBox::ULineResultBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULineResultBox);
ULineResultBox::~ULineResultBox() {}
// End Class ULineResultBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_LineResultBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULineResultBox, ULineResultBox::StaticClass, TEXT("ULineResultBox"), &Z_Registration_Info_UClass_ULineResultBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineResultBox), 967559829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_LineResultBox_h_970313079(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_LineResultBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_LineResultBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
