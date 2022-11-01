// Fill out your copyright notice in the Description page of Project Settings.


#include "PicoPawn.h"

// Sets default values
APicoPawn::APicoPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APicoPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APicoPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APicoPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

