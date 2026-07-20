#include "pch.h"

#include "FN_GE_Trap_WallSpikes_classes.h"

UClass* UGE_Trap_WallSpikes_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/WallSpikes/GE_Trap_WallSpikes.GE_Trap_WallSpikes_C");

	return Class;
}

