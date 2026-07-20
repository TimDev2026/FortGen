#include "pch.h"

#include "FN_HuskStrength05_classes.h"

UClass* UHuskStrength05_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/HuskStrength05.HuskStrength05_C");

	return Class;
}

