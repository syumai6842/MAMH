// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Widget/Component/Battle/ItemButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemButton() {}

// Begin Cross Module References
MAMH_API UClass* Z_Construct_UClass_UItemButton();
MAMH_API UClass* Z_Construct_UClass_UItemButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class UItemButton Function OnItemButtonClicked
struct Z_Construct_UFunction_UItemButton_OnItemButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ItemButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemButton_OnItemButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemButton, nullptr, "OnItemButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemButton_OnItemButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemButton_OnItemButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItemButton_OnItemButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemButton_OnItemButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemButton::execOnItemButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemButtonClicked();
	P_NATIVE_END;
}
// End Class UItemButton Function OnItemButtonClicked

// Begin Class UItemButton
void UItemButton::StaticRegisterNativesUItemButton()
{
	UClass* Class = UItemButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemButtonClicked", &UItemButton::execOnItemButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemButton);
UClass* Z_Construct_UClass_UItemButton_NoRegister()
{
	return UItemButton::StaticClass();
}
struct Z_Construct_UClass_UItemButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/Component/Battle/ItemButton.h" },
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ItemButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_useButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ItemButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_line_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ItemButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ItemButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_useButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_line;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemButton_OnItemButtonClicked, "OnItemButtonClicked" }, // 3585982634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButton_Statics::NewProp_useButton = { "useButton", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemButton, useButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_useButton_MetaData), NewProp_useButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButton_Statics::NewProp_line = { "line", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemButton, line), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_line_MetaData), NewProp_line_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButton_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemButton, description), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_description_MetaData), NewProp_description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButton_Statics::NewProp_useButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButton_Statics::NewProp_line,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButton_Statics::NewProp_description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemButton_Statics::ClassParams = {
	&UItemButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemButton()
{
	if (!Z_Registration_Info_UClass_UItemButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemButton.OuterSingleton, Z_Construct_UClass_UItemButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemButton.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UItemButton>()
{
	return UItemButton::StaticClass();
}
UItemButton::UItemButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemButton);
UItemButton::~UItemButton() {}
// End Class UItemButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemButton, UItemButton::StaticClass, TEXT("UItemButton"), &Z_Registration_Info_UClass_UItemButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemButton), 2483525661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_710588902(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ItemButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
