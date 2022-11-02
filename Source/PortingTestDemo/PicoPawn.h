// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OculusFunctionLibrary.h"
#include "GameFramework/Pawn.h"
#include "PicoPawn.generated.h"

UCLASS()
class PORTINGTESTDEMO_API APicoPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APicoPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "ForTest")
		static void CppGetPose(
			FRotator& DeviceRotation,
			FVector& DevicePosition,
			FVector& NeckPosition,
			bool bUseOrienationForPlayerCamera,
			bool bUsePositionForPlayerCamera,
			const FVector PositionScale
		);

	UFUNCTION(BlueprintCallable, Category = "ForTest")
		static void CppGetRawSensorData(
			FVector& AngularAcceleration,
			FVector& LinearAcceleration,
			FVector& AngularVelocity,
			FVector& LinearVelocity,
			float& TimeInSeconds
		);
	
	UFUNCTION(BlueprintCallable, Category = "ForTest")
		static EFixedFoveatedRenderingLevel CppGetFixedFoveatedRenderingLevel();

	UFUNCTION(BlueprintCallable, Category = "ForTest")
		static float CppGetCurrentDisplayFrequency();

	UFUNCTION(BlueprintCallable, Category = "ForTest")
		static TArray<float> CppGetAvailableDisplayFrequencies();

	UFUNCTION(BlueprintCallable, Category = "ForTest")
		static void CppSetCPUAndGPULevels(int CPULevel, int GPULevel);
};
