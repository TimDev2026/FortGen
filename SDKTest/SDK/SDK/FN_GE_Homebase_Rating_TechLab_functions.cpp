#include "pch.h"

#include "FN_GE_Homebase_Rating_TechLab_classes.h"

UClass* UGE_Homebase_Rating_TechLab_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Rating/GE_Homebase_Rating_TechLab.GE_Homebase_Rating_TechLab_C");

	return Class;
}

