#include "pch.h"

#include "FN_CircleAroundPrimaryAssignmentGoals_Bombshell_Poison_classes.h"

UClass* UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Bombshell_Poison.CircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C");

	return Class;
}

