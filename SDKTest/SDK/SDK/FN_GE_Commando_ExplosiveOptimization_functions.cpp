#include "pch.h"

#include "FN_GE_Commando_ExplosiveOptimization_classes.h"

UClass* UGE_Commando_ExplosiveOptimization_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Explosives/GE_Commando_ExplosiveOptimization.GE_Commando_ExplosiveOptimization_C");

	return Class;
}

