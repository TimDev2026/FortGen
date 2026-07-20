#include "pch.h"

#include "FN_StructuralBuildingsAroundPrimaryAssignments_classes.h"

UClass* UStructuralBuildingsAroundPrimaryAssignments_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/GoalSelection/GoalProviders/StructuralBuildingsAroundPrimaryAssignments.StructuralBuildingsAroundPrimaryAssignments_C");

	return Class;
}

