#include "pch.h"

#include "FN_GA_Trap_WallSpikes_classes.h"

UClass* UGA_Trap_WallSpikes_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/WallSpikes/GA_Trap_WallSpikes.GA_Trap_WallSpikes_C");

	return Class;
}

