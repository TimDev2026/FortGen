#include "pch.h"

#include "FN_HB_Manor_0_classes.h"

UClass* AHB_Manor_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Manor_0.HB_Manor_0_C");

	return Class;
}

