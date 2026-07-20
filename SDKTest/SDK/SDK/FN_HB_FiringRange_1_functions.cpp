#include "pch.h"

#include "FN_HB_FiringRange_1_classes.h"

UClass* AHB_FiringRange_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_FiringRange_1.HB_FiringRange_1_C");

	return Class;
}

