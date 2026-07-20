#include "pch.h"

#include "FN_MissionRewardItem_Tooltip_classes.h"

UClass* UMissionRewardItem_Tooltip_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C");

	return Class;
}

// Function /Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Rarity Color (SlateColor)
FSlateColor UMissionRewardItem_Tooltip_C::Get_Rarity_Color__SlateColor_()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Rarity Color (SlateColor)");

	FUMissionRewardItem_Tooltip_C_Get_Rarity_Color__SlateColor__Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Rarity Color
FLinearColor UMissionRewardItem_Tooltip_C::Get_Rarity_Color()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Rarity Color");

	FUMissionRewardItem_Tooltip_C_Get_Rarity_Color_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Reward Icon
FSlateBrush UMissionRewardItem_Tooltip_C::Get_Reward_Icon()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Reward Icon");

	FUMissionRewardItem_Tooltip_C_Get_Reward_Icon_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Reward Name
FText UMissionRewardItem_Tooltip_C::Get_Reward_Name()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C:Get Reward Name");

	FUMissionRewardItem_Tooltip_C_Get_Reward_Name_Params Parms;


	ProcessEvent(FN, &Parms);
}

