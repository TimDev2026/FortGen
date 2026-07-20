#include "pch.h"

#include "FN_GET_VulnerableParent_classes.h"

UClass* UGET_VulnerableParent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_VulnerableParent.GET_VulnerableParent_C");

	return Class;
}

