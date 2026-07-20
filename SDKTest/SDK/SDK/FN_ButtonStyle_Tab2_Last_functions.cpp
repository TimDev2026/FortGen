#include "pch.h"

#include "FN_ButtonStyle_Tab2_Last_classes.h"

UClass* UButtonStyle_Tab2_Last_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Tab2-Last.ButtonStyle-Tab2-Last_C");

	return Class;
}

