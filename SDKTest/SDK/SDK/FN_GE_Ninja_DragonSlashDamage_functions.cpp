#include "pch.h"

#include "FN_GE_Ninja_DragonSlashDamage_classes.h"

UClass* UGE_Ninja_DragonSlashDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GE_Ninja_DragonSlashDamage.GE_Ninja_DragonSlashDamage_C");

	return Class;
}

