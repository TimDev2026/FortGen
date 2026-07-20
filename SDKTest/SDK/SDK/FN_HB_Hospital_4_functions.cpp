#include "pch.h"

#include "FN_HB_Hospital_4_classes.h"

UClass* AHB_Hospital_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hospital_4.HB_Hospital_4_C");

	return Class;
}

