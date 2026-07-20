#include "pch.h"

#include "FN_GE_Outlander_KnockKnockDamage_classes.h"

UClass* UGE_Outlander_KnockKnockDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GE_Outlander_KnockKnockDamage.GE_Outlander_KnockKnockDamage_C");

	return Class;
}

