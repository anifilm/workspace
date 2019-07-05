// Copyright 2019 Anifilm. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"     // Must be the last include

class ATank;
class UTankAimingComponent;

/**
 * Responsible for helping the player aim.
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
    UFUNCTION(BlueprintImplementableEvent, Category = Setup)
    void FoundAimingComponent(UTankAimingComponent* AimCompRef);

    UFUNCTION()
    void OnPossedTankDeath();

private:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    void SetPawn(APawn* InPawn);

    // Start the tank moving the barrel so that a shot would hit where
    // the crosshair intersects the world
    void AimTowardsCrosshair();

    // Return an OUT parameter, true if hit landscape
    bool GetSightRayHitLocation(FVector& HitLocation) const;

    bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
    bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

    UPROPERTY(EditDefaultsOnly)
    float CrosshairXLocation = 0.5;

    UPROPERTY(EditDefaultsOnly)
    float CrosshairYLocation = 0.3333;

    UPROPERTY(EditDefaultsOnly)
    float LineTraceRange = 1000000;
};
