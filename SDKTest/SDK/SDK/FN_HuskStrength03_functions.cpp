#include "pch.h"

#include "FN_HuskStrength03_classes.h"

UClass* UHuskStrength03_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/HuskStrength03.HuskStrength03_C");

	return Class;
}

