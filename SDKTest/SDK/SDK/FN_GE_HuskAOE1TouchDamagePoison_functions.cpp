#include "pch.h"

#include "FN_GE_HuskAOE1TouchDamagePoison_classes.h"

UClass* UGE_HuskAOE1TouchDamagePoison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GE_HuskAOE1TouchDamagePoison.GE_HuskAOE1TouchDamagePoison_C");

	return Class;
}

