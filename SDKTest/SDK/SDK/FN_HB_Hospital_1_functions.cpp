#include "pch.h"

#include "FN_HB_Hospital_1_classes.h"

UClass* AHB_Hospital_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hospital_1.HB_Hospital_1_C");

	return Class;
}

