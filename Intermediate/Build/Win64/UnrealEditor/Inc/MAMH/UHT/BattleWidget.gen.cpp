// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Widget/BattleWidget.h"
#include "MAMH/Public/Utility/ChatData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleWidget() {}

// Begin Cross Module References
MAMH_API UClass* Z_Construct_UClass_UBattleWidget();
MAMH_API UClass* Z_Construct_UClass_UBattleWidget_NoRegister();
MAMH_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
MAMH_API UScriptStruct* Z_Construct_UScriptStruct_FChat();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class UBattleWidget Function SetChatSlot
struct Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics
{
	struct BattleWidget_eventSetChatSlot_Parms
	{
		TArray<FChat> ChatArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::NewProp_ChatArray_Inner = { "ChatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChat, METADATA_PARAMS(0, nullptr) }; // 886971781
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::NewProp_ChatArray = { "ChatArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BattleWidget_eventSetChatSlot_Parms, ChatArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 886971781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::NewProp_ChatArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::NewProp_ChatArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleWidget, nullptr, "SetChatSlot", nullptr, nullptr, Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::BattleWidget_eventSetChatSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::BattleWidget_eventSetChatSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBattleWidget_SetChatSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBattleWidget_SetChatSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBattleWidget::execSetChatSlot)
{
	P_GET_TARRAY(FChat,Z_Param_ChatArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChatSlot(Z_Param_ChatArray);
	P_NATIVE_END;
}
// End Class UBattleWidget Function SetChatSlot

// Begin Class UBattleWidget Function SetItemSlot
struct Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics
{
	struct BattleWidget_eventSetItemSlot_Parms
	{
		TArray<UItemBase*> ItemArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::NewProp_ItemArray_Inner = { "ItemArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::NewProp_ItemArray = { "ItemArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BattleWidget_eventSetItemSlot_Parms, ItemArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::NewProp_ItemArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::NewProp_ItemArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleWidget, nullptr, "SetItemSlot", nullptr, nullptr, Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::BattleWidget_eventSetItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::BattleWidget_eventSetItemSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBattleWidget_SetItemSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBattleWidget_SetItemSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBattleWidget::execSetItemSlot)
{
	P_GET_TARRAY(UItemBase*,Z_Param_ItemArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemSlot(Z_Param_ItemArray);
	P_NATIVE_END;
}
// End Class UBattleWidget Function SetItemSlot

// Begin Class UBattleWidget
void UBattleWidget::StaticRegisterNativesUBattleWidget()
{
	UClass* Class = UBattleWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetChatSlot", &UBattleWidget::execSetChatSlot },
		{ "SetItemSlot", &UBattleWidget::execSetItemSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBattleWidget);
UClass* Z_Construct_UClass_UBattleWidget_NoRegister()
{
	return UBattleWidget::StaticClass();
}
struct Z_Construct_UClass_UBattleWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/BattleWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OppLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatSlotContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineWeightBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineResultBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BattleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OppLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmitButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatSlotContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineWeightBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineResultBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBattleWidget_SetChatSlot, "SetChatSlot" }, // 379886767
		{ &Z_Construct_UFunction_UBattleWidget_SetItemSlot, "SetItemSlot" }, // 2966706936
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBattleWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleWidget_Statics::NewProp_PlayerLine = { "PlayerLine", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBattleWidget, PlayerLine), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLine_MetaData), NewProp_PlayerLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleWidget_Statics::NewProp_OppLine = { "OppLine", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBattleWidget, OppLine), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OppLine_MetaData), NewProp_OppLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleWidget_Statics::NewProp_SubmitButton = { "SubmitButton", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBattleWidget, SubmitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmitButton_MetaData), NewProp_SubmitButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleWidget_Statics::NewProp_ChatSlotContainer = { "ChatSlotContainer", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBattleWidget, ChatSlotContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatSlotContainer_MetaData), NewProp_ChatSlotContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleWidget_Statics::NewProp_ItemContainer = { "ItemContainer", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBattleWidget, ItemContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContainer_MetaData), NewProp_ItemContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleWidget_Statics::NewProp_LineWeightBar = { "LineWeightBar", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBattleWidget, LineWeightBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineWeightBar_MetaData), NewProp_LineWeightBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBattleWidget_Statics::NewProp_LineResultBox = { "LineResultBox", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBattleWidget, LineResultBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineResultBox_MetaData), NewProp_LineResultBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBattleWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleWidget_Statics::NewProp_PlayerLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleWidget_Statics::NewProp_OppLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleWidget_Statics::NewProp_SubmitButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleWidget_Statics::NewProp_ChatSlotContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleWidget_Statics::NewProp_ItemContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleWidget_Statics::NewProp_LineWeightBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBattleWidget_Statics::NewProp_LineResultBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBattleWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBattleWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBattleWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBattleWidget_Statics::ClassParams = {
	&UBattleWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBattleWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBattleWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBattleWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBattleWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBattleWidget()
{
	if (!Z_Registration_Info_UClass_UBattleWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBattleWidget.OuterSingleton, Z_Construct_UClass_UBattleWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBattleWidget.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UBattleWidget>()
{
	return UBattleWidget::StaticClass();
}
UBattleWidget::UBattleWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBattleWidget);
UBattleWidget::~UBattleWidget() {}
// End Class UBattleWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBattleWidget, UBattleWidget::StaticClass, TEXT("UBattleWidget"), &Z_Registration_Info_UClass_UBattleWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBattleWidget), 3962821141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_4114869011(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_BattleWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
