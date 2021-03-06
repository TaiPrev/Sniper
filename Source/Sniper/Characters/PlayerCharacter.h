// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SNIPER_API APlayerCharacter : public AGameCharacter
{
	GENERATED_BODY()
	
	public:
		APlayerCharacter();

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info", meta = (DisplayName = "Stats Component"))
			class UPlayerCharacterStats* m_statsComponent;

		UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
			USkeletalMeshComponent* m_pGunMesh;

	public:
		virtual void Tick(float DeltaTime) override;
};
