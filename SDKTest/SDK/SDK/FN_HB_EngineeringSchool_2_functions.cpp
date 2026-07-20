#include "pch.h"

#include "FN_HB_EngineeringSchool_2_classes.h"

UClass* AHB_EngineeringSchool_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_EngineeringSchool_2.HB_EngineeringSchool_2_C");

	return Class;
}

