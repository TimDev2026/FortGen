#include "pch.h"

#include "FN_GE_Commando_ILoveToReloadSpeed_classes.h"

UClass* UGE_Commando_ILoveToReloadSpeed_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Assault/GE_Commando_ILoveToReloadSpeed.GE_Commando_ILoveToReloadSpeed_C");

	return Class;
}

