#include "pch.h"

#include "FN_GE_Commando_GoinCommandoTempEnergyDamage_classes.h"

UClass* UGE_Commando_GoinCommandoTempEnergyDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/GE_Commando_GoinCommandoTempEnergyDamage.GE_Commando_GoinCommandoTempEnergyDamage_C");

	return Class;
}

