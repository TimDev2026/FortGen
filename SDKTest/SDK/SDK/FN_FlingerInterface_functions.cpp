#include "pch.h"

#include "FN_FlingerInterface_classes.h"

UClass* UFlingerInterface_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C");

	return Class;
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerEnemyDied
void UFlingerInterface_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerEnemyDied");

	FUFlingerInterface_C_FlingerEnemyDied_Params Parms;

	Parms.PawnThatDied = PawnThatDied;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:AlertEnemySpawnedByFlinger
void UFlingerInterface_C::AlertEnemySpawnedByFlinger(FVector PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:AlertEnemySpawnedByFlinger");

	FUFlingerInterface_C_AlertEnemySpawnedByFlinger_Params Parms;

	Parms.PushMomentum = PushMomentum;
	Parms.PushDuration = PushDuration;
	Parms.OwningFlinger = OwningFlinger;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerEnemyFailedToSpawn
void UFlingerInterface_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerEnemyFailedToSpawn");

	FUFlingerInterface_C_FlingerEnemyFailedToSpawn_Params Parms;

	Parms.FailedProjectile = FailedProjectile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerThrewAProjectileContainingAnEnemy
void UFlingerInterface_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerThrewAProjectileContainingAnEnemy");

	FUFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params Parms;

	Parms.Projectile = Projectile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerCan'tSpawnAnEnemy
void UFlingerInterface_C::FlingerCan_tSpawnAnEnemy()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerCan'tSpawnAnEnemy");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerCanSpawnAnEnemy
void UFlingerInterface_C::FlingerCanSpawnAnEnemy()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerCanSpawnAnEnemy");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:CanFlingerSpawnAnEnemy
void UFlingerInterface_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:CanFlingerSpawnAnEnemy");

	FUFlingerInterface_C_CanFlingerSpawnAnEnemy_Params Parms;

	Parms.ActorWhoAsked = ActorWhoAsked;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerSpawnedAnEnemy
void UFlingerInterface_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Flinger/Blueprints/FlingerInterface.FlingerInterface_C:FlingerSpawnedAnEnemy");

	FUFlingerInterface_C_FlingerSpawnedAnEnemy_Params Parms;

	Parms.EnemySpawned = EnemySpawned;
	Parms.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	ProcessEvent(FN, &Parms);
}

