#include "pch.h"

#include "FN_GE_Outlander_MatterCollectorDamage_classes.h"

UClass* UGE_Outlander_MatterCollectorDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/MatterCollector/GE_Outlander_MatterCollectorDamage.GE_Outlander_MatterCollectorDamage_C");

	return Class;
}

