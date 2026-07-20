#include "pch.h"

#include "FN_GE_Generic_ProximityMineBonusDamage_classes.h"

UClass* UGE_Generic_ProximityMineBonusDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GE_Generic_ProximityMineBonusDamage.GE_Generic_ProximityMineBonusDamage_C");

	return Class;
}

