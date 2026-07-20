#include "pch.h"

#include "FN_GE_Outlander_HackDamageResist_classes.h"

UClass* UGE_Outlander_HackDamageResist_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Outlander_HackDamageResist.GE_Outlander_HackDamageResist_C");

	return Class;
}

