// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/SWeapon.h"
#include "SWeapon_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASWeapon_Projectile : public ASWeapon
{
	GENERATED_BODY()
	
protected:

	virtual void Fire() override;

	void SpawnProjectile(AActor* MyOwner);
		
	void PlayFireEffects_Projectile();

	class ASProjectile* ProjectileSpawned;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<ASProjectile> ProjectileClass;
};
