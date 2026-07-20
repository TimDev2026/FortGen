#include "pch.h"

#include "FN_GET_PeriodicPoisonDamage_classes.h"

UClass* UGET_PeriodicPoisonDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicPoisonDamage.GET_PeriodicPoisonDamage_C");

	return Class;
}

