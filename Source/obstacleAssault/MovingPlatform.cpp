// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	int myInt{5 * 2};

	UE_LOG(LogTemp, Warning, TEXT("My Integer is : %d"), myInt);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *MyString);
	UE_LOG(LogTemp, Warning, TEXT("My Integer is : %d"), MyInt);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
 
}

