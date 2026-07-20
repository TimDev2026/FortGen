#include "pch.h"

#include "FN_GE_Hombease_MilitaryHQ_WorkerBonus_classes.h"

UClass* UGE_Hombease_MilitaryHQ_WorkerBonus_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/MilitaryHQ/GE_Hombease_MilitaryHQ_WorkerBonus.GE_Hombease_MilitaryHQ_WorkerBonus_C");

	return Class;
}

