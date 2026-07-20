#include "pch.h"

#include "FN_GE_Map_Outlander_Vitality_Health_classes.h"

UClass* UGE_Map_Outlander_Vitality_Health_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Balance/CombinedStats/Outlander/MappedEffects/GE_Map_Outlander_Vitality_Health.GE_Map_Outlander_Vitality_Health_C");

	return Class;
}

