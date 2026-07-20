#include "pch.h"

#include "FN_HB_ExplorersGuild_3_classes.h"

UClass* AHB_ExplorersGuild_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_ExplorersGuild_3.HB_ExplorersGuild_3_C");

	return Class;
}

