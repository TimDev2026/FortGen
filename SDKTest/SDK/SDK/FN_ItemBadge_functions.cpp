#include "pch.h"

#include "FN_ItemBadge_classes.h"

UClass* UItemBadge_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemBadge.ItemBadge_C");

	return Class;
}

// Function /Game/UI/Items/ItemBadge.ItemBadge_C:Refresh
void UItemBadge_C::Refresh(class UFortItem* Item_Data, ItemDisplayStyle Display_Style, ItemDisplayMode Display_Mode)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemBadge.ItemBadge_C:Refresh");

	FUItemBadge_C_Refresh_Params Parms;

	Parms.Item_Data = Item_Data;
	Parms.Display_Style = Display_Style;
	Parms.Display_Mode = Display_Mode;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemBadge.ItemBadge_C:Update
void UItemBadge_C::Update(EFortBrushSize Brush_Size, ItemDisplayStyle Display_Style, ItemDisplayMode Display_Mode, FFortRarityItemData RarityData, class UFortItem* Item_Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemBadge.ItemBadge_C:Update");

	FUItemBadge_C_Update_Params Parms;

	Parms.Brush_Size = Brush_Size;
	Parms.Display_Style = Display_Style;
	Parms.Display_Mode = Display_Mode;
	Parms.RarityData = RarityData;
	Parms.Item_Data = Item_Data;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__ItemLevelBadge_C_152::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemBadge.PLACEHOLDER-CLASS__ItemLevelBadge_C_152");

	return Class;
}

