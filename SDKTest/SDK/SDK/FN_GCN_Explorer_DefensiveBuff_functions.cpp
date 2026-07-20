#include "pch.h"

#include "FN_GCN_Explorer_DefensiveBuff_classes.h"

UClass* AGCN_Explorer_DefensiveBuff_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GCN_Explorer_DefensiveBuff.GCN_Explorer_DefensiveBuff_C");

	return Class;
}

