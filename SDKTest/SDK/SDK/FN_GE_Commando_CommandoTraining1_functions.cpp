#include "pch.h"

#include "FN_GE_Commando_CommandoTraining1_classes.h"

UClass* UGE_Commando_CommandoTraining1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Packages/GE_Commando_CommandoTraining1.GE_Commando_CommandoTraining1_C");

	return Class;
}

