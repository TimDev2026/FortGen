#include "pch.h"

#include "FN_PopupFrame_classes.h"

UClass* UPopupFrame_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Main/PopupFrame.PopupFrame_C");

	return Class;
}

