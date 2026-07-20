#include "pch.h"

#include "FN_GE_GrantReflectMeleeDmg_classes.h"

UClass* UGE_GrantReflectMeleeDmg_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_GrantReflectMeleeDmg.GE_GrantReflectMeleeDmg_C");

	return Class;
}

