#include "pch.h"

#include "FN_CircleAroundPrimaryAssignmentGoals_Bombshell_classes.h"

UClass* UCircleAroundPrimaryAssignmentGoals_Bombshell_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Bombshell.CircleAroundPrimaryAssignmentGoals_Bombshell_C");

	return Class;
}

