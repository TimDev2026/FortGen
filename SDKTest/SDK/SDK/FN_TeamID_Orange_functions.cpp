#include "pch.h"

#include "FN_TeamID_Orange_classes.h"

UClass* UTeamID_Orange_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_Orange.TeamID_Orange_C");

	return Class;
}

