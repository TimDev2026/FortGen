#include "pch.h"

#include "FN_HB_Ability_SupplyDrop_4_classes.h"

UClass* AHB_Ability_SupplyDrop_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Ability_SupplyDrop_4.HB_Ability_SupplyDrop_4_C");

	return Class;
}

