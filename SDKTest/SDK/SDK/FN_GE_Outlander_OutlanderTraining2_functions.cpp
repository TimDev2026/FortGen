#include "pch.h"

#include "FN_GE_Outlander_OutlanderTraining2_classes.h"

UClass* UGE_Outlander_OutlanderTraining2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Packages/GE_Outlander_OutlanderTraining2.GE_Outlander_OutlanderTraining2_C");

	return Class;
}

