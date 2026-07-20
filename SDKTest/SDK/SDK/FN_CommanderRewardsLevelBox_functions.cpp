#include "pch.h"

#include "FN_CommanderRewardsLevelBox_classes.h"

UClass* UCommanderRewardsLevelBox_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/CommanderLevelRewards/CommanderRewardsLevelBox.CommanderRewardsLevelBox_C");

	return Class;
}

// Function /Game/UI/CommanderLevelRewards/CommanderRewardsLevelBox.CommanderRewardsLevelBox_C:Construct
void UCommanderRewardsLevelBox_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderRewardsLevelBox.CommanderRewardsLevelBox_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/CommanderLevelRewards/CommanderRewardsLevelBox.CommanderRewardsLevelBox_C:ExecuteUbergraph_CommanderRewardsLevelBox
void UCommanderRewardsLevelBox_C::ExecuteUbergraph_CommanderRewardsLevelBox(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderRewardsLevelBox.CommanderRewardsLevelBox_C:ExecuteUbergraph_CommanderRewardsLevelBox");

	FUCommanderRewardsLevelBox_C_ExecuteUbergraph_CommanderRewardsLevelBox_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

