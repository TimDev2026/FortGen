#include "pch.h"

#include "FN_GE_BlasterBlastDamage_classes.h"

UClass* UGE_BlasterBlastDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Blaster/GE_BlasterBlastDamage.GE_BlasterBlastDamage_C");

	return Class;
}

