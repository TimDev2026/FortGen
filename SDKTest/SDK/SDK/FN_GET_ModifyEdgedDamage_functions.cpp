#include "pch.h"

#include "FN_GET_ModifyEdgedDamage_classes.h"

UClass* UGET_ModifyEdgedDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_ModifyEdgedDamage.GET_ModifyEdgedDamage_C");

	return Class;
}

