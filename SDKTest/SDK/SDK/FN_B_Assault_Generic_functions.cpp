#include "pch.h"

#include "FN_B_Assault_Generic_classes.h"

UClass* AB_Assault_Generic_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Generic.B_Assault_Generic_C");

	return Class;
}

