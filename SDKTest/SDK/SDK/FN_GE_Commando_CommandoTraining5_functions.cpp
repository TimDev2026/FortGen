#include "pch.h"

#include "FN_GE_Commando_CommandoTraining5_classes.h"

UClass* UGE_Commando_CommandoTraining5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Packages/GE_Commando_CommandoTraining5.GE_Commando_CommandoTraining5_C");

	return Class;
}

