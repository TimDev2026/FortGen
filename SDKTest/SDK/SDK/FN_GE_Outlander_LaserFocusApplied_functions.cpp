#include "pch.h"

#include "FN_GE_Outlander_LaserFocusApplied_classes.h"

UClass* UGE_Outlander_LaserFocusApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/LastResort/GE_Outlander_LaserFocusApplied.GE_Outlander_LaserFocusApplied_C");

	return Class;
}

