#include "pch.h"

#include "FN_HB_ExplorersGuild_5_classes.h"

UClass* AHB_ExplorersGuild_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_ExplorersGuild_5.HB_ExplorersGuild_5_C");

	return Class;
}

