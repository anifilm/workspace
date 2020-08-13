// Copyright anifilm 2019.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/InputComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    // How far ahead of the player can we reach in cm
    float Reach = 100.0f;
	
    UPhysicsHandleComponent* PhysicsHandle = nullptr;

    UInputComponent* InputComponent = nullptr;

    // Ray-cast and grap what's in reach
    void Grap();

    // Called when grab is released
    void Release();

    // Find (assumed) attached phyics handle
    void FindPhysicsHandleComponent();

    // Setup (assumed) attached input component
    void SetupInputComponent();

    // Return hit for first physics body in reach
    const FHitResult GetFirstPhysicsBodyInReach();

    // Return current start of reach line
    FVector GetReachLineStart();

    // Return current end of reach line
    FVector GetReachLineEnd();
};
