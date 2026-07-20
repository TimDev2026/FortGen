#include "pch.h"

#include "FN_GCN_Explorer_OffensiveDebuff_classes.h"

UClass* AGCN_Explorer_OffensiveDebuff_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GCN_Explorer_OffensiveDebuff.GCN_Explorer_OffensiveDebuff_C");

	return Class;
}

