#include "pch.h"

#include "FN_HB_Hospital_2_classes.h"

UClass* AHB_Hospital_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hospital_2.HB_Hospital_2_C");

	return Class;
}

