#pragma once

#include "CoreMinimal.h"
#include "GameCharacter.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class SNIPER_API APlayerCharacter : public AGameCharacter
{
	GENERATED_BODY()
	
	public:
		APlayerCharacter();

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Info", meta = (DisplayName = "Stats Component"))
			class UPlayerCharacterStats* m_statsComponent;

		UPROPERTY(BlueprintReadWrite, Category = Mesh)
			USkeletalMeshComponent* m_pGunMesh;

	public:
		virtual void Tick(float DeltaTime) override;
};
