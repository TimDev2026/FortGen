#include "pch.h"

#include "FN_GE_Outlander_KeenerEyes_classes.h"

UClass* UGE_Outlander_KeenerEyes_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_KeenerEyes.GE_Outlander_KeenerEyes_C");

	return Class;
}

