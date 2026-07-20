#include "pch.h"

#include "FN_GE_Outlander_ShieldsUp_classes.h"

UClass* UGE_Outlander_ShieldsUp_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GE_Outlander_ShieldsUp.GE_Outlander_ShieldsUp_C");

	return Class;
}

