#include "pch.h"

#include "FN_ButtonStyle_Expander_classes.h"

UClass* UButtonStyle_Expander_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Expander.ButtonStyle-Expander_C");

	return Class;
}

