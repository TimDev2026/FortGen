#include "pch.h"

#include "FN_GE_Generic_AdrenalineRush_classes.h"

UClass* UGE_Generic_AdrenalineRush_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GE_Generic_AdrenalineRush.GE_Generic_AdrenalineRush_C");

	return Class;
}

