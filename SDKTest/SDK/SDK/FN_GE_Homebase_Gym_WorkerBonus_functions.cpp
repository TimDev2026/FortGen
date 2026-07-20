#include "pch.h"

#include "FN_GE_Homebase_Gym_WorkerBonus_classes.h"

UClass* UGE_Homebase_Gym_WorkerBonus_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/Gym/GE_Homebase_Gym_WorkerBonus.GE_Homebase_Gym_WorkerBonus_C");

	return Class;
}

