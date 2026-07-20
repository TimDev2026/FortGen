#include "pch.h"

#include "FN_GE_Outlander_DiamondsBear_classes.h"

UClass* UGE_Outlander_DiamondsBear_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Outlander_DiamondsBear.GE_Outlander_DiamondsBear_C");

	return Class;
}

