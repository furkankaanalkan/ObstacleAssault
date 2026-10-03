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
	/*
	UPROPERTY(EditAnywhere)
	FString MyString{"Hello World"};

	UPROPERTY(VisibleAnywhere)
	int MyInt{17};

	UPROPERTY(EditAnywhere)
	FVector MyVector{FVector(1937.00,-1712.556181,930.338928)};
	*/

	/*beginPlay*/

	//myXYZplatform
	FVector StartLocation;
	
	/*Tick*/

	/*
	UPROPERTY(VisibleAnywhere)
	float speed{500.0f};
	*/


	//myXYZplatform
	UPROPERTY(EditAnywhere)
    float MoveDistance{4480.0f};

	UPROPERTY(EditAnywhere)
	FVector myChangebleVector{FVector(0.0f,0.0f,0.0f)};

public:	
	// Called every frame

};
