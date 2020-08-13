// Copyright 2019 Anifilm. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

protected:
    // How close can the AI tank get
    UPROPERTY(EditDefaultsOnly, Category = Setup)
    float AcceptanceRadius = 8000;

private:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    virtual void SetPawn(APawn* InPawn) override;

   	UFUNCTION()
	void OnPossedTankDeath();
};
