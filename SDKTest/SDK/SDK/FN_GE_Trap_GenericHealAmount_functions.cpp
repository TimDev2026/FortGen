#include "pch.h"

#include "FN_GE_Trap_GenericHealAmount_classes.h"

UClass* UGE_Trap_GenericHealAmount_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Trap/Blueprints/GE_Trap_GenericHealAmount.GE_Trap_GenericHealAmount_C");

	return Class;
}

