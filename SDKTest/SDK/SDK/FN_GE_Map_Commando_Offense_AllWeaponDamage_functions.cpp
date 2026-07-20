#include "pch.h"

#include "FN_GE_Map_Commando_Offense_AllWeaponDamage_classes.h"

UClass* UGE_Map_Commando_Offense_AllWeaponDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Balance/CombinedStats/Commando/MappedEffects/GE_Map_Commando_Offense_AllWeaponDamage.GE_Map_Commando_Offense_AllWeaponDamage_C");

	return Class;
}

