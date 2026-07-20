#include "pch.h"

#include "FN_GE_Commando_GoinCommandoCooldown_classes.h"

UClass* UGE_Commando_GoinCommandoCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/GE_Commando_GoinCommandoCooldown.GE_Commando_GoinCommandoCooldown_C");

	return Class;
}

