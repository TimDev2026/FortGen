#include "pch.h"

#include "FN_ItemDurabilityMeter_classes.h"

UClass* UItemDurabilityMeter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C");

	return Class;
}

// Function /Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Set Backfill Color
void UItemDurabilityMeter_C::Set_Backfill_Color(FLinearColor Backfill_Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Set Backfill Color");

	FUItemDurabilityMeter_C_Set_Backfill_Color_Params Parms;

	Parms.Backfill_Color = Backfill_Color;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Set Durability
void UItemDurabilityMeter_C::Set_Durability(float Durability)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Set Durability");

	FUItemDurabilityMeter_C_Set_Durability_Params Parms;

	Parms.Durability = Durability;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Update
void UItemDurabilityMeter_C::Update(FVector2D Draw_Size, float Durability)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Update");

	FUItemDurabilityMeter_C_Update_Params Parms;

	Parms.Draw_Size = Draw_Size;
	Parms.Durability = Durability;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Construct
void UItemDurabilityMeter_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:ExecuteUbergraph_ItemDurabilityMeter
void UItemDurabilityMeter_C::ExecuteUbergraph_ItemDurabilityMeter(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemDurabilityMeter.ItemDurabilityMeter_C:ExecuteUbergraph_ItemDurabilityMeter");

	FUItemDurabilityMeter_C_ExecuteUbergraph_ItemDurabilityMeter_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

