#include "pch.h"

#include "FN_HB_EngineeringSchool_5_classes.h"

UClass* AHB_EngineeringSchool_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_EngineeringSchool_5.HB_EngineeringSchool_5_C");

	return Class;
}

