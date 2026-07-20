#include "pch.h"

#include "FN_Trap_Floor_Spikes_Wood_classes.h"

UClass* ATrap_Floor_Spikes_Wood_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C");

	return Class;
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:UserConstructionScript
void ATrap_Floor_Spikes_Wood_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:OnPlaced
void ATrap_Floor_Spikes_Wood_C::OnPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:OnPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:OnFinishedBuilding
void ATrap_Floor_Spikes_Wood_C::OnFinishedBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:OnFinishedBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:OnOutOfDurability
void ATrap_Floor_Spikes_Wood_C::OnOutOfDurability()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:OnOutOfDurability");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap
void ATrap_Floor_Spikes_Wood_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	FATrap_Floor_Spikes_Wood_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:ExecuteUbergraph_Trap_Floor_Spikes_Wood
void ATrap_Floor_Spikes_Wood_C::ExecuteUbergraph_Trap_Floor_Spikes_Wood(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C:ExecuteUbergraph_Trap_Floor_Spikes_Wood");

	FATrap_Floor_Spikes_Wood_C_ExecuteUbergraph_Trap_Floor_Spikes_Wood_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

