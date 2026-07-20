#include "pch.h"

#include "FN_ButtonStyle_Tab1_classes.h"

UClass* UButtonStyle_Tab1_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Tab1.ButtonStyle-Tab1_C");

	return Class;
}

