#include "pch.h"

#include "FN_HB_EngineeringSchool_1_classes.h"

UClass* AHB_EngineeringSchool_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_EngineeringSchool_1.HB_EngineeringSchool_1_C");

	return Class;
}

