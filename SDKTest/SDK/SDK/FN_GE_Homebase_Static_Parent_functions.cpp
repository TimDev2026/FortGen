#include "pch.h"

#include "FN_GE_Homebase_Static_Parent_classes.h"

UClass* UGE_Homebase_Static_Parent_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/GE_Homebase_Static_Parent.GE_Homebase_Static_Parent_C");

	return Class;
}

