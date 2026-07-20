#include "pch.h"

#include "FN_GE_Trap_FloorSpikesWood_classes.h"

UClass* UGE_Trap_FloorSpikesWood_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/FloorSpikesWood/GE_Trap_FloorSpikesWood.GE_Trap_FloorSpikesWood_C");

	return Class;
}

