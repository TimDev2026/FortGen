#include "pch.h"

#include "FN_GET_DamageParent_classes.h"

UClass* UGET_DamageParent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DamageParent.GET_DamageParent_C");

	return Class;
}

