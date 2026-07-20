#include "pch.h"

#include "FN_HB_EngineeringSchool_4_classes.h"

UClass* AHB_EngineeringSchool_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_EngineeringSchool_4.HB_EngineeringSchool_4_C");

	return Class;
}

