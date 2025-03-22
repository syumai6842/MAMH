// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticCameraDirector.h"
#include "Camera/CameraActor.h"
#include "GameFramework/PlayerController.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AStaticCameraDirector::AStaticCameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStaticCameraDirector::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));

	if (UWorld* World = GetWorld()) {
		APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
		if (PC)
		{
			if (Camera) {
				PC->SetViewTarget(Camera);
			}
		}
	}
}

// Called every frame
void AStaticCameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

