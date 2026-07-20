#include "pch.h"

#include "FN_GE_Homebase_CombinedRatings_classes.h"

UClass* UGE_Homebase_CombinedRatings_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/GE_Homebase_CombinedRatings.GE_Homebase_CombinedRatings_C");

	return Class;
}

