#include "PlayerCharacterStats.h"

UPlayerCharacterStats::UPlayerCharacterStats()
{
	m_Lives = FIntWLimits(0, 0, 3);
	m_Bullets = FIntWLimits(0, 0, 10);
}