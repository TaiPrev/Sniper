#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../Utilities/Types.h"
#include "GameCharacterStats.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharacterDeath);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SNIPER_API UGameCharacterStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameCharacterStats();

	//Dynamic Data
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (DisplayName = "Dynamic Float With Limit Stats"))
		TMap<FString, FFloatWLimits> m_mFloatWLimitStats;
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (DisplayName = "Dynamic Integer With Limit Stats"))
		TMap<FString, FIntWLimits> m_mIntWLimitStats;
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (DisplayName = "Dynamic Float With Limit Stats"))
		TMap<FString, float> m_mFloatStats;
	UPROPERTY(EditDefaultsOnly, Category = "General", meta = (DisplayName = "Dynamic Integer With Limit Stats"))
		TMap<FString, int> m_mIntStats;

	//DELEGATES//
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "General | EventDispatchers", meta = (DisplayName = "On Character Death Delegate"))
		FOnCharacterDeath EOnCharacterDeathDelegate;


protected:
	UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (DisplayName = "Lives"))
		FIntWLimits m_Lives;
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
