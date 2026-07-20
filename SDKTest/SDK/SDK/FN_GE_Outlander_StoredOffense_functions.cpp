#include "pch.h"

#include "FN_GE_Outlander_StoredOffense_classes.h"

UClass* UGE_Outlander_StoredOffense_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_StoredOffense.GE_Outlander_StoredOffense_C");

	return Class;
}

