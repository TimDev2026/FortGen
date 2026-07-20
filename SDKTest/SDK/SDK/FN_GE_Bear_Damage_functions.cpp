#include "pch.h"

#include "FN_GE_Bear_Damage_classes.h"

UClass* UGE_Bear_Damage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Bear_Damage.GE_Bear_Damage_C");

	return Class;
}

