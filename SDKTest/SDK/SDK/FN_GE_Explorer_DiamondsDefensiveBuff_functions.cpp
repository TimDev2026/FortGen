#include "pch.h"

#include "FN_GE_Explorer_DiamondsDefensiveBuff_classes.h"

UClass* UGE_Explorer_DiamondsDefensiveBuff_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Explorer_DiamondsDefensiveBuff.GE_Explorer_DiamondsDefensiveBuff_C");

	return Class;
}

