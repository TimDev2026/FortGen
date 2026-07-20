#include "pch.h"

#include "FN_GE_Generic_BotTurretCooldown_classes.h"

UClass* UGE_Generic_BotTurretCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GE_Generic_BotTurretCooldown.GE_Generic_BotTurretCooldown_C");

	return Class;
}

