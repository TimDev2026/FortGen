#include "pch.h"

#include "FN_HB_FiringRange_2_classes.h"

UClass* AHB_FiringRange_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_FiringRange_2.HB_FiringRange_2_C");

	return Class;
}

