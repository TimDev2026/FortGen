#include "pch.h"

#include "FN_GE_Outlander_IronKnuckles_classes.h"

UClass* UGE_Outlander_IronKnuckles_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GE_Outlander_IronKnuckles.GE_Outlander_IronKnuckles_C");

	return Class;
}

