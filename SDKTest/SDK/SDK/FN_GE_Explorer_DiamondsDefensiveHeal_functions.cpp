#include "pch.h"

#include "FN_GE_Explorer_DiamondsDefensiveHeal_classes.h"

UClass* UGE_Explorer_DiamondsDefensiveHeal_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Explorer_DiamondsDefensiveHeal.GE_Explorer_DiamondsDefensiveHeal_C");

	return Class;
}

