#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacterStats.generated.h"

UCLASS()
class SNIPER_API UPlayerCharacterStats : public UGameCharacterStats
{
	GENERATED_BODY()
	
	public:
		UPlayerCharacterStats();

	protected:
		UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (DisplayName = "Lives"))
			FIntWLimits m_Lives;
		UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (DisplayName = "Lives"))
			FIntWLimits m_Bullets;
};
