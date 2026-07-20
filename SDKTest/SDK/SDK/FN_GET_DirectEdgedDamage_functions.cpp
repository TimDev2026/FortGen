#include "pch.h"

#include "FN_GET_DirectEdgedDamage_classes.h"

UClass* UGET_DirectEdgedDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectEdgedDamage.GET_DirectEdgedDamage_C");

	return Class;
}

