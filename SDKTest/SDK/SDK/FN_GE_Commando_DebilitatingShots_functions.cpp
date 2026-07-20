#include "pch.h"

#include "FN_GE_Commando_DebilitatingShots_classes.h"

UClass* UGE_Commando_DebilitatingShots_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GE_Commando_DebilitatingShots.GE_Commando_DebilitatingShots_C");

	return Class;
}

