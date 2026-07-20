#include "pch.h"

#include "FN_GA_Trap_FloorSpikesWood_classes.h"

UClass* UGA_Trap_FloorSpikesWood_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/FloorSpikesWood/GA_Trap_FloorSpikesWood.GA_Trap_FloorSpikesWood_C");

	return Class;
}

