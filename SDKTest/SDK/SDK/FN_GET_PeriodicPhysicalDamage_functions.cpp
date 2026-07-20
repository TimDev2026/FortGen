#include "pch.h"

#include "FN_GET_PeriodicPhysicalDamage_classes.h"

UClass* UGET_PeriodicPhysicalDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C");

	return Class;
}

