#include "pch.h"

#include "FN_GE_Outlander_OutlanderTraining1_classes.h"

UClass* UGE_Outlander_OutlanderTraining1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Packages/GE_Outlander_OutlanderTraining1.GE_Outlander_OutlanderTraining1_C");

	return Class;
}

