#include "pch.h"

#include "FN_GET_DirectBluntDamage_classes.h"

UClass* UGET_DirectBluntDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectBluntDamage.GET_DirectBluntDamage_C");

	return Class;
}

