#include "pch.h"

#include "FN_GE_Generic_BotTurret_EnergyDamage_classes.h"

UClass* UGE_Generic_BotTurret_EnergyDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GE_Generic_BotTurret_EnergyDamage.GE_Generic_BotTurret_EnergyDamage_C");

	return Class;
}

