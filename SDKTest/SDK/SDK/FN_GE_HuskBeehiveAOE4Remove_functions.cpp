#include "pch.h"

#include "FN_GE_HuskBeehiveAOE4Remove_classes.h"

UClass* UGE_HuskBeehiveAOE4Remove_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Beehive/GE_HuskBeehiveAOE4Remove.GE_HuskBeehiveAOE4Remove_C");

	return Class;
}

