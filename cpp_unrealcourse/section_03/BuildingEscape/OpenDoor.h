// Copyright anifilm 2019.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    void OpenDoor();
    void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    UPROPERTY(EditAnywhere)
    float OpenAngle = 90.0f;
    float DoorCloseDelay = 1.0f;
    float LastDoorOpenTime;

    ATriggerVolume* PressurePlate = nullptr;

    //AActor* ActorThatOpens;     // Remember pawn inherits from actor
    AActor* Owner = nullptr;      // The owning door

    // Returns total mass in kg
    float GetTotalMassOfActorOnPlate();
};
