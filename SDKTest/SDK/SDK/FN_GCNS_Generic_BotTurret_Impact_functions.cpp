#include "pch.h"

#include "FN_GCNS_Generic_BotTurret_Impact_classes.h"

UClass* UGCNS_Generic_BotTurret_Impact_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNS_Generic_BotTurret_Impact.GCNS_Generic_BotTurret_Impact_C");

	return Class;
}

