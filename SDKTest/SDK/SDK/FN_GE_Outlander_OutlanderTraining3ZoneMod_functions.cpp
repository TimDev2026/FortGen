#include "pch.h"

#include "FN_GE_Outlander_OutlanderTraining3ZoneMod_classes.h"

UClass* UGE_Outlander_OutlanderTraining3ZoneMod_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Packages/GE_Outlander_OutlanderTraining3ZoneMod.GE_Outlander_OutlanderTraining3ZoneMod_C");

	return Class;
}

