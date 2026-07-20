#include "pch.h"

#include "FN_HB_SparingGuild_3_classes.h"

UClass* AHB_SparingGuild_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_SparingGuild_3.HB_SparingGuild_3_C");

	return Class;
}

