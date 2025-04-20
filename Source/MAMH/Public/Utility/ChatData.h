// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ChatData.generated.h"

UENUM(BlueprintType)
enum class EWordType : uint8
{
	Comfort,
	Encourage,
	Reflection,
};

USTRUCT(BlueprintType)
struct FChat
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChatData")
	int32 Reward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChatData")
	TArray<EWordType> MaterialTypes;
};

/**
 * 
 */
class MAMH_API ChatDataLib
{
	
public:
	static TArray<EWordType> GenerateChatData(int32 sumAmount, int32 maxReward);
};