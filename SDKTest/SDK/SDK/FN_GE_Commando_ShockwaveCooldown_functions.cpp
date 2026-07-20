#include "pch.h"

#include "FN_GE_Commando_ShockwaveCooldown_classes.h"

UClass* UGE_Commando_ShockwaveCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GE_Commando_ShockwaveCooldown.GE_Commando_ShockwaveCooldown_C");

	return Class;
}

