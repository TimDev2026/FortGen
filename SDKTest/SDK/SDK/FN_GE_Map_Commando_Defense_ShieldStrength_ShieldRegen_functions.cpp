#include "pch.h"

#include "FN_GE_Map_Commando_Defense_ShieldStrength_ShieldRegen_classes.h"

UClass* UGE_Map_Commando_Defense_ShieldStrength_ShieldRegen_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Balance/CombinedStats/Commando/MappedEffects/GE_Map_Commando_Defense_ShieldStrength_ShieldRegen.GE_Map_Commando_Defense_ShieldStrength_ShieldRegen_C");

	return Class;
}

