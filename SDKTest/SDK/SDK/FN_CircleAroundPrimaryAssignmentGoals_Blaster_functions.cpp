#include "pch.h"

#include "FN_CircleAroundPrimaryAssignmentGoals_Blaster_classes.h"

UClass* UCircleAroundPrimaryAssignmentGoals_Blaster_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Blaster.CircleAroundPrimaryAssignmentGoals_Blaster_C");

	return Class;
}

