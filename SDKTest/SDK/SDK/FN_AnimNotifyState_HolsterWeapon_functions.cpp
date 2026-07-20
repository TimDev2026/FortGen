#include "pch.h"

#include "FN_AnimNotifyState_HolsterWeapon_classes.h"

UClass* UAnimNotifyState_HolsterWeapon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C");

	return Class;
}

// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C:Received_NotifyEnd
bool UAnimNotifyState_HolsterWeapon_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C:Received_NotifyEnd");

	FUAnimNotifyState_HolsterWeapon_C_Received_NotifyEnd_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C:Received_NotifyBegin
bool UAnimNotifyState_HolsterWeapon_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C:Received_NotifyBegin");

	FUAnimNotifyState_HolsterWeapon_C_Received_NotifyBegin_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;

	ProcessEvent(FN, &Parms);
}

