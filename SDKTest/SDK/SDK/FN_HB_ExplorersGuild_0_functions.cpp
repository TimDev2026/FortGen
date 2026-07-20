#include "pch.h"

#include "FN_HB_ExplorersGuild_0_classes.h"

UClass* AHB_ExplorersGuild_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_ExplorersGuild_0.HB_ExplorersGuild_0_C");

	return Class;
}

