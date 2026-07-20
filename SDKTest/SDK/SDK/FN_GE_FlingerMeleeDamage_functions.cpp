#include "pch.h"

#include "FN_GE_FlingerMeleeDamage_classes.h"

UClass* UGE_FlingerMeleeDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C");

	return Class;
}

