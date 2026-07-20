#include "pch.h"

#include "FN_GE_Commando_CommandoTraining2_classes.h"

UClass* UGE_Commando_CommandoTraining2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Packages/GE_Commando_CommandoTraining2.GE_Commando_CommandoTraining2_C");

	return Class;
}

