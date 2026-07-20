#include "pch.h"

#include "FN_AnimNotify_FootStep_Left_classes.h"

UClass* UAnimNotify_FootStep_Left_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C");

	return Class;
}

