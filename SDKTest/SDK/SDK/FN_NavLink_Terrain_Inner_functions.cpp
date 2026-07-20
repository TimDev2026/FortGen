#include "pch.h"

#include "FN_NavLink_Terrain_Inner_classes.h"

UClass* UNavLink_Terrain_Inner_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_Terrain_Inner.NavLink_Terrain_Inner_C");

	return Class;
}

