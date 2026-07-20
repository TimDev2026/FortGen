#include "pch.h"

#include "FN_HB_Hero_Commando_4_classes.h"

UClass* AHB_Hero_Commando_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hero_Commando_4.HB_Hero_Commando_4_C");

	return Class;
}

