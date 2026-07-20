#include "pch.h"

#include "FN_GET_AfflictedParent_classes.h"

UClass* UGET_AfflictedParent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_AfflictedParent.GET_AfflictedParent_C");

	return Class;
}

