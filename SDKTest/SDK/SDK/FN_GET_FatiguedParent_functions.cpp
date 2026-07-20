#include "pch.h"

#include "FN_GET_FatiguedParent_classes.h"

UClass* UGET_FatiguedParent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_FatiguedParent.GET_FatiguedParent_C");

	return Class;
}

