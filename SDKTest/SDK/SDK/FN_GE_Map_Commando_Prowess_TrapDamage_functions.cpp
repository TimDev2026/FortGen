#include "pch.h"

#include "FN_GE_Map_Commando_Prowess_TrapDamage_classes.h"

UClass* UGE_Map_Commando_Prowess_TrapDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Balance/CombinedStats/Commando/MappedEffects/GE_Map_Commando_Prowess_TrapDamage.GE_Map_Commando_Prowess_TrapDamage_C");

	return Class;
}

