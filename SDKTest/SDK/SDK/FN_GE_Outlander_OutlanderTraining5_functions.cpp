#include "pch.h"

#include "FN_GE_Outlander_OutlanderTraining5_classes.h"

UClass* UGE_Outlander_OutlanderTraining5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Packages/GE_Outlander_OutlanderTraining5.GE_Outlander_OutlanderTraining5_C");

	return Class;
}

