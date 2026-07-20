#include "pch.h"

#include "FN_GE_Homebase_Static_Manor_2_classes.h"

UClass* UGE_Homebase_Static_Manor_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/Manor/GE_Homebase_Static_Manor_2.GE_Homebase_Static_Manor_2_C");

	return Class;
}

