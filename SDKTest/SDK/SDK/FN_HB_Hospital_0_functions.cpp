#include "pch.h"

#include "FN_HB_Hospital_0_classes.h"

UClass* AHB_Hospital_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hospital_0.HB_Hospital_0_C");

	return Class;
}

