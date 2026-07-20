#include "pch.h"

#include "FN_GET_ModifyDamage_classes.h"

UClass* UGET_ModifyDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_ModifyDamage.GET_ModifyDamage_C");

	return Class;
}

