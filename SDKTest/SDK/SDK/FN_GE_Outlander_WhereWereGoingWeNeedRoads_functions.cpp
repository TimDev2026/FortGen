#include "pch.h"

#include "FN_GE_Outlander_WhereWereGoingWeNeedRoads_classes.h"

UClass* UGE_Outlander_WhereWereGoingWeNeedRoads_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GE_Outlander_WhereWereGoingWeNeedRoads.GE_Outlander_WhereWereGoingWeNeedRoads_C");

	return Class;
}

UClass* UGE_Outlander_WhereWereGoingWeNeedRoads_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Observation/GE_Outlander_WhereWereGoingWeNeedRoads.GE_Outlander_WhereWereGoingWeNeedRoads_C");

	return Class;
}

