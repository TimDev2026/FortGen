#include "pch.h"

#include "FN_GE_Outlander_Bearricade_classes.h"

UClass* UGE_Outlander_Bearricade_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_Bearricade.GE_Outlander_Bearricade_C");

	return Class;
}

