#include "pch.h"

#include "FN_Trap_Floor_Launcher_classes.h"

UClass* ATrap_Floor_Launcher_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C");

	return Class;
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:SetFloorPosition
void ATrap_Floor_Launcher_C::SetFloorPosition(float NewFloorPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:SetFloorPosition");

	FATrap_Floor_Launcher_C_SetFloorPosition_Params Parms;

	Parms.NewFloorPosition = NewFloorPosition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:UserConstructionScript
void ATrap_Floor_Launcher_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:Fire__FinishedFunc
void ATrap_Floor_Launcher_C::Fire__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:Fire__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:Fire__UpdateFunc
void ATrap_Floor_Launcher_C::Fire__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:Fire__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnReloadEnd
void ATrap_Floor_Launcher_C::OnReloadEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnReloadEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnPlaced
void ATrap_Floor_Launcher_C::OnPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnFinishedBuilding
void ATrap_Floor_Launcher_C::OnFinishedBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnFinishedBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnOutOfDurability
void ATrap_Floor_Launcher_C::OnOutOfDurability()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:OnOutOfDurability");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap
void ATrap_Floor_Launcher_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	FATrap_Floor_Launcher_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:ExecuteUbergraph_Trap_Floor_Launcher
void ATrap_Floor_Launcher_C::ExecuteUbergraph_Trap_Floor_Launcher(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Launcher.Trap_Floor_Launcher_C:ExecuteUbergraph_Trap_Floor_Launcher");

	FATrap_Floor_Launcher_C_ExecuteUbergraph_Trap_Floor_Launcher_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

