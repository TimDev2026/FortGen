#include "pch.h"

#include "FN_CircleAroundPrimaryAssignmentGoals_Flinger_classes.h"

UClass* UCircleAroundPrimaryAssignmentGoals_Flinger_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Flinger.CircleAroundPrimaryAssignmentGoals_Flinger_C");

	return Class;
}

