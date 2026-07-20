#include "pch.h"

#include "FN_Tooltip_CoreStat_classes.h"

UClass* UTooltip_CoreStat_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/Tooltip-CoreStat.Tooltip-CoreStat_C");

	return Class;
}

// Function /Game/UI/Global_Elements/Tooltip-CoreStat.Tooltip-CoreStat_C:Update
void UTooltip_CoreStat_C::Update(FHeroCoreStat Data, float Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-CoreStat.Tooltip-CoreStat_C:Update");

	FUTooltip_CoreStat_C_Update_Params Parms;

	Parms.Data = Data;
	Parms.Value = Value;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-CoreStat.Tooltip-CoreStat_C:Construct
void UTooltip_CoreStat_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-CoreStat.Tooltip-CoreStat_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-CoreStat.Tooltip-CoreStat_C:ExecuteUbergraph_Tooltip-CoreStat
void UTooltip_CoreStat_C::ExecuteUbergraph_Tooltip_CoreStat(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-CoreStat.Tooltip-CoreStat_C:ExecuteUbergraph_Tooltip-CoreStat");

	FUTooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

