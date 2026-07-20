#include "pch.h"

#include "FN_GE_Trap_FloorLauncher_classes.h"

UClass* UGE_Trap_FloorLauncher_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/FloorLauncher/GE_Trap_FloorLauncher.GE_Trap_FloorLauncher_C");

	return Class;
}

