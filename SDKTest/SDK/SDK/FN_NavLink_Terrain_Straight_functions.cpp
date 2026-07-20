#include "pch.h"

#include "FN_NavLink_Terrain_Straight_classes.h"

UClass* UNavLink_Terrain_Straight_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Navigation/NavLink_Terrain_Straight.NavLink_Terrain_Straight_C");

	return Class;
}

