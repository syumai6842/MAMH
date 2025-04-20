// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/Character/BattlePawn.h"
#include <Kismet/GameplayStatics.h>
#include <Character/BattleController.h>

// Sets default values
ABattlePawn::ABattlePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	FixedCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FixedCamera"));
	FixedCamera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABattlePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABattlePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABattlePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

ABattlePawn* ABattlePawn::fetchBattlePawn(UWorld* world)
{
	if (!world) return nullptr;
	ABattleController* controller = Cast<ABattleController>(UGameplayStatics::GetPlayerController(world, 0));
	if (!controller) return nullptr;
	return Cast<ABattlePawn>(controller->GetPawn());
}
