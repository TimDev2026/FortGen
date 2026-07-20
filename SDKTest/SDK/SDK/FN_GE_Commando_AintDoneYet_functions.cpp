#include "pch.h"

#include "FN_GE_Commando_AintDoneYet_classes.h"

UClass* UGE_Commando_AintDoneYet_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Commando/GE_Commando_AintDoneYet.GE_Commando_AintDoneYet_C");

	return Class;
}

