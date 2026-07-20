#include "pch.h"

#include "FN_HB_Ability_SupplyDrop_5_classes.h"

UClass* AHB_Ability_SupplyDrop_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Ability_SupplyDrop_5.HB_Ability_SupplyDrop_5_C");

	return Class;
}

