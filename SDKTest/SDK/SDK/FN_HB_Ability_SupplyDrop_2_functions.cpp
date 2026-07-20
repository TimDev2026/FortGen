#include "pch.h"

#include "FN_HB_Ability_SupplyDrop_2_classes.h"

UClass* AHB_Ability_SupplyDrop_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Ability_SupplyDrop_2.HB_Ability_SupplyDrop_2_C");

	return Class;
}

