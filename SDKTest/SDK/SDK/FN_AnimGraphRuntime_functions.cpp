#include "pch.h"

UScriptStruct* FAnimNode_ApplyAdditive::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_ApplyAdditive");

	return Struct;
}

UScriptStruct* FAnimNode_BlendListBase::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_BlendListBase");

	return Struct;
}

UScriptStruct* FAnimNode_BlendListByBool::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_BlendListByBool");

	return Struct;
}

UScriptStruct* FAnimNode_BlendListByEnum::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_BlendListByEnum");

	return Struct;
}

UScriptStruct* FAnimNode_BlendListByInt::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_BlendListByInt");

	return Struct;
}

UScriptStruct* FAnimNode_BlendSpacePlayer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer");

	return Struct;
}

UScriptStruct* FAnimNode_BlendSpaceEvaluator::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator");

	return Struct;
}

UScriptStruct* FAnimNode_SkeletalControlBase::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_SkeletalControlBase");

	return Struct;
}

UScriptStruct* FAnimNode_CopyPoseFromMesh::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh");

	return Struct;
}

UScriptStruct* FAnimNode_LayeredBoneBlend::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend");

	return Struct;
}

UScriptStruct* FAnimNode_RandomPlayer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_RandomPlayer");

	return Struct;
}

UScriptStruct* FRandomPlayerSequenceEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.RandomPlayerSequenceEntry");

	return Struct;
}

UScriptStruct* FAnimNode_MeshSpaceRefPose::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose");

	return Struct;
}

UScriptStruct* FAnimNode_RefPose::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_RefPose");

	return Struct;
}

UScriptStruct* FAnimNode_Root::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_Root");

	return Struct;
}

UScriptStruct* FAnimNode_RotateRootBone::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_RotateRootBone");

	return Struct;
}

UScriptStruct* FAnimNode_RotationOffsetBlendSpace::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace");

	return Struct;
}

UScriptStruct* FAnimNode_SaveCachedPose::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_SaveCachedPose");

	return Struct;
}

UScriptStruct* FAnimNode_SequenceEvaluator::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_SequenceEvaluator");

	return Struct;
}

UScriptStruct* FAnimNode_Slot::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_Slot");

	return Struct;
}

UScriptStruct* FAnimationNode_TwoWayBlend::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimationNode_TwoWayBlend");

	return Struct;
}

UScriptStruct* FAnimNode_AnimDynamics::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_AnimDynamics");

	return Struct;
}

UScriptStruct* FAnimPhysPlanarLimit::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimPhysPlanarLimit");

	return Struct;
}

UScriptStruct* FAnimPhysConstraintSetup::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimPhysConstraintSetup");

	return Struct;
}

UScriptStruct* FAnimNode_BoneDrivenController::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_BoneDrivenController");

	return Struct;
}

UScriptStruct* FAnimNode_CopyBone::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_CopyBone");

	return Struct;
}

UScriptStruct* FAnimNode_Fabrik::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_Fabrik");

	return Struct;
}

UScriptStruct* FAnimNode_HandIKRetargeting::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_HandIKRetargeting");

	return Struct;
}

UScriptStruct* FAnimNode_LookAt::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_LookAt");

	return Struct;
}

UScriptStruct* FAnimNode_ModifyBone::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_ModifyBone");

	return Struct;
}

UScriptStruct* FAnimNode_ObserveBone::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_ObserveBone");

	return Struct;
}

UScriptStruct* FAnimNode_RotationMultiplier::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_RotationMultiplier");

	return Struct;
}

UScriptStruct* FAnimNode_SpringBone::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_SpringBone");

	return Struct;
}

UScriptStruct* FAnimNode_Trail::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_Trail");

	return Struct;
}

UScriptStruct* FAnimNode_TwoBoneIK::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_TwoBoneIK");

	return Struct;
}

UScriptStruct* FAnimNode_WheelHandler::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/AnimGraphRuntime.AnimNode_WheelHandler");

	return Struct;
}

