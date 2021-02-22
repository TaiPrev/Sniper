// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameCharacterStats.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharacterDeath);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SNIPER_API UGameCharacterStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameCharacterStats();

	//DELEGATES//
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "General | EventDispatchers", meta = (DisplayName = "On Character Death Delegate"))
		FOnCharacterDeath EOnCharacterDeathDelegate;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (DisplayName = "Is Alive"))
		bool m_bIsAlive;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		void SetIsAlive(bool _bValue);
	UFUNCTION(BlueprintCallable)
		bool GetIsAlive();
};
