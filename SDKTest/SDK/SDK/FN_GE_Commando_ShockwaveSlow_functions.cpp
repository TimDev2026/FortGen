#include "pch.h"

#include "FN_GE_Commando_ShockwaveSlow_classes.h"

UClass* UGE_Commando_ShockwaveSlow_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GE_Commando_ShockwaveSlow.GE_Commando_ShockwaveSlow_C");

	return Class;
}

