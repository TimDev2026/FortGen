#include "pch.h"

#include "FN_HuskStrength01_classes.h"

UClass* UHuskStrength01_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/HuskStrength01.HuskStrength01_C");

	return Class;
}

