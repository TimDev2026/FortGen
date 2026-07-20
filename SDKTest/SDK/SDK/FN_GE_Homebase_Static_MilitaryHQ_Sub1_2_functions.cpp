#include "pch.h"

#include "FN_GE_Homebase_Static_MilitaryHQ_Sub1_2_classes.h"

UClass* UGE_Homebase_Static_MilitaryHQ_Sub1_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/MilitaryHQ/GE_Homebase_Static_MilitaryHQ_Sub1_2.GE_Homebase_Static_MilitaryHQ_Sub1_2_C");

	return Class;
}

