// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MAMH/Public/Core/BattleGameMode.h"
#include "MAMH/Public/Utility/ChatData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MAMH_API UClass* Z_Construct_UClass_ABattleGameMode();
MAMH_API UClass* Z_Construct_UClass_ABattleGameMode_NoRegister();
MAMH_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
MAMH_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
MAMH_API UClass* Z_Construct_UClass_UItemPassiveEffect_NoRegister();
MAMH_API UScriptStruct* Z_Construct_UScriptStruct_FChat();
UPackage* Z_Construct_UPackage__Script_MAMH();
// End Cross Module References

// Begin Class ABattleGameMode
void ABattleGameMode::StaticRegisterNativesABattleGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABattleGameMode);
UClass* Z_Construct_UClass_ABattleGameMode_NoRegister()
{
	return ABattleGameMode::StaticClass();
}
struct Z_Construct_UClass_ABattleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/BattleGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemyActor_MetaData[] = {
		{ "Category", "BattleGameMode" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chatDataArray_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemArray_MetaData[] = {
		{ "Category", "BattleGameMode" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turnCount_MetaData[] = {
		{ "Category", "BattleGameMode" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roundCount_MetaData[] = {
		{ "Category", "BattleGameMode" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxTurn_MetaData[] = {
		{ "Category", "BattleGameMode" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxRound_MetaData[] = {
		{ "Category", "BattleGameMode" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_passiveEffectArray_MetaData[] = {
		{ "Category", "BattleGameMode" },
		{ "ModuleRelativePath", "Public/Core/BattleGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_chatDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_chatDataArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_itemArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_itemArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_turnCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_roundCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxTurn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxRound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_passiveEffectArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_passiveEffectArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_enemyActor = { "enemyActor", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, enemyActor), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemyActor_MetaData), NewProp_enemyActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_chatDataArray_Inner = { "chatDataArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChat, METADATA_PARAMS(0, nullptr) }; // 886971781
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_chatDataArray = { "chatDataArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, chatDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chatDataArray_MetaData), NewProp_chatDataArray_MetaData) }; // 886971781
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_itemArray_Inner = { "itemArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_itemArray = { "itemArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, itemArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemArray_MetaData), NewProp_itemArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_turnCount = { "turnCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, turnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turnCount_MetaData), NewProp_turnCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_roundCount = { "roundCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, roundCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roundCount_MetaData), NewProp_roundCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_maxTurn = { "maxTurn", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, maxTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxTurn_MetaData), NewProp_maxTurn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_maxRound = { "maxRound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, maxRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxRound_MetaData), NewProp_maxRound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_passiveEffectArray_Inner = { "passiveEffectArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemPassiveEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_passiveEffectArray = { "passiveEffectArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, passiveEffectArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_passiveEffectArray_MetaData), NewProp_passiveEffectArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattleGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_enemyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_chatDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_chatDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_itemArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_itemArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_turnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_roundCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_maxTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_maxRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_passiveEffectArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_passiveEffectArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABattleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MAMH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABattleGameMode_Statics::ClassParams = {
	&ABattleGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABattleGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABattleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABattleGameMode()
{
	if (!Z_Registration_Info_UClass_ABattleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABattleGameMode.OuterSingleton, Z_Construct_UClass_ABattleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABattleGameMode.OuterSingleton;
}
template<> MAMH_API UClass* StaticClass<ABattleGameMode>()
{
	return ABattleGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleGameMode);
ABattleGameMode::~ABattleGameMode() {}
// End Class ABattleGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Core_BattleGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABattleGameMode, ABattleGameMode::StaticClass, TEXT("ABattleGameMode"), &Z_Registration_Info_UClass_ABattleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattleGameMode), 2364047828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Core_BattleGameMode_h_864432247(TEXT("/Script/MAMH"),
	Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Core_BattleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Core_BattleGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
