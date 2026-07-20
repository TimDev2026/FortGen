#include "pch.h"

#include "FN_GCNS_Cart_InstantHealFX_classes.h"

UClass* UGCNS_Cart_InstantHealFX_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/CartTrack/GCNS_Cart_InstantHealFX.GCNS_Cart_InstantHealFX_C");

	return Class;
}

