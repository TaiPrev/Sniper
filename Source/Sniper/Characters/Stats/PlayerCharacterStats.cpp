// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterStats.h"



UPlayerCharacterStats::UPlayerCharacterStats()
{
	m_iLifes = 0;
	m_iMaxLifes = 0;
	m_iBullets = 0;
	m_iMaxBullets = 0;
}

void UPlayerCharacterStats::SetLifes(int _iValue)
{
	m_iLifes = _iValue;
	if (m_iLifes == 0) SetIsAlive(false);
}

int UPlayerCharacterStats::GetLifes()
{
	return m_iLifes;
}

void UPlayerCharacterStats::SubtractLife()
{
	if (m_iLifes > 0) --m_iLifes;
}

void UPlayerCharacterStats::AddLife()
{
	if (m_iLifes < m_iMaxLifes) ++m_iLifes;
}

void UPlayerCharacterStats::SetMaxLifes(int _iValue)
{
	m_iMaxLifes = _iValue;
	if (m_iLifes > m_iMaxLifes) SetLifes(m_iMaxLifes);
}

int UPlayerCharacterStats::GetMaxLifes()
{
	return m_iMaxLifes;
}

void UPlayerCharacterStats::SetBullets(int _iValue)
{
	m_iBullets = _iValue;
}

int UPlayerCharacterStats::GetBullets()
{
	return m_iBullets;
}
