#include "pch.h"

#include "FN_GE_Outlander_ReadyForAnything_classes.h"

UClass* UGE_Outlander_ReadyForAnything_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GE_Outlander_ReadyForAnything.GE_Outlander_ReadyForAnything_C");

	return Class;
}

