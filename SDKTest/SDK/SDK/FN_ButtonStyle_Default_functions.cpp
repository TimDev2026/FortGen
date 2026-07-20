#include "pch.h"

#include "FN_ButtonStyle_Default_classes.h"

UClass* UButtonStyle_Default_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Default.ButtonStyle-Default_C");

	return Class;
}

