// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacterStats.h"

// Sets default values for this component's properties
UGameCharacterStats::UGameCharacterStats()
{
	PrimaryComponentTick.bCanEverTick = false;
	m_bIsAlive = true;

	m_mFloatWLimitStats = TMap<FString, FFloatWLimits>();
	m_mIntWLimitStats = TMap<FString, FIntWLimits>();
	m_mFloatStats = TMap<FString, float>();
	m_mIntStats = TMap<FString, int>();
}


// Called when the game starts
void UGameCharacterStats::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UGameCharacterStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UGameCharacterStats::SetIsAlive(bool _bValue)
{
	if (m_bIsAlive && !_bValue)
	{
		EOnCharacterDeathDelegate.Broadcast();
	}
	m_bIsAlive = _bValue;
}

bool UGameCharacterStats::GetIsAlive()
{
	return m_bIsAlive;
}

