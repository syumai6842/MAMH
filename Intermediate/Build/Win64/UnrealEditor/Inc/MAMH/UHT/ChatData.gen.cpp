// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Utility/ChatData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatData() {}

// Begin Cross Module References
MAMH_API UEnum* Z_Construct_UEnum_MAMH_EWordType();
MAMH_API UScriptStruct* Z_Construct_UScriptStruct_FChat();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Enum EWordType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWordType;
static UEnum* EWordType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWordType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWordType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MAMH_EWordType, (UObject*)Z_Construct_UPackage__Script_MAMH(), TEXT("EWordType"));
	}
	return Z_Registration_Info_UEnum_EWordType.OuterSingleton;
}
template<> MAMH_API UEnum* StaticEnum<EWordType>()
{
	return EWordType_StaticEnum();
}
struct Z_Construct_UEnum_MAMH_EWordType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comfort.Name", "EWordType::Comfort" },
		{ "Encourage.Name", "EWordType::Encourage" },
		{ "ModuleRelativePath", "Public/Utility/ChatData.h" },
		{ "Reflection.Name", "EWordType::Reflection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWordType::Comfort", (int64)EWordType::Comfort },
		{ "EWordType::Encourage", (int64)EWordType::Encourage },
		{ "EWordType::Reflection", (int64)EWordType::Reflection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MAMH_EWordType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MAMH,
	nullptr,
	"EWordType",
	"EWordType",
	Z_Construct_UEnum_MAMH_EWordType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MAMH_EWordType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MAMH_EWordType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MAMH_EWordType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MAMH_EWordType()
{
	if (!Z_Registration_Info_UEnum_EWordType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWordType.InnerSingleton, Z_Construct_UEnum_MAMH_EWordType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWordType.InnerSingleton;
}
// End Enum EWordType

// Begin ScriptStruct FChat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Chat;
class UScriptStruct* FChat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Chat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Chat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChat, (UObject*)Z_Construct_UPackage__Script_MAMH(), TEXT("Chat"));
	}
	return Z_Registration_Info_UScriptStruct_Chat.OuterSingleton;
}
template<> MAMH_API UScriptStruct* StaticStruct<FChat>()
{
	return FChat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/ChatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[] = {
		{ "Category", "ChatData" },
		{ "ModuleRelativePath", "Public/Utility/ChatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTypes_MetaData[] = {
		{ "Category", "ChatData" },
		{ "ModuleRelativePath", "Public/Utility/ChatData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reward;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChat_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChat, Reward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reward_MetaData), NewProp_Reward_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChat_Statics::NewProp_MaterialTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChat_Statics::NewProp_MaterialTypes_Inner = { "MaterialTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_MAMH_EWordType, METADATA_PARAMS(0, nullptr) }; // 2122792950
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChat_Statics::NewProp_MaterialTypes = { "MaterialTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChat, MaterialTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTypes_MetaData), NewProp_MaterialTypes_MetaData) }; // 2122792950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChat_Statics::NewProp_Reward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChat_Statics::NewProp_MaterialTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChat_Statics::NewProp_MaterialTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChat_Statics::NewProp_MaterialTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
	nullptr,
	&NewStructOps,
	"Chat",
	Z_Construct_UScriptStruct_FChat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChat_Statics::PropPointers),
	sizeof(FChat),
	alignof(FChat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChat()
{
	if (!Z_Registration_Info_UScriptStruct_Chat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Chat.InnerSingleton, Z_Construct_UScriptStruct_FChat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Chat.InnerSingleton;
}
// End ScriptStruct FChat

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWordType_StaticEnum, TEXT("EWordType"), &Z_Registration_Info_UEnum_EWordType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2122792950U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChat::StaticStruct, Z_Construct_UScriptStruct_FChat_Statics::NewStructOps, TEXT("Chat"), &Z_Registration_Info_UScriptStruct_Chat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChat), 886971781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h_3103465211(TEXT("/Script/MAMH"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
