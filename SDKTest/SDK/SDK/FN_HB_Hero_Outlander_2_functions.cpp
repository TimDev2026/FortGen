#include "pch.h"

#include "FN_HB_Hero_Outlander_2_classes.h"

UClass* AHB_Hero_Outlander_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hero_Outlander_2.HB_Hero_Outlander_2_C");

	return Class;
}

