#include "pch.h"

#include "FN_ButtonStyle_Check_classes.h"

UClass* UButtonStyle_Check_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Check.ButtonStyle-Check_C");

	return Class;
}

