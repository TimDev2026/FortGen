#include "pch.h"

#include "FN_GET_PeriodicDamageParent_classes.h"

UClass* UGET_PeriodicDamageParent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicDamageParent.GET_PeriodicDamageParent_C");

	return Class;
}

