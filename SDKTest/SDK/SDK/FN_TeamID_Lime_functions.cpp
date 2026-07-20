#include "pch.h"

#include "FN_TeamID_Lime_classes.h"

UClass* UTeamID_Lime_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_Lime.TeamID_Lime_C");

	return Class;
}

