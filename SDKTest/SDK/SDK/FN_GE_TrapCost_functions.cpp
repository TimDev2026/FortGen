#include "pch.h"

#include "FN_GE_TrapCost_classes.h"

UClass* UGE_TrapCost_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/Generic/GE_TrapCost.GE_TrapCost_C");

	return Class;
}

