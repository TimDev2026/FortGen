#include "pch.h"

#include "FN_HuskStrength04_classes.h"

UClass* UHuskStrength04_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/HuskStrength04.HuskStrength04_C");

	return Class;
}

