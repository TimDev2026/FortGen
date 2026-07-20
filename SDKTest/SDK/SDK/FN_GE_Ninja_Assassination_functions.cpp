#include "pch.h"

#include "FN_GE_Ninja_Assassination_classes.h"

UClass* UGE_Ninja_Assassination_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GE_Ninja_Assassination.GE_Ninja_Assassination_C");

	return Class;
}

