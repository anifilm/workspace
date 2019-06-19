// Copyright anifilm 2019.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDoorEvent);

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

    //void OpenDoor();
    void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UPROPERTY(BlueprintAssignable)
    FDoorEvent OnOpenRequest;

    UPROPERTY(BlueprintAssignable)
    FDoorEvent OnCloseRequest;

private:
    UPROPERTY(EditAnywhere)
    float OpenAngle = 90.0f;

    //UPROPERTY(EditAnywhere)
    //float DoorCloseDelay = 1.0f;

    //float LastDoorOpenTime;

    UPROPERTY(EditAnywhere)
    float TriggerMass = 50.0f;

    UPROPERTY(EditAnywhere)
    ATriggerVolume* PressurePlate = nullptr;

    //AActor* ActorThatOpens;     // Remember pawn inherits from actor
    AActor* Owner = nullptr;      // The owning door

    // Returns total mass in kg
    float GetTotalMassOfActorOnPlate();
};
