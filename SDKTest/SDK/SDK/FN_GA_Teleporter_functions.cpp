#include "pch.h"

#include "FN_GA_Teleporter_classes.h"

UClass* UGA_Teleporter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:GetSecondTeleporterSpawnLoc
void UGA_Teleporter_C::GetSecondTeleporterSpawnLoc(class AActor* FirstTeleporter, FTransform SpawnTransform)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:GetSecondTeleporterSpawnLoc");

	FUGA_Teleporter_C_GetSecondTeleporterSpawnLoc_Params Parms;

	Parms.FirstTeleporter = FirstTeleporter;
	Parms.SpawnTransform = SpawnTransform;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:InitPortalAndSpawnTargetTeleporter
void UGA_Teleporter_C::InitPortalAndSpawnTargetTeleporter(class AB_Teleporter_C* NewTeleporter)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:InitPortalAndSpawnTargetTeleporter");

	FUGA_Teleporter_C_InitPortalAndSpawnTargetTeleporter_Params Parms;

	Parms.NewTeleporter = NewTeleporter;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:DestroyExistingPortalsForPlayer
void UGA_Teleporter_C::DestroyExistingPortalsForPlayer(class AController* Controller)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:DestroyExistingPortalsForPlayer");

	FUGA_Teleporter_C_DestroyExistingPortalsForPlayer_Params Parms;

	Parms.Controller = Controller;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:K2_ActivateAbility
void UGA_Teleporter_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:ExecuteUbergraph_GA_Teleporter
void UGA_Teleporter_C::ExecuteUbergraph_GA_Teleporter(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/GA_Teleporter.GA_Teleporter_C:ExecuteUbergraph_GA_Teleporter");

	FUGA_Teleporter_C_ExecuteUbergraph_GA_Teleporter_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

