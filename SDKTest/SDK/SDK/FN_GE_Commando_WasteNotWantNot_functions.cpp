#include "pch.h"

#include "FN_GE_Commando_WasteNotWantNot_classes.h"

UClass* UGE_Commando_WasteNotWantNot_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Assault/GE_Commando_WasteNotWantNot.GE_Commando_WasteNotWantNot_C");

	return Class;
}

