#include "pch.h"

#include "FN_HB_Gym_0_classes.h"

UClass* AHB_Gym_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Gym_0.HB_Gym_0_C");

	return Class;
}

