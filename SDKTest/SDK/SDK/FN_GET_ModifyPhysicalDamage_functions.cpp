#include "pch.h"

#include "FN_GET_ModifyPhysicalDamage_classes.h"

UClass* UGET_ModifyPhysicalDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_ModifyPhysicalDamage.GET_ModifyPhysicalDamage_C");

	return Class;
}

