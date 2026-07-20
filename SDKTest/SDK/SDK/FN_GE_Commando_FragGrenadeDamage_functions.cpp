#include "pch.h"

#include "FN_GE_Commando_FragGrenadeDamage_classes.h"

UClass* UGE_Commando_FragGrenadeDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GE_Commando_FragGrenadeDamage.GE_Commando_FragGrenadeDamage_C");

	return Class;
}

