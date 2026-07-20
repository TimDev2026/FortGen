#include "pch.h"

#include "FN_BuildingPanelClearSlotTile_classes.h"

UClass* UBuildingPanelClearSlotTile_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Building/BuildingPanelClearSlotTile.BuildingPanelClearSlotTile_C");

	return Class;
}

