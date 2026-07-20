#include "pch.h"

#include "FN_GE_Commando_FragGrenadeKeepOutDamage_classes.h"

UClass* UGE_Commando_FragGrenadeKeepOutDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GE_Commando_FragGrenadeKeepOutDamage.GE_Commando_FragGrenadeKeepOutDamage_C");

	return Class;
}

