#include "GameCharacter.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	m_pMesh->SetupAttachment(RootComponent);
	m_pMesh->bCastDynamicShadow = false;
	m_pMesh->CastShadow = false;
}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

