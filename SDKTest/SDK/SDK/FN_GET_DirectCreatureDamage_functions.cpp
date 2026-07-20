#include "pch.h"

#include "FN_GET_DirectCreatureDamage_classes.h"

UClass* UGET_DirectCreatureDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectCreatureDamage.GET_DirectCreatureDamage_C");

	return Class;
}

