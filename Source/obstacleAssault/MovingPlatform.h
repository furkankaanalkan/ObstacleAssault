// Fill out your copyright notice in the Description page of Project Settings.

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
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	FString MyString{"Hello World"};

	UPROPERTY(VisibleAnywhere)
	int MyInt{17};

	UPROPERTY(EditAnywhere)
	FVector MyVector{FVector(1937.00,-1712.556181,930.338928)};

	UPROPERTY(VisibleAnywhere)
	bool border{};

public:	
	// Called every frame

};
