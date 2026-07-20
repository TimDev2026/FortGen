#include "pch.h"

#include "FN_AnimNotify_HideBodyOnDeath_classes.h"

UClass* UAnimNotify_HideBodyOnDeath_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_HideBodyOnDeath.AnimNotify_HideBodyOnDeath_C");

	return Class;
}

// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_HideBodyOnDeath.AnimNotify_HideBodyOnDeath_C:Received_Notify
bool UAnimNotify_HideBodyOnDeath_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_HideBodyOnDeath.AnimNotify_HideBodyOnDeath_C:Received_Notify");

	FUAnimNotify_HideBodyOnDeath_C_Received_Notify_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

