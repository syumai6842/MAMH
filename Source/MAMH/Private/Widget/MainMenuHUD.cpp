// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/Widget/MainMenuHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

void AMainMenuHUD::BeginPlay()
{
	FString Path = TEXT("/Game/Source/BluePrints/Widgets/MainMenu/BPW_MainMenu.BPW_MainMenu_C");
	TSubclassOf<UUserWidget> WidgetClass = TSoftClassPtr<UUserWidget>(FSoftObjectPath(*Path)).LoadSynchronous();

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (WidgetClass && PlayerController)
	{
		UUserWidget* UserWidget = UWidgetBlueprintLibrary::Create(GetWorld(), WidgetClass, PlayerController);

		UserWidget->AddToViewport(0);

		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, Cast<UWidget>(UserWidget), EMouseLockMode::DoNotLock, true, false);
		PlayerController->SetShowMouseCursor(true);
	}
}
