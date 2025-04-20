// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Widget/Component/Battle/ChatSlot.h"
#include "MAMH/Public/Utility/ChatData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatSlot() {}

// Begin Cross Module References
MAMH_API UClass* Z_Construct_UClass_UChatSlot();
MAMH_API UClass* Z_Construct_UClass_UChatSlot_NoRegister();
MAMH_API UScriptStruct* Z_Construct_UScriptStruct_FChat();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class UChatSlot Function Init
struct Z_Construct_UFunction_UChatSlot_Init_Statics
{
	struct ChatSlot_eventInit_Parms
	{
		FChat data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ChatSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChatSlot_Init_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChatSlot_eventInit_Parms, data), Z_Construct_UScriptStruct_FChat, METADATA_PARAMS(0, nullptr) }; // 886971781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChatSlot_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatSlot_Init_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatSlot_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatSlot_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatSlot, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UChatSlot_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatSlot_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChatSlot_Init_Statics::ChatSlot_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatSlot_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChatSlot_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChatSlot_Init_Statics::ChatSlot_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChatSlot_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatSlot_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChatSlot::execInit)
{
	P_GET_STRUCT(FChat,Z_Param_data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_data);
	P_NATIVE_END;
}
// End Class UChatSlot Function Init

// Begin Class UChatSlot
void UChatSlot::StaticRegisterNativesUChatSlot()
{
	UClass* Class = UChatSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Init", &UChatSlot::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatSlot);
UClass* Z_Construct_UClass_UChatSlot_NoRegister()
{
	return UChatSlot::StaticClass();
}
struct Z_Construct_UClass_UChatSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/Component/Battle/ChatSlot.h" },
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ChatSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/Component/Battle/ChatSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_materialsBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChatSlot_Init, "Init" }, // 1342518515
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatSlot_Statics::NewProp_materialsBox = { "materialsBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatSlot, materialsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialsBox_MetaData), NewProp_materialsBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatSlot_Statics::NewProp_materialsBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChatSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatSlot_Statics::ClassParams = {
	&UChatSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UChatSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UChatSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChatSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UChatSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChatSlot()
{
	if (!Z_Registration_Info_UClass_UChatSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatSlot.OuterSingleton, Z_Construct_UClass_UChatSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChatSlot.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<UChatSlot>()
{
	return UChatSlot::StaticClass();
}
UChatSlot::UChatSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChatSlot);
UChatSlot::~UChatSlot() {}
// End Class UChatSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChatSlot, UChatSlot::StaticClass, TEXT("UChatSlot"), &Z_Registration_Info_UClass_UChatSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatSlot), 523491223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_3702170930(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Widget_Component_Battle_ChatSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
