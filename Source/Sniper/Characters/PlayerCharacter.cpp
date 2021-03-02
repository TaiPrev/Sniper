#include "PlayerCharacter.h"
#include "Stats/PlayerCharacterStats.h"

APlayerCharacter::APlayerCharacter()
{
	m_statsComponent = CreateDefaultSubobject<UPlayerCharacterStats>(TEXT("UPlayerCharacterStats"));
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
