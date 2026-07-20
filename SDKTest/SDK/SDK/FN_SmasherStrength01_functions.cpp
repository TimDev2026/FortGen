#include "pch.h"

#include "FN_SmasherStrength01_classes.h"

UClass* USmasherStrength01_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/SmasherStrength01.SmasherStrength01_C");

	return Class;
}

