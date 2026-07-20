#include "pch.h"

#include "FN_B_Assault_Raptor_classes.h"

UClass* AB_Assault_Raptor_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Raptor.B_Assault_Raptor_C");

	return Class;
}

