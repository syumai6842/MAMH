// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/Utility/ChatData.h"


TArray<FChat> ChatDataLib::GenerateChatData(int32 sumAmount, int32 maxRisk)
{
	TArray<FChat> ChatDataArray;
	for (int32 i = 0; i < sumAmount; i++)
	{
		FChat ChatData = FChat();
		ChatData.bIsTruth = FMath::RandBool();
		ChatData.Risk = FMath::RandRange(1, maxRisk);
		ChatDataArray.Add(ChatData);
	}
	return ChatDataArray;
}