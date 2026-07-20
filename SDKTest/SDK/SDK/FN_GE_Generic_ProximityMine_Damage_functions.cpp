#include "pch.h"

#include "FN_GE_Generic_ProximityMine_Damage_classes.h"

UClass* UGE_Generic_ProximityMine_Damage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GE_Generic_ProximityMine_Damage.GE_Generic_ProximityMine_Damage_C");

	return Class;
}

