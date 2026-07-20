#include "pch.h"

#include "FN_B_AirStrike_Placement_classes.h"

UClass* AB_AirStrike_Placement_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirStrike_Placement.B_AirStrike_Placement_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirStrike_Placement.B_AirStrike_Placement_C:UserConstructionScript
void AB_AirStrike_Placement_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirStrike_Placement.B_AirStrike_Placement_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirStrike_Placement.B_AirStrike_Placement_C:ReceiveBeginPlay
void AB_AirStrike_Placement_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirStrike_Placement.B_AirStrike_Placement_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirStrike_Placement.B_AirStrike_Placement_C:ExecuteUbergraph_B_AirStrike_Placement
void AB_AirStrike_Placement_C::ExecuteUbergraph_B_AirStrike_Placement(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_AirStrike_Placement.B_AirStrike_Placement_C:ExecuteUbergraph_B_AirStrike_Placement");

	FAB_AirStrike_Placement_C_ExecuteUbergraph_B_AirStrike_Placement_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

