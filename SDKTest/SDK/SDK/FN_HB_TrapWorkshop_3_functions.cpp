#include "pch.h"

#include "FN_HB_TrapWorkshop_3_classes.h"

UClass* AHB_TrapWorkshop_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_TrapWorkshop_3.HB_TrapWorkshop_3_C");

	return Class;
}

