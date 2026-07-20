#include "pch.h"

#include "FN_HB_SparingGuild_4_classes.h"

UClass* AHB_SparingGuild_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_SparingGuild_4.HB_SparingGuild_4_C");

	return Class;
}

