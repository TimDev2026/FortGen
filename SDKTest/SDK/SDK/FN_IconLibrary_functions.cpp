#include "pch.h"

#include "FN_IconLibrary_classes.h"

UClass* UIconLibrary_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/IconLibrary.IconLibrary_C");

	return Class;
}

// Function /Game/UI/Items/IconLibrary.IconLibrary_C:Get Item Tier Icon
void UIconLibrary_C::Get_Item_Tier_Icon(FItemTierIconSet TierIconSet, EFortItemTier Tier, EFortBrushSize Size, class UObject* __WorldContext, FSlateBrush Tier_Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/IconLibrary.IconLibrary_C:Get Item Tier Icon");

	FUIconLibrary_C_Get_Item_Tier_Icon_Params Parms;

	Parms.TierIconSet = TierIconSet;
	Parms.Tier = Tier;
	Parms.Size = Size;
	Parms.__WorldContext = __WorldContext;
	Parms.Tier_Brush = Tier_Brush;

	StaticClass()->ProcessEvent(FN, &Parms);
}

