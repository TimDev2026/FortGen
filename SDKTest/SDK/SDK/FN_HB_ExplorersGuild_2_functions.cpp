#include "pch.h"

#include "FN_HB_ExplorersGuild_2_classes.h"

UClass* AHB_ExplorersGuild_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_ExplorersGuild_2.HB_ExplorersGuild_2_C");

	return Class;
}

