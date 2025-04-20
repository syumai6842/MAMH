// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/ChatData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAMH_ChatData_generated_h
#error "ChatData.generated.h already included, missing '#pragma once' in ChatData.h"
#endif
#define MAMH_ChatData_generated_h

#define FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChat_Statics; \
	MAMH_API static class UScriptStruct* StaticStruct();


template<> MAMH_API UScriptStruct* StaticStruct<struct FChat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_oses_os_Unreal_Projects_MAMH_Source_MAMH_Public_Utility_ChatData_h


#define FOREACH_ENUM_EWORDTYPE(op) \
	op(EWordType::Comfort) \
	op(EWordType::Encourage) \
	op(EWordType::Reflection) 

enum class EWordType : uint8;
template<> struct TIsUEnumClass<EWordType> { enum { Value = true }; };
template<> MAMH_API UEnum* StaticEnum<EWordType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
