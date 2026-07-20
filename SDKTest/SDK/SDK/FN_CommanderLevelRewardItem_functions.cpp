#include "pch.h"

#include "FN_CommanderLevelRewardItem_classes.h"

UClass* UCommanderLevelRewardItem_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/CommanderLevelRewards/CommanderLevelRewardItem.CommanderLevelRewardItem_C");

	return Class;
}

// Function /Game/UI/CommanderLevelRewards/CommanderLevelRewardItem.CommanderLevelRewardItem_C:Get_RewardIcon_ToolTipWidget
class UWidget* UCommanderLevelRewardItem_C::Get_RewardIcon_ToolTipWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderLevelRewardItem.CommanderLevelRewardItem_C:Get_RewardIcon_ToolTipWidget");

	FUCommanderLevelRewardItem_C_Get_RewardIcon_ToolTipWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/CommanderLevelRewards/CommanderLevelRewardItem.CommanderLevelRewardItem_C:Init
void UCommanderLevelRewardItem_C::Init(FFortItemQuantityPair InItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/CommanderLevelRewards/CommanderLevelRewardItem.CommanderLevelRewardItem_C:Init");

	FUCommanderLevelRewardItem_C_Init_Params Parms;

	Parms.InItem = InItem;

	ProcessEvent(FN, &Parms);
}

