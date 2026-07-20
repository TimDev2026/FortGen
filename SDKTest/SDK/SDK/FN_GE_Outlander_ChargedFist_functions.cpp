#include "pch.h"

#include "FN_GE_Outlander_ChargedFist_classes.h"

UClass* UGE_Outlander_ChargedFist_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GE_Outlander_ChargedFist.GE_Outlander_ChargedFist_C");

	return Class;
}

