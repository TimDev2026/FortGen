#include "pch.h"

#include "FN_GE_Outlander_MatterCollectorDamageLoot_classes.h"

UClass* UGE_Outlander_MatterCollectorDamageLoot_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/MatterCollector/GE_Outlander_MatterCollectorDamageLoot.GE_Outlander_MatterCollectorDamageLoot_C");

	return Class;
}

