#include "pch.h"

#include "FN_GE_Ninja_UpInSmoke_classes.h"

UClass* UGE_Ninja_UpInSmoke_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheSmoke/GE_Ninja_UpInSmoke.GE_Ninja_UpInSmoke_C");

	return Class;
}

