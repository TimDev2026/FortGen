#include "pch.h"

#include "FN_ButtonStyle_Radio_classes.h"

UClass* UButtonStyle_Radio_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Radio.ButtonStyle-Radio_C");

	return Class;
}

