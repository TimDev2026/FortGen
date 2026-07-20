#include "pch.h"

#include "FN_GE_Generic_BannerShockwave_classes.h"

UClass* UGE_Generic_BannerShockwave_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Banner/GE_Generic_BannerShockwave.GE_Generic_BannerShockwave_C");

	return Class;
}

