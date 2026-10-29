#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void sayHello(FString Message);
	void movePlatform(float DeltaTime);

	UPROPERTY(EditAnywhere)
	float MoveDistance = 4480.0f;

	UPROPERTY(EditAnywhere)
	FVector myChangeableVector = FVector(0.0f, 0.0f, 0.0f);

	FVector StartLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};