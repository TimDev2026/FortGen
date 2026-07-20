#include "pch.h"

#include "FN_B_Melee_Impact_Generic_classes.h"

UClass* AB_Melee_Impact_Generic_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Generic.B_Melee_Impact_Generic_C");

	return Class;
}

