// Copyright anifilm 2019.

#include "Grabber.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Public/DrawDebugHelpers.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

    //UE_LOG(LogTemp, Warning, TEXT("Grabber reporting for duty!"));
	
    FindPhysicsHandleComponent();
    SetupInputComponent();
}

// Look for attached Physics Handle
void UGrabber::FindPhysicsHandleComponent()
{
    PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
    if (PhysicsHandle == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("%s missing physics handle component"), *GetOwner()->GetName());
    }
}

// Look for attached Input Component (only appears at runtime)
void UGrabber::SetupInputComponent()
{
    InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
    if (InputComponent)
    {
        //UE_LOG(LogTemp, Warning, TEXT("Input component found"));
        // Bind the input axis
        InputComponent->BindAction("Grap", IE_Pressed, this, &UGrabber::Grap);
        InputComponent->BindAction("Grap", IE_Released, this, &UGrabber::Release);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("%s missing input component"), *GetOwner()->GetName());
    }
}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!PhysicsHandle) { return; }
    // if the physics handle is attached
    if (PhysicsHandle->GrabbedComponent)
    {
        // move the object that we're holding
        PhysicsHandle->SetTargetLocation(GetReachLineEnd());
    }
}

void UGrabber::Grap()
{
    //UE_LOG(LogTemp, Warning, TEXT("Grab pressed"));

    // Line TRACE and see if we reach any actors with physics body collision channel set
    auto HitResult = GetFirstPhysicsBodyInReach();
    auto ComponentToGrap = HitResult.GetComponent();    // gets the mesh in our case
    auto ActorHit = HitResult.GetActor();

    // If we hit somthing then attach a physics handle
    if (ActorHit)
    {
        // attach physics handle
        //PhysicsHandle->GrabComponent(
        //    ComponentToGrap,
        //    NAME_None,  // no bones needed
        //    ComponentToGrap->GetOwner()->GetActorLocation(),
        //    true    // allow rotation
        //);
        if (!PhysicsHandle) { return; }
        PhysicsHandle->GrabComponentAtLocationWithRotation(
            ComponentToGrap,
            NAME_None,  // no bones needed
            ComponentToGrap->GetOwner()->GetActorLocation(),
            ComponentToGrap->GetOwner()->GetActorRotation()
            );
    }
}

void UGrabber::Release()
{
    //UE_LOG(LogTemp, Warning, TEXT("Grab released"));
    if (!PhysicsHandle) { return; }
    PhysicsHandle->ReleaseComponent();
}

const FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{
    // Log out to test
    //UE_LOG(LogTemp, Warning, TEXT("Location: %s, Rotation: %s"), *PlayerViewPointLocation.ToString(), *PlayerViewPointRotation.ToString());

    // Draw a red trace in the world to visualize
    DrawDebugLine(GetWorld(), GetReachLineStart(), GetReachLineEnd(), FColor(255, 0, 0), false, 0.0f, 0.0f, 1.0f);

    // Setup query parameters
    FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

    // Line-trace (AKA ray-cast) out to reach distance
    FHitResult HitResult;
    GetWorld()->LineTraceSingleByObjectType(
        OUT HitResult,
        GetReachLineStart(),
        GetReachLineEnd(),
        FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
        TraceParameters
    );

    // See what we hit
    AActor* ActorHit = HitResult.GetActor();
    if (ActorHit)
    {
        UE_LOG(LogTemp, Warning, TEXT("Line trace Hit: %s"), *(ActorHit->GetName()));
    }

    //return FHitResult();
    return HitResult;
}

FVector UGrabber::GetReachLineStart()
{
    // Get Player view point this tick
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;

    GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
        OUT PlayerViewPointLocation,
        OUT PlayerViewPointRotation
    );

    return PlayerViewPointLocation;
}

FVector UGrabber::GetReachLineEnd()
{
    // Get Player view point this tick
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;

    GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
        OUT PlayerViewPointLocation,
        OUT PlayerViewPointRotation
    );

    return PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;
}