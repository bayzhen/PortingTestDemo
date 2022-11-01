// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OculusFunctionLibrary.h"
#include "GameFramework/GameModeBase.h"
#include "PortingTestDemoGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PORTINGTESTDEMO_API APortingTestDemoGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "ForTest")
	static bool CppHasInputFocus();
};
