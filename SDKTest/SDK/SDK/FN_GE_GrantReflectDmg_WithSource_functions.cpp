#include "pch.h"

#include "FN_GE_GrantReflectDmg_WithSource_classes.h"

UClass* UGE_GrantReflectDmg_WithSource_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_GrantReflectDmg_WithSource.GE_GrantReflectDmg_WithSource_C");

	return Class;
}

