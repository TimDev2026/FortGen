#include "pch.h"

#include "FN_GE_Outlander_CastTheFirstStone_classes.h"

UClass* UGE_Outlander_CastTheFirstStone_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/ZonedOut/GE_Outlander_CastTheFirstStone.GE_Outlander_CastTheFirstStone_C");

	return Class;
}

