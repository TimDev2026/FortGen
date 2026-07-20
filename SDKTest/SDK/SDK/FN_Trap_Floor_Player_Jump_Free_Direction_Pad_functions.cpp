#include "pch.h"

#include "FN_Trap_Floor_Player_Jump_Free_Direction_Pad_classes.h"

UClass* ATrap_Floor_Player_Jump_Free_Direction_Pad_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C");

	return Class;
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:UserConstructionScript
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnReloadEnd
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnReloadEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnReloadEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnPlaced
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnFinishedBuilding
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnFinishedBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnFinishedBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:GameplayCue.Abilities.Activation.Traps.ReloadBegin
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	FATrap_Floor_Player_Jump_Free_Direction_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnOutOfDurability
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnOutOfDurability()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:OnOutOfDurability");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	FATrap_Floor_Player_Jump_Free_Direction_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad
void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C:ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad");

	FATrap_Floor_Player_Jump_Free_Direction_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

