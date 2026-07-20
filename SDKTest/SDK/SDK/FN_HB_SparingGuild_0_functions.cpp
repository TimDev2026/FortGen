#include "pch.h"

#include "FN_HB_SparingGuild_0_classes.h"

UClass* AHB_SparingGuild_0_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_SparingGuild_0.HB_SparingGuild_0_C");

	return Class;
}

