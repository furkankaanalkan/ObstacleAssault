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
	/*
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
	*/
	StartLocation = GetActorLocation();
}	
// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	bool border{};
	FVector MyVector{GetActorLocation()};
	
	//loop platform movement
	if(MyVector.X >= 1937.0f){
		border = false;

	}
	else if(MyVector.X <= -2339.0f){
		border = true;
	}

	if(border){
		MyVector.X += speed * DeltaTime;
	}
	else{
		MyVector.X -= speed * DeltaTime;
	}
	SetActorLocation(MyVector);
	*/
	
	FVector myXYZplatform{GetActorLocation()};
	FVector CurrentLocation = GetActorLocation();

	CurrentLocation += myChangebleVector * DeltaTime;
    SetActorLocation(CurrentLocation);

	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	if (DistanceMoved >= MoveDistance){

        myChangebleVector = -myChangebleVector;
        
        StartLocation = CurrentLocation;
    }


}

