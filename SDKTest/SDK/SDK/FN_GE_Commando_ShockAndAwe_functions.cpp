#include "pch.h"

#include "FN_GE_Commando_ShockAndAwe_classes.h"

UClass* UGE_Commando_ShockAndAwe_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Explosives/GE_Commando_ShockAndAwe.GE_Commando_ShockAndAwe_C");

	return Class;
}

