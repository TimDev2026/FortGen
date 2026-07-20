#include "pch.h"

#include "FN_GE_Generic_BannerCooldown_classes.h"

UClass* UGE_Generic_BannerCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Banner/GE_Generic_BannerCooldown.GE_Generic_BannerCooldown_C");

	return Class;
}

