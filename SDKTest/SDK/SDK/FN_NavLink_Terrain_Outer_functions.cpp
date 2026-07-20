#include "pch.h"

#include "FN_NavLink_Terrain_Outer_classes.h"

UClass* UNavLink_Terrain_Outer_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_Terrain_Outer.NavLink_Terrain_Outer_C");

	return Class;
}

