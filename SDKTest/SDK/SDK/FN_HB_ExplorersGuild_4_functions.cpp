#include "pch.h"

#include "FN_HB_ExplorersGuild_4_classes.h"

UClass* AHB_ExplorersGuild_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_ExplorersGuild_4.HB_ExplorersGuild_4_C");

	return Class;
}

