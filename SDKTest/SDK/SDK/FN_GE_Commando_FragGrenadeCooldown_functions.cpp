#include "pch.h"

#include "FN_GE_Commando_FragGrenadeCooldown_classes.h"

UClass* UGE_Commando_FragGrenadeCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GE_Commando_FragGrenadeCooldown.GE_Commando_FragGrenadeCooldown_C");

	return Class;
}

