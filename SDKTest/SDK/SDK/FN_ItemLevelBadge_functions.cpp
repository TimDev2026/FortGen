#include "pch.h"

#include "FN_ItemLevelBadge_classes.h"

UClass* UItemLevelBadge_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemLevelBadge.ItemLevelBadge_C");

	return Class;
}

// Function /Game/UI/Items/ItemLevelBadge.ItemLevelBadge_C:Refresh
void UItemLevelBadge_C::Refresh(ItemDisplayMode Display_Mode, int32_t Max, int32_t Level)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemLevelBadge.ItemLevelBadge_C:Refresh");

	FUItemLevelBadge_C_Refresh_Params Parms;

	Parms.Display_Mode = Display_Mode;
	Parms.Max = Max;
	Parms.Level = Level;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemLevelBadge.ItemLevelBadge_C:Update
void UItemLevelBadge_C::Update(int32_t Max, int32_t Level, EFortBrushSize Brush_Size, FFortRarityItemData Rarity_Data, ItemDisplayMode Display_Mode)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemLevelBadge.ItemLevelBadge_C:Update");

	FUItemLevelBadge_C_Update_Params Parms;

	Parms.Max = Max;
	Parms.Level = Level;
	Parms.Brush_Size = Brush_Size;
	Parms.Rarity_Data = Rarity_Data;
	Parms.Display_Mode = Display_Mode;

	ProcessEvent(FN, &Parms);
}

