#include "pch.h"

#include "FN_HuskStrength00_classes.h"

UClass* UHuskStrength00_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/HuskStrength00.HuskStrength00_C");

	return Class;
}

