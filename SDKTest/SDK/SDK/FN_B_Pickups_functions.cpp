#include "pch.h"

#include "FN_B_Pickups_classes.h"

UClass* AB_Pickups_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:UserConstructionScript
void AB_Pickups_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:ReceiveBeginPlay
void AB_Pickups_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:OnPickedUp
void AB_Pickups_C::OnPickedUp()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:OnPickedUp");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:OnAboutToEnterBackpack
void AB_Pickups_C::OnAboutToEnterBackpack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:OnAboutToEnterBackpack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:CheckIfInUpdateParametersRange
void AB_Pickups_C::CheckIfInUpdateParametersRange()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:CheckIfInUpdateParametersRange");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:UpdateParameters
void AB_Pickups_C::UpdateParameters()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:UpdateParameters");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:ExecuteUbergraph_B_Pickups
void AB_Pickups_C::ExecuteUbergraph_B_Pickups(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups.B_Pickups_C:ExecuteUbergraph_B_Pickups");

	FAB_Pickups_C_ExecuteUbergraph_B_Pickups_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

