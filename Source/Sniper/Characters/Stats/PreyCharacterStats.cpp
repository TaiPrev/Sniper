// Fill out your copyright notice in the Description page of Project Settings.


#include "PreyCharacterStats.h"

UPreyCharacterStats::UPreyCharacterStats()
{
	m_cColour = FColor::White;
}

void UPreyCharacterStats::SetColour(FColor _cValue)
{
	m_cColour = _cValue;
}

FColor UPreyCharacterStats::GetColour()
{
	return m_cColour;
}
