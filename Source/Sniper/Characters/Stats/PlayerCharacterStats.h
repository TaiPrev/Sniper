// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCharacterStats.h"
//#include "../../Utilities/Types.h"
#include "PlayerCharacterStats.generated.h"

/**
 * 
 */
UCLASS()
class SNIPER_API UPlayerCharacterStats : public UGameCharacterStats
{
	GENERATED_BODY()
	
	public:
		UPlayerCharacterStats();

	protected:
		UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (DisplayName = "Lives"))
			int m_iLifes;
		UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (DisplayName = "Max Lives"))
			int m_iMaxLifes;
		UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (DisplayName = "Bullets"))
			int m_iBullets;
		UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (DisplayName = "Max Bullets"))
			int m_iMaxBullets;

	public:
		UFUNCTION(BlueprintCallable)
			void SetLifes(int _iValue);
		UFUNCTION(BlueprintCallable)
			int GetLifes();
		UFUNCTION(BlueprintCallable)
			void SubtractLife();
		UFUNCTION(BlueprintCallable)
			void AddLife();

		UFUNCTION(BlueprintCallable)
			void SetMaxLifes(int _iValue);
		UFUNCTION(BlueprintCallable)
			int GetMaxLifes();

		UFUNCTION(BlueprintCallable)
			void SetBullets(int _iValue);
		UFUNCTION(BlueprintCallable)
			int GetBullets();

};
