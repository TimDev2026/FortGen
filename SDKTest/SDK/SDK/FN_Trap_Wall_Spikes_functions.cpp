#include "pch.h"

#include "FN_Trap_Wall_Spikes_classes.h"

UClass* ATrap_Wall_Spikes_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C");

	return Class;
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:UserConstructionScript
void ATrap_Wall_Spikes_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnPlaced
void ATrap_Wall_Spikes_C::OnPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnFinishedBuilding
void ATrap_Wall_Spikes_C::OnFinishedBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnFinishedBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnReloadEnd
void ATrap_Wall_Spikes_C::OnReloadEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnReloadEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap
void ATrap_Wall_Spikes_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	FATrap_Wall_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnOutOfDurability
void ATrap_Wall_Spikes_C::OnOutOfDurability()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:OnOutOfDurability");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:ExecuteUbergraph_Trap_Wall_Spikes
void ATrap_Wall_Spikes_C::ExecuteUbergraph_Trap_Wall_Spikes(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Wall_Spikes.Trap_Wall_Spikes_C:ExecuteUbergraph_Trap_Wall_Spikes");

	FATrap_Wall_Spikes_C_ExecuteUbergraph_Trap_Wall_Spikes_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

