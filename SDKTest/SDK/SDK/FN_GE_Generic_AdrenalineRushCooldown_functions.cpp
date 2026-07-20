#include "pch.h"

#include "FN_GE_Generic_AdrenalineRushCooldown_classes.h"

UClass* UGE_Generic_AdrenalineRushCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GE_Generic_AdrenalineRushCooldown.GE_Generic_AdrenalineRushCooldown_C");

	return Class;
}

