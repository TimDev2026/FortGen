#include "pch.h"

#include "FN_GET_PeriodicCreatureDamage_classes.h"

UClass* UGET_PeriodicCreatureDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicCreatureDamage.GET_PeriodicCreatureDamage_C");

	return Class;
}

