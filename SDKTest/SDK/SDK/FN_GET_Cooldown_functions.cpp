#include "pch.h"

#include "FN_GET_Cooldown_classes.h"

UClass* UGET_Cooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_Cooldown.GET_Cooldown_C");

	return Class;
}

