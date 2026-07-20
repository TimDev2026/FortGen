#include "pch.h"

#include "FN_ButtonStyle_Emphasis_classes.h"

UClass* UButtonStyle_Emphasis_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Emphasis.ButtonStyle-Emphasis_C");

	return Class;
}

