// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerShip.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APlayerShip : public AActor
{
	GENERATED_BODY()

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAcces = "true"))
		UStaticMeshComponent* ShipMesh;

	// Sets default values for this actor's properties
	APlayerShip();

	// Mesh for the player ship
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMeshPlayer;


	// Properties
protected:
	FString name; 
	float Health;  
	float Speed;
	float Damage;
	float FireRate;		// Shots per second
	float FireRange;	
	float Energy;
	float Shield;		
	float Experience;
	float Level;

public: 
	// Getters
	FORCEINLINE float GetHealth() const { return Health; }
	FORCEINLINE float GetSpeed() const { return Speed; }
	FORCEINLINE float GetDamage() const { return Damage; }
	FORCEINLINE float GetFireRate() const { return FireRate; }
	FORCEINLINE float GetFireRange() const { return FireRange; }
	FORCEINLINE float GetEnergy() const { return Energy; }
	FORCEINLINE float GetShield() const { return Shield; }
	FORCEINLINE float GetExperience() const { return Experience; }
	FORCEINLINE float GetLevel() const { return Level; }

// Setters
	FORCEINLINE void SetHealth(float newHealth) { Health = newHealth; }
	FORCEINLINE void SetSpeed(float newSpeed) { Speed = newSpeed; }
	FORCEINLINE void SetDamage(float newDamage) { Damage = newDamage; }
	FORCEINLINE void SetFireRate(float newFireRate) { FireRate = newFireRate; }
	FORCEINLINE void SetFireRange(float newFireRange) { FireRange = newFireRange; }
	FORCEINLINE void SetEnergy(float newEnergy) { Energy = newEnergy; }
	FORCEINLINE void SetShield(float newShield) { Shield = newShield; }
	FORCEINLINE void SetExperience(float newExperience) { Experience = newExperience; }
	FORCEINLINE void SetLevel(float newLevel) { Level = newLevel; }

// Functions

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
