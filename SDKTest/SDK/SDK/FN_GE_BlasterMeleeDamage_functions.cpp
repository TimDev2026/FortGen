#include "pch.h"

#include "FN_GE_BlasterMeleeDamage_classes.h"

UClass* UGE_BlasterMeleeDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Blaster/GE_BlasterMeleeDamage.GE_BlasterMeleeDamage_C");

	return Class;
}

