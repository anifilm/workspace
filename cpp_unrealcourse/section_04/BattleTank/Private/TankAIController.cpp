// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
    Super::BeginPlay();

    // auto PlayerTank = GetControlledTank();
    // if (!PlayerTank)
    // {
    //     UE_LOG(LogTemp, Warning, TEXT("AIController can't find player tank"));
    // }
    // else
    // {
    //     UE_LOG(LogTemp, Warning, TEXT("AIController found player: %s"), *(PlayerTank->GetName()));
    // }
}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

    auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
    auto ControlledTank = Cast<ATank>(GetPawn());

    if (PlayerTank)
    {
        // Move towards the player

        // Aim towards the player
        ControlledTank->AimAt(PlayerTank->GetActorLocation());
        // GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());

        // Fire if ready
        ControlledTank->Fire();
    }
}

// ATank* ATankAIController::GetControlledTank() const
// {
//     return Cast<ATank>(GetPawn());
// }

// ATank* ATankAIController::GetPlayerTank() const
// {
//     auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
//     if (!PlayerPawn) { return nullptr; }
//     return Cast<ATank>(PlayerPawn);
// }
