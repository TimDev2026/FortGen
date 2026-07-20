#include "pch.h"

#include "FN_GE_Homebase_Command_WorkerRating_classes.h"

UClass* UGE_Homebase_Command_WorkerRating_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/CommandCenter/GE_Homebase_Command_WorkerRating.GE_Homebase_Command_WorkerRating_C");

	return Class;
}

