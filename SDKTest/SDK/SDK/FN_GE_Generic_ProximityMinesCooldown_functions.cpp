#include "pch.h"

#include "FN_GE_Generic_ProximityMinesCooldown_classes.h"

UClass* UGE_Generic_ProximityMinesCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GE_Generic_ProximityMinesCooldown.GE_Generic_ProximityMinesCooldown_C");

	return Class;
}

