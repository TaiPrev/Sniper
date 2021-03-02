#pragma once

#include "CoreMinimal.h"
#include "GameCharacterStats.h"
#include "PreyCharacterStats.generated.h"


UCLASS()
class SNIPER_API UPreyCharacterStats : public UGameCharacterStats
{
	GENERATED_BODY()
	
	public:
		UPreyCharacterStats();

	protected:
		UPROPERTY(EditDefaultsOnly, Category = "Prey", meta = (DisplayName = "Colour"))
			FColor m_cColour;

	public:
		UFUNCTION(BlueprintCallable)
			void SetColour(FColor _cValue);
		UFUNCTION(BlueprintCallable)
			FColor GetColour();
};
