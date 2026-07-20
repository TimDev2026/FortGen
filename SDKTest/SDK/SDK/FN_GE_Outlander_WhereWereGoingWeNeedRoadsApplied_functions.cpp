#include "pch.h"

#include "FN_GE_Outlander_WhereWereGoingWeNeedRoadsApplied_classes.h"

UClass* UGE_Outlander_WhereWereGoingWeNeedRoadsApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Observation/GE_Outlander_WhereWereGoingWeNeedRoadsApplied.GE_Outlander_WhereWereGoingWeNeedRoadsApplied_C");

	return Class;
}

