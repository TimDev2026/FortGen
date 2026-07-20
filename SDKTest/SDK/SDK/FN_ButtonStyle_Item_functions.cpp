#include "pch.h"

#include "FN_ButtonStyle_Item_classes.h"

UClass* UButtonStyle_Item_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-Item.ButtonStyle-Item_C");

	return Class;
}

