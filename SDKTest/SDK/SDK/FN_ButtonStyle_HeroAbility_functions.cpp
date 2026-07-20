#include "pch.h"

#include "FN_ButtonStyle_HeroAbility_classes.h"

UClass* UButtonStyle_HeroAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-HeroAbility.ButtonStyle-HeroAbility_C");

	return Class;
}

