#include "pch.h"

#include "FN_MissionTooltip_classes.h"

UClass* UMissionTooltip_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Theater/MissionTooltip.MissionTooltip_C");

	return Class;
}

// Function /Game/UI/Theater/MissionTooltip.MissionTooltip_C:HandleMissionRewards
void UMissionTooltip_C::HandleMissionRewards()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionTooltip.MissionTooltip_C:HandleMissionRewards");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Theater/MissionTooltip.MissionTooltip_C:UpdateMissionInfo
void UMissionTooltip_C::UpdateMissionInfo(class ABP_Hex_PARENT_C* Mission_Details)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionTooltip.MissionTooltip_C:UpdateMissionInfo");

	FUMissionTooltip_C_UpdateMissionInfo_Params Parms;

	Parms.Mission_Details = Mission_Details;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/MissionTooltip.MissionTooltip_C:Construct
void UMissionTooltip_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionTooltip.MissionTooltip_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Theater/MissionTooltip.MissionTooltip_C:ExecuteUbergraph_MissionTooltip
void UMissionTooltip_C::ExecuteUbergraph_MissionTooltip(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/MissionTooltip.MissionTooltip_C:ExecuteUbergraph_MissionTooltip");

	FUMissionTooltip_C_ExecuteUbergraph_MissionTooltip_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__MissionRewardItem_Tooltip_C_135::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Theater/MissionTooltip.PLACEHOLDER-CLASS__MissionRewardItem-Tooltip_C_135");

	return Class;
}

UClass* PLACEHOLDER_CLASS__BP_Hex_PARENT_C_136::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Theater/MissionTooltip.PLACEHOLDER-CLASS__BP_Hex_PARENT_C_136");

	return Class;
}

UClass* PLACEHOLDER_CLASS__PowerRequirement_C_137::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Theater/MissionTooltip.PLACEHOLDER-CLASS__PowerRequirement_C_137");

	return Class;
}

