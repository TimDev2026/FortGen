#include "pch.h"

#include "FN_GET_PeriodicEnergyDamage_classes.h"

UClass* UGET_PeriodicEnergyDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C");

	return Class;
}

