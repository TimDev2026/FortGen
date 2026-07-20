#include "pch.h"

#include "FN_ButtonStyle_Close_classes.h"

UClass* UButtonStyle_Close_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Close.ButtonStyle-Close_C");

	return Class;
}

