#include "pch.h"

#include "FN_GET_DirectEnergyDamage_classes.h"

UClass* UGET_DirectEnergyDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectEnergyDamage.GET_DirectEnergyDamage_C");

	return Class;
}

