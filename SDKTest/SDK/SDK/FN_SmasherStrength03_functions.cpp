#include "pch.h"

#include "FN_SmasherStrength03_classes.h"

UClass* USmasherStrength03_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/SmasherStrength03.SmasherStrength03_C");

	return Class;
}

