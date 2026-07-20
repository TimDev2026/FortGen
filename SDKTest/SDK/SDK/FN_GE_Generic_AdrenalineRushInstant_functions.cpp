#include "pch.h"

#include "FN_GE_Generic_AdrenalineRushInstant_classes.h"

UClass* UGE_Generic_AdrenalineRushInstant_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GE_Generic_AdrenalineRushInstant.GE_Generic_AdrenalineRushInstant_C");

	return Class;
}

