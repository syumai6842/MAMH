// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "BattleWidget.h"

#include "BattleHUD.generated.h"

/**
 * 
 */
UCLASS()
class MAMH_API ABattleHUD : public AHUD
{
	GENERATED_BODY()
public:
	ABattleHUD();
	void SetVisibility(bool visibility);
	TObjectPtr<UBattleWidget> RootWidget;
	static ABattleHUD* FetchPlayerHud(UWorld * world);
	
protected:
	virtual void BeginPlay() override;

};
