#include "pch.h"

#include "FN_HB_SparingGuild_2_classes.h"

UClass* AHB_SparingGuild_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_SparingGuild_2.HB_SparingGuild_2_C");

	return Class;
}

