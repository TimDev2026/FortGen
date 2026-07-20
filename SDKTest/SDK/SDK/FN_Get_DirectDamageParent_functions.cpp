#include "pch.h"

#include "FN_Get_DirectDamageParent_classes.h"

UClass* UGet_DirectDamageParent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/Get_DirectDamageParent.Get_DirectDamageParent_C");

	return Class;
}

