// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Widget/MainMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}

// Begin Cross Module References
MAMH_API UClass* Z_Construct_UClass_UMainMenuWidget();
MAMH_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class UMainMenuWidget Function OnButtonPlayClicked
struct Z_Construct_UFunction_UMainMenuWidget_OnButtonPlayClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnButtonPlayClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnButtonPlayClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnButtonPlayClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnButtonPlayClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnButtonPlayClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnButtonPlayClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnButtonPlayClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonPlayClicked();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function OnButtonPlayClicked

// Begin Class UMainMenuWidget
void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
{
	UClass* Class = UMainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonPlayClicked", &UMainMenuWidget::execOnButtonPlayClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuWidget);
UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
{
	return UMainMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/MainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnButtonPlayClicked, "OnButtonPlayClicked" }, // 43374199
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ButtonPlay = { "ButtonPlay", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, ButtonPlay), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPlay_MetaData), NewProp_ButtonPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ButtonPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
	&UMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UMainMenuWidget>()
{
	return UMainMenuWidget::StaticClass();
}
UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
UMainMenuWidget::~UMainMenuWidget() {}
// End Class UMainMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 3570354860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuWidget_h_1328158991(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_MainMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
