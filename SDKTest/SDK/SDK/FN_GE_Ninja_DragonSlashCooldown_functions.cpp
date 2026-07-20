#include "pch.h"

#include "FN_GE_Ninja_DragonSlashCooldown_classes.h"

UClass* UGE_Ninja_DragonSlashCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GE_Ninja_DragonSlashCooldown.GE_Ninja_DragonSlashCooldown_C");

	return Class;
}

