#include "pch.h"

#include "FN_GE_Explorer_OffensiveDebuff_classes.h"

UClass* UGE_Explorer_OffensiveDebuff_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Explorer_OffensiveDebuff.GE_Explorer_OffensiveDebuff_C");

	return Class;
}

