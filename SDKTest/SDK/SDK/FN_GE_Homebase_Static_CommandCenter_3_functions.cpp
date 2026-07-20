#include "pch.h"

#include "FN_GE_Homebase_Static_CommandCenter_3_classes.h"

UClass* UGE_Homebase_Static_CommandCenter_3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/CommandCenter/GE_Homebase_Static_CommandCenter_3.GE_Homebase_Static_CommandCenter_3_C");

	return Class;
}

