#include "pch.h"

#include "FN_GET_DirectBallisticDamage_classes.h"

UClass* UGET_DirectBallisticDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectBallisticDamage.GET_DirectBallisticDamage_C");

	return Class;
}

