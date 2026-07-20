#include "pch.h"

#include "FN_BuildingTooltip_classes.h"

UClass* UBuildingTooltip_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C");

	return Class;
}

// Function /Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:SetupTooltip
void UBuildingTooltip_C::SetupTooltip(FString InBuildingTemplateId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:SetupTooltip");

	FUBuildingTooltip_C_SetupTooltip_Params Parms;

	Parms.InBuildingTemplateId = InBuildingTemplateId;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:GetGadget
class UFortItemDefinition* UBuildingTooltip_C::GetGadget(class UHomeBaseBuilding* Building)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:GetGadget");

	FUBuildingTooltip_C_GetGadget_Params Parms;

	Parms.Building = Building;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:Set Visible
void UBuildingTooltip_C::Set_Visible(bool In_Visible)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:Set Visible");

	FUBuildingTooltip_C_Set_Visible_Params Parms;

	Parms.In_Visible = In_Visible;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:Construct
void UBuildingTooltip_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:ExecuteUbergraph_BuildingTooltip
void UBuildingTooltip_C::ExecuteUbergraph_BuildingTooltip(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/BuildingTooltip.BuildingTooltip_C:ExecuteUbergraph_BuildingTooltip");

	FUBuildingTooltip_C_ExecuteUbergraph_BuildingTooltip_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

