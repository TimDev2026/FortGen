#include "pch.h"

#include "FN_GE_Explorer_OffensiveDamage_classes.h"

UClass* UGE_Explorer_OffensiveDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Explorer_OffensiveDamage.GE_Explorer_OffensiveDamage_C");

	return Class;
}

