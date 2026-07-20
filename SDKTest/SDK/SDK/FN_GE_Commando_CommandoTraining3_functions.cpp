#include "pch.h"

#include "FN_GE_Commando_CommandoTraining3_classes.h"

UClass* UGE_Commando_CommandoTraining3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Packages/GE_Commando_CommandoTraining3.GE_Commando_CommandoTraining3_C");

	return Class;
}

