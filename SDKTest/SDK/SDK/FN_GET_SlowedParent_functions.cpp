#include "pch.h"

#include "FN_GET_SlowedParent_classes.h"

UClass* UGET_SlowedParent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_SlowedParent.GET_SlowedParent_C");

	return Class;
}

