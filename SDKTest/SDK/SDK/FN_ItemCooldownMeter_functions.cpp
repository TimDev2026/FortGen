#include "pch.h"

#include "FN_ItemCooldownMeter_classes.h"

UClass* UItemCooldownMeter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemCooldownMeter.ItemCooldownMeter_C");

	return Class;
}

// Function /Game/UI/Items/ItemCooldownMeter.ItemCooldownMeter_C:GetSecondsCorrectedMinutes
int32_t UItemCooldownMeter_C::GetSecondsCorrectedMinutes(int32_t Minutes, int32_t Seconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemCooldownMeter.ItemCooldownMeter_C:GetSecondsCorrectedMinutes");

	FUItemCooldownMeter_C_GetSecondsCorrectedMinutes_Params Parms;

	Parms.Minutes = Minutes;
	Parms.Seconds = Seconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemCooldownMeter.ItemCooldownMeter_C:Set Cooldown
void UItemCooldownMeter_C::Set_Cooldown(FTimespan Time_Left, float Percentage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemCooldownMeter.ItemCooldownMeter_C:Set Cooldown");

	FUItemCooldownMeter_C_Set_Cooldown_Params Parms;

	Parms.Time_Left = Time_Left;
	Parms.Percentage = Percentage;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemCooldownMeter.ItemCooldownMeter_C:Update
void UItemCooldownMeter_C::Update(EFortBrushSize Brush_Size, FTimespan Time_Left, float Percentage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemCooldownMeter.ItemCooldownMeter_C:Update");

	FUItemCooldownMeter_C_Update_Params Parms;

	Parms.Brush_Size = Brush_Size;
	Parms.Time_Left = Time_Left;
	Parms.Percentage = Percentage;

	ProcessEvent(FN, &Parms);
}

