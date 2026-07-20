#include "pch.h"

#include "FN_GET_MoveSpeed_classes.h"

UClass* UGET_MoveSpeed_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_MoveSpeed.GET_MoveSpeed_C");

	return Class;
}

