#include "pch.h"

#include "FN_HB_Gym_3_classes.h"

UClass* AHB_Gym_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Gym_3.HB_Gym_3_C");

	return Class;
}

