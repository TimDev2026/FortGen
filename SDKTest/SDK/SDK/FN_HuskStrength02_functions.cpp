#include "pch.h"

#include "FN_HuskStrength02_classes.h"

UClass* UHuskStrength02_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/HuskStrength02.HuskStrength02_C");

	return Class;
}

