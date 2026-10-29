#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMovingPlatform::sayHello(FString Message) 
{
	UE_LOG(LogTemp, Warning, TEXT("there is someone to say hello --> %s"), *Message);
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	sayHello(TEXT("furkan"));

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	movePlatform(DeltaTime);
}

// Setting the platform to move in a certain direction and distance.
void AMovingPlatform::movePlatform(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();

	CurrentLocation += myChangeableVector * DeltaTime;
	SetActorLocation(CurrentLocation);

	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	if (DistanceMoved >= MoveDistance)
	{
		myChangeableVector = -myChangeableVector;
		StartLocation = CurrentLocation;
	}
}