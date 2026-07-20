#include "pch.h"

#include "FN_GadgetDisplayItem_classes.h"

UClass* UGadgetDisplayItem_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetDisplayItem.GadgetDisplayItem_C");

	return Class;
}

// Function /Game/UI/HeroSelect/GadgetDisplayItem.GadgetDisplayItem_C:SetGadgetItemData
void UGadgetDisplayItem_C::SetGadgetItemData(class UFortItem* GadgetItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayItem.GadgetDisplayItem_C:SetGadgetItemData");

	FUGadgetDisplayItem_C_SetGadgetItemData_Params Parms;

	Parms.GadgetItem = GadgetItem;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__Item_C_146::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetDisplayItem.PLACEHOLDER-CLASS__Item_C_146");

	return Class;
}

