#include "pch.h"

#include "FN_GE_Homebase_Static_MilitaryHQ_Sub2_1_classes.h"

UClass* UGE_Homebase_Static_MilitaryHQ_Sub2_1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/MilitaryHQ/GE_Homebase_Static_MilitaryHQ_Sub2_1.GE_Homebase_Static_MilitaryHQ_Sub2_1_C");

	return Class;
}

