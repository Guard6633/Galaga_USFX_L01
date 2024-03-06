// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

// Sets default values
APlayerShip::APlayerShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	// Create the mesh component
	ShipMeshPlayer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	ShipMeshPlayer->SetStaticMesh(ShipMesh.Object);
	ShipMeshPlayer->SetupAttachment(RootComponent);
	RootComponent = ShipMeshPlayer;
	
}

// Called when the game starts or when spawned
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

