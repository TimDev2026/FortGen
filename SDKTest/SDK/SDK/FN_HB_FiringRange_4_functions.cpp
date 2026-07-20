#include "pch.h"

#include "FN_HB_FiringRange_4_classes.h"

UClass* AHB_FiringRange_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_FiringRange_4.HB_FiringRange_4_C");

	return Class;
}

