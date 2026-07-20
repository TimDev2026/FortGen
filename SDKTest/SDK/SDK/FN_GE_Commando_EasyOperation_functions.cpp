#include "pch.h"

#include "FN_GE_Commando_EasyOperation_classes.h"

UClass* UGE_Commando_EasyOperation_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Commando/GE_Commando_EasyOperation.GE_Commando_EasyOperation_C");

	return Class;
}

