#include "pch.h"

#include "FN_TeamID_Default_classes.h"

UClass* UTeamID_Default_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_Default.TeamID_Default_C");

	return Class;
}

