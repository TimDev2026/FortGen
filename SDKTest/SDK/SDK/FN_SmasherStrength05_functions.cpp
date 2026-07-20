#include "pch.h"

#include "FN_SmasherStrength05_classes.h"

UClass* USmasherStrength05_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/NavigationAreas/SmasherStrength05.SmasherStrength05_C");

	return Class;
}

