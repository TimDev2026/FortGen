#include "pch.h"

#include "FN_GE_Homebase_Static_TechLab_Sub3_1_classes.h"

UClass* UGE_Homebase_Static_TechLab_Sub3_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/TechLab/GE_Homebase_Static_TechLab_Sub3_1.GE_Homebase_Static_TechLab_Sub3_1_C");

	return Class;
}

