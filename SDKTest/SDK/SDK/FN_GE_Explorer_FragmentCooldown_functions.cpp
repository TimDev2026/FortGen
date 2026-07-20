#include "pch.h"

#include "FN_GE_Explorer_FragmentCooldown_classes.h"

UClass* UGE_Explorer_FragmentCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Explorer_FragmentCooldown.GE_Explorer_FragmentCooldown_C");

	return Class;
}

