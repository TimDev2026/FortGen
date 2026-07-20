#include "pch.h"

#include "FN_GE_ReflectedDamage_classes.h"

UClass* UGE_ReflectedDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GE_ReflectedDamage.GE_ReflectedDamage_C");

	return Class;
}

