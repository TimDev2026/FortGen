#include "pch.h"

#include "FN_GET_Snare_classes.h"

UClass* UGET_Snare_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_Snare.GET_Snare_C");

	return Class;
}

