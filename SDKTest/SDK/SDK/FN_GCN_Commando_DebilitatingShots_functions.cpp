#include "pch.h"

#include "FN_GCN_Commando_DebilitatingShots_classes.h"

UClass* AGCN_Commando_DebilitatingShots_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GCN_Commando_DebilitatingShots.GCN_Commando_DebilitatingShots_C");

	return Class;
}

