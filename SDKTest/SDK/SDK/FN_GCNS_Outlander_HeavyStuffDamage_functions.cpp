#include "pch.h"

#include "FN_GCNS_Outlander_HeavyStuffDamage_classes.h"

UClass* UGCNS_Outlander_HeavyStuffDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GCNS_Outlander_HeavyStuffDamage.GCNS_Outlander_HeavyStuffDamage_C");

	return Class;
}

