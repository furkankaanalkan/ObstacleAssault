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

	// Memeber variables where initialized in the header file
	UE_LOG(LogTemp, Warning, TEXT("%s"), *MyString);
	UE_LOG(LogTemp, Warning, TEXT("My Integer is : %d"), MyInt);

	//FVector myVector{1.0f, 2.0f, 3.0f};
	UE_LOG(LogTemp, Warning, TEXT("My Vector is : %f"), MyVector.X);
	UE_LOG(LogTemp, Warning, TEXT("My Vector is : %f"), MyVector.Y);
	UE_LOG(LogTemp, Warning, TEXT("My Vector is : %f"), MyVector.Z);

	//set the actor location to the vector
	SetActorLocation(MyVector);

}	
// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//loop platform movement
	if(MyVector.X >= 1937.0f){
		border = false;

	}
	else if(MyVector.X <= -2339.0f){
		border = true;
	}

	if(border){
		MyVector.X += 1;
	}
	else{
		MyVector.X -= 1;
	}
	
	SetActorLocation(MyVector);

}

