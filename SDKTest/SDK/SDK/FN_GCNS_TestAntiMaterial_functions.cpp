#include "pch.h"

#include "FN_GCNS_TestAntiMaterial_classes.h"

UClass* UGCNS_TestAntiMaterial_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/AntiMaterialCharge/GCNS_TestAntiMaterial.GCNS_TestAntiMaterial_C");

	return Class;
}

