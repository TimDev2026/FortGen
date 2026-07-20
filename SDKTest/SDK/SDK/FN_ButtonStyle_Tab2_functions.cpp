#include "pch.h"

#include "FN_ButtonStyle_Tab2_classes.h"

UClass* UButtonStyle_Tab2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Tab2.ButtonStyle-Tab2_C");

	return Class;
}

