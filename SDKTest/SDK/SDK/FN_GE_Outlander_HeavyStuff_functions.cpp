#include "pch.h"

#include "FN_GE_Outlander_HeavyStuff_classes.h"

UClass* UGE_Outlander_HeavyStuff_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GE_Outlander_HeavyStuff.GE_Outlander_HeavyStuff_C");

	return Class;
}

