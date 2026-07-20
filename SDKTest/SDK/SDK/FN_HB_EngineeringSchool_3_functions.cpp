#include "pch.h"

#include "FN_HB_EngineeringSchool_3_classes.h"

UClass* AHB_EngineeringSchool_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_EngineeringSchool_3.HB_EngineeringSchool_3_C");

	return Class;
}

