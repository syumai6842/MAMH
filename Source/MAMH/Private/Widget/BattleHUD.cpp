// Fill out your copyright notice in the Description page of Project Settings.  

#include "../../Public/Widget/BattleHUD.h"  
#include "Kismet/GameplayStatics.h"
#include "Blueprint/WidgetBlueprintLibrary.h"


#include "Misc/OutputDeviceDebug.h"
#include <Character/BattleController.h>

ABattleHUD::ABattleHUD()
{
    FString Path = TEXT("/Game/Source/BluePrints/Widgets/Battle/BPW_Battle.BPW_Battle_C");
    TSubclassOf<UBattleWidget> WidgetClass = TSoftClassPtr<UUserWidget>(FSoftObjectPath(*Path)).LoadSynchronous();
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (WidgetClass && PlayerController)
    {
        RootWidget = CreateWidget<UBattleWidget>(PlayerController, WidgetClass);
        RootWidget->AddToViewport(0);
        UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, Cast<UWidget>(RootWidget), EMouseLockMode::DoNotLock, true, false);
        PlayerController->SetShowMouseCursor(true);
        UE_LOG(LogTemp, Log, TEXT("BattleHUD initialized successfully."));
    }
    else {
        UE_LOG(LogTemp, Error, TEXT("Failed to initialize BattleHUD. WidgetClass or PlayerController is null."));
    }
}

void ABattleHUD::BeginPlay()
{

}

ABattleHUD* ABattleHUD::FetchPlayerHud(UWorld * world)
{
    ABattleController* playerController = Cast<ABattleController>(UGameplayStatics::GetPlayerController(world, 0));
    if (playerController)
    {
        return Cast<ABattleHUD>(playerController->GetHUD());
    }
    return nullptr;
}

void ABattleHUD::SetVisibility(bool visibility)  
{  
	RootWidget->SetVisibility(visibility ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}