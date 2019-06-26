// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
    Super::BeginPlay();

    auto ControlledTank = GetControlledTank();
    if (!ControlledTank)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController not prossesing a tank"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController prossessing: %s"), *(ControlledTank->GetName()));
    }
}

void ATankPlayerController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    AimTowardsCrosshair();
    //UE_LOG(LogTemp, Warning, TEXT("PlayerController ticking"));
}

ATank* ATankPlayerController::GetControlledTank() const
{
    return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
    if (!GetControlledTank()) { return; }

    FVector HitLocation;    // Out parameter
    if (GetSightRayHitLocation(HitLocation))    // Has "side-effect", is going to line trace
    {
        // UE_LOG(LogTemp, Warning, TEXT("Hit location: %s"), *HitLocation.ToString());
        // Tell controlled tank to aim at this point
        GetControlledTank()->AimAt(HitLocation);
    }
}

// Get world location if linetrace through crosshair, true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
    // Find the crosshair position in pixel coordinates
    int32 ViewportSizeX, ViewportSizeY;
    GetViewportSize(ViewportSizeX, ViewportSizeY);
    auto ScreenLocation = FVector2D(ViewportSizeX * CrosshairXLocation, ViewportSizeY * CrosshairYLocation);
    // UE_LOG(LogTemp, Warning, TEXT("Screen Location: %s"), *ScreenLocation.ToString());
    
    // "De-project" the screen position of the crosshiar to a world direction
    FVector LookDirection;
    if (GetLookDirection(ScreenLocation, LookDirection))
    {
        // UE_LOG(LogTemp, Warning, TEXT("Look Direction: %s"), *LookDirection.ToString());
        // Line-trace aling that look direction, and see what we hit (up to max range)
        GetLookVectorHitLocation(LookDirection, HitLocation);
    }
    return true;
}

bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
    FVector CameraWorldLocation;    // To be discarded
    return DeprojectScreenPositionToWorld(
        ScreenLocation.X,
        ScreenLocation.Y,
        CameraWorldLocation,
        LookDirection
    );
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
    FHitResult HitResult;
    auto StartLocation = PlayerCameraManager->GetCameraLocation();
    auto EndLocation = StartLocation + (LookDirection * LineTraceRange);

    if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility))
    {
        HitLocation = HitResult.Location;
        return true;    // Set hit location
    }
    HitLocation = FVector(0);
    return false;       // Line trace didn't succeed
}
