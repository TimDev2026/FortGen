#include "pch.h"

#include "FN_GET_DirectPhysicalDamage_classes.h"

UClass* UGET_DirectPhysicalDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectPhysicalDamage.GET_DirectPhysicalDamage_C");

	return Class;
}

