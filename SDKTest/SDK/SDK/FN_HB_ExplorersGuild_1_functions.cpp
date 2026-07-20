#include "pch.h"

#include "FN_HB_ExplorersGuild_1_classes.h"

UClass* AHB_ExplorersGuild_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_ExplorersGuild_1.HB_ExplorersGuild_1_C");

	return Class;
}

