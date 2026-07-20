#include "pch.h"

#include "FN_HuskStrength06_classes.h"

UClass* UHuskStrength06_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/HuskStrength06.HuskStrength06_C");

	return Class;
}

