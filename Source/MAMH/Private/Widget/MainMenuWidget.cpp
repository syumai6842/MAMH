// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/Widget/MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ButtonPlay->OnClicked.AddUniqueDynamic(this, &UMainMenuWidget::OnButtonPlayClicked);
}

void UMainMenuWidget::OnButtonPlayClicked()
{

	UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Battle")));
}