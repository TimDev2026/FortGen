#include "pch.h"

#include "FN_RewardsListWidget_classes.h"

UClass* URewardsListWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Rewards/RewardsListWidget.RewardsListWidget_C");

	return Class;
}

// Function /Game/UI/Rewards/RewardsListWidget.RewardsListWidget_C:PopulateRewards
void URewardsListWidget_C::PopulateRewards(TArray<FFortQuestReward> Rewards)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Rewards/RewardsListWidget.RewardsListWidget_C:PopulateRewards");

	FURewardsListWidget_C_PopulateRewards_Params Parms;

	Parms.Rewards = Rewards;

	ProcessEvent(FN, &Parms);
}

