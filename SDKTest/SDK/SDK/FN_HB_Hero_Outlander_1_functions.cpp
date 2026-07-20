#include "pch.h"

#include "FN_HB_Hero_Outlander_1_classes.h"

UClass* AHB_Hero_Outlander_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_Hero_Outlander_1.HB_Hero_Outlander_1_C");

	return Class;
}

