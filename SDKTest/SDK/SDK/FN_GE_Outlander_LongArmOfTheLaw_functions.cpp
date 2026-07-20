#include "pch.h"

#include "FN_GE_Outlander_LongArmOfTheLaw_classes.h"

UClass* UGE_Outlander_LongArmOfTheLaw_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GE_Outlander_LongArmOfTheLaw.GE_Outlander_LongArmOfTheLaw_C");

	return Class;
}

