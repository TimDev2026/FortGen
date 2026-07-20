#include "pch.h"

#include "FN_HB_SparingGuild_5_classes.h"

UClass* AHB_SparingGuild_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_SparingGuild_5.HB_SparingGuild_5_C");

	return Class;
}

