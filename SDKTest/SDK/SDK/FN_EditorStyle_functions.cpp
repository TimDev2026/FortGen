#include "pch.h"

#include "FN_EditorStyle_classes.h"

UClass* UEditorStyleSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EditorStyle.EditorStyleSettings");

	return Class;
}

