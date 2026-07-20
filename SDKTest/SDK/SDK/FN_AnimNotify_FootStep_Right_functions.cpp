#include "pch.h"

#include "FN_AnimNotify_FootStep_Right_classes.h"

UClass* UAnimNotify_FootStep_Right_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C");

	return Class;
}

