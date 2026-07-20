#include "pch.h"

#include "FN_GE_ATLASZapDamage_classes.h"

UClass* UGE_ATLASZapDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_ATLASZapDamage.GE_ATLASZapDamage_C");

	return Class;
}

