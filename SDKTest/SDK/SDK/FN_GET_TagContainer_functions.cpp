#include "pch.h"

#include "FN_GET_TagContainer_classes.h"

UClass* UGET_TagContainer_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_TagContainer.GET_TagContainer_C");

	return Class;
}

