#include "pch.h"

#include "FN_ButtonStyle_Critical_classes.h"

UClass* UButtonStyle_Critical_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Critical.ButtonStyle-Critical_C");

	return Class;
}

