#include "pch.h"

#include "FN_HB_SparingGuild_1_classes.h"

UClass* AHB_SparingGuild_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_SparingGuild_1.HB_SparingGuild_1_C");

	return Class;
}

