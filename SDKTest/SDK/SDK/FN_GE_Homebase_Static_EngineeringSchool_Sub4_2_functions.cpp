#include "pch.h"

#include "FN_GE_Homebase_Static_EngineeringSchool_Sub4_2_classes.h"

UClass* UGE_Homebase_Static_EngineeringSchool_Sub4_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/EngineeringSchool/GE_Homebase_Static_EngineeringSchool_Sub4_2.GE_Homebase_Static_EngineeringSchool_Sub4_2_C");

	return Class;
}

