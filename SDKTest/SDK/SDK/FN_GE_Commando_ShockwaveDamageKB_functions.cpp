#include "pch.h"

#include "FN_GE_Commando_ShockwaveDamageKB_classes.h"

UClass* UGE_Commando_ShockwaveDamageKB_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GE_Commando_ShockwaveDamageKB.GE_Commando_ShockwaveDamageKB_C");

	return Class;
}

