#include "pch.h"

#include "FN_GE_Outlander_OutlanderTraining4_classes.h"

UClass* UGE_Outlander_OutlanderTraining4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Packages/GE_Outlander_OutlanderTraining4.GE_Outlander_OutlanderTraining4_C");

	return Class;
}

