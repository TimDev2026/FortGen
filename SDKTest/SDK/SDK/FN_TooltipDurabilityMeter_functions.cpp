#include "pch.h"

#include "FN_TooltipDurabilityMeter_classes.h"

UClass* UTooltipDurabilityMeter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/TooltipDurabilityMeter.TooltipDurabilityMeter_C");

	return Class;
}

// Function /Game/UI/Items/TooltipDurabilityMeter.TooltipDurabilityMeter_C:Draw
void UTooltipDurabilityMeter_C::Draw(float Normalized, float Current, float Max)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/TooltipDurabilityMeter.TooltipDurabilityMeter_C:Draw");

	FUTooltipDurabilityMeter_C_Draw_Params Parms;

	Parms.Normalized = Normalized;
	Parms.Current = Current;
	Parms.Max = Max;

	ProcessEvent(FN, &Parms);
}

