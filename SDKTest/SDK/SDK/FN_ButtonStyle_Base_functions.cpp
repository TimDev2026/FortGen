#include "pch.h"

#include "FN_ButtonStyle_Base_classes.h"

UClass* UButtonStyle_Base_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Base.ButtonStyle-Base_C");

	return Class;
}

