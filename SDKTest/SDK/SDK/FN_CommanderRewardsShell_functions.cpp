#include "pch.h"

#include "FN_CommanderRewardsShell_classes.h"

UClass* UCommanderRewardsShell_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C");

	return Class;
}

// Function /Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:CreateLevelBox
void UCommanderRewardsShell_C::CreateLevelBox(int32_t InLevel, bool isFirstLevel)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:CreateLevelBox");

	FUCommanderRewardsShell_C_CreateLevelBox_Params Parms;

	Parms.InLevel = InLevel;
	Parms.isFirstLevel = isFirstLevel;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:Init
void UCommanderRewardsShell_C::Init()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:Init");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:Construct
void UCommanderRewardsShell_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:ExecuteUbergraph_CommanderRewardsShell
void UCommanderRewardsShell_C::ExecuteUbergraph_CommanderRewardsShell(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderRewardsShell.CommanderRewardsShell_C:ExecuteUbergraph_CommanderRewardsShell");

	FUCommanderRewardsShell_C_ExecuteUbergraph_CommanderRewardsShell_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

