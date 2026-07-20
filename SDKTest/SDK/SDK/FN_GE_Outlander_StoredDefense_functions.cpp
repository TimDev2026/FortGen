#include "pch.h"

#include "FN_GE_Outlander_StoredDefense_classes.h"

UClass* UGE_Outlander_StoredDefense_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_StoredDefense.GE_Outlander_StoredDefense_C");

	return Class;
}

