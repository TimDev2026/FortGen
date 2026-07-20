#include "pch.h"

#include "FN_ButtonStyle_ItemLight_classes.h"

UClass* UButtonStyle_ItemLight_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-ItemLight.ButtonStyle-ItemLight_C");

	return Class;
}

