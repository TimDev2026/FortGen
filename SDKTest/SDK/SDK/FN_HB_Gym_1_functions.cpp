#include "pch.h"

#include "FN_HB_Gym_1_classes.h"

UClass* AHB_Gym_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Gym_1.HB_Gym_1_C");

	return Class;
}

