// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyShip.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEnemyShip : public AActor
{
	GENERATED_BODY()
	
//Mesh Component
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* EnemyShipMesh;

protected:
	FString name;
	FString Type;
	FString TypeFire;
	float Health;
	float Speed;
	float Damage;
	float FireRate;		
	float FireRange;
	float FirePower;

//  Getter and Setter
public: 
	FORCEINLINE float GetHealth() const { return Health; }
	FORCEINLINE void SetHealth(float health) { Health = health; }
	FORCEINLINE float GetSpeed() const { return Speed; }
	FORCEINLINE void SetSpeed(float speed) { Speed = speed; }
	FORCEINLINE float GetDamage() const { return Damage; }
	FORCEINLINE void SetDamage(float damage) { Damage = damage; }
	FORCEINLINE float GetFireRate() const { return FireRate; }
	FORCEINLINE void SetFireRate(float fireRate) { FireRate = fireRate; }
	FORCEINLINE float GetFireRange() const { return FireRange; }
	FORCEINLINE void SetFireRange(float fireRange) { FireRange = fireRange; }
	FORCEINLINE float GetFirePower() const { return FirePower; }
	FORCEINLINE void SetFirePower(float firePower) { FirePower = firePower; }
	FORCEINLINE FString GetName() const { return name; }	
	FORCEINLINE void SetName(FString Name) { name = Name; }
	FORCEINLINE FString GetType() const { return Type; }
	FORCEINLINE void SetType(FString type) { Type = type; }
	FORCEINLINE FString GetTypeFire() const { return TypeFire; }
	FORCEINLINE void SetTypeFire(FString typeFire) { TypeFire = typeFire; }

//  Functions


public:	
	// Sets default values for this actor's properties
	AEnemyShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
