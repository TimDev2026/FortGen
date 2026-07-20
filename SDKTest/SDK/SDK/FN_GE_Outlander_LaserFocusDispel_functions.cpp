#include "pch.h"

#include "FN_GE_Outlander_LaserFocusDispel_classes.h"

UClass* UGE_Outlander_LaserFocusDispel_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/LastResort/GE_Outlander_LaserFocusDispel.GE_Outlander_LaserFocusDispel_C");

	return Class;
}

