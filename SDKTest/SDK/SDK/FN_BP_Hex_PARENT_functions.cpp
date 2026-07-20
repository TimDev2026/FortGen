#include "pch.h"

#include "FN_BP_Hex_PARENT_classes.h"

UClass* ABP_Hex_PARENT_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C");

	return Class;
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:GetBaseTextureForType
void ABP_Hex_PARENT_C::GetBaseTextureForType(float TypeId, class UTexture2D* BaseTexture)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:GetBaseTextureForType");

	FABP_Hex_PARENT_C_GetBaseTextureForType_Params Parms;

	Parms.TypeId = TypeId;
	Parms.BaseTexture = BaseTexture;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:GroundSliceSettings
void ABP_Hex_PARENT_C::GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:GroundSliceSettings");

	FABP_Hex_PARENT_C_GroundSliceSettings_Params Parms;

	Parms.SourceMaterial = SourceMaterial;
	Parms.TileTypeA = TileTypeA;
	Parms.TileTypeB = TileTypeB;
	Parms.TileIsSameRegionA = TileIsSameRegionA;
	Parms.TileIsSameRegionB = TileIsSameRegionB;
	Parms.TileIsHiddenA = TileIsHiddenA;
	Parms.TileIsHiddenB = TileIsHiddenB;
	Parms.TileExistsA = TileExistsA;
	Parms.TileExistsB = TileExistsB;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:SetDirectionalTextures
void ABP_Hex_PARENT_C::SetDirectionalTextures(class UMaterialInstanceDynamic* SourceMaterial, class UTextRenderComponent* DebugTextDirection, FName TileExistsParamName, class UTexture2D* TileExistsTexture)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:SetDirectionalTextures");

	FABP_Hex_PARENT_C_SetDirectionalTextures_Params Parms;

	Parms.SourceMaterial = SourceMaterial;
	Parms.DebugTextDirection = DebugTextDirection;
	Parms.TileExistsParamName = TileExistsParamName;
	Parms.TileExistsTexture = TileExistsTexture;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:UserConstructionScript
void ABP_Hex_PARENT_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_0__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_0__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_1__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_1__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_1__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_1__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_1__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_1__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_2__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_2__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_2__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_2__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_2__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_2__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_3__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_3__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_3__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_3__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_3__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_3__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_4__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_4__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_4__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_4__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_4__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_4__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_5__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_5__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_5__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_5__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_5__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_5__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_6__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_6__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_6__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_6__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_6__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_6__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_7__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_7__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_7__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_7__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_7__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_7__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_8__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_8__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_8__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_8__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_8__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_8__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_9__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_9__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_9__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_9__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_9__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_9__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_10__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_10__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_10__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_10__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_10__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_10__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_11__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_11__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_11__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_11__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_11__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_11__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_12__FinishedFunc
void ABP_Hex_PARENT_C::Timeline_12__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_12__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_12__UpdateFunc
void ABP_Hex_PARENT_C::Timeline_12__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:Timeline_12__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnClientSelect
void ABP_Hex_PARENT_C::OnClientSelect()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnClientSelect");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnClientDeselect
void ABP_Hex_PARENT_C::OnClientDeselect()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnClientDeselect");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnHostSelect
void ABP_Hex_PARENT_C::OnHostSelect()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnHostSelect");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnHostDeselect
void ABP_Hex_PARENT_C::OnHostDeselect()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnHostDeselect");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnFocus
void ABP_Hex_PARENT_C::OnFocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnFocus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnDefocus
void ABP_Hex_PARENT_C::OnDefocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnDefocus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleSpawnLight
void ABP_Hex_PARENT_C::OnParticleSpawnLight(FName EventName, float EmitterTime, FVector Location, FVector Velocity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleSpawnLight");

	FABP_Hex_PARENT_C_OnParticleSpawnLight_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleDieBolt
void ABP_Hex_PARENT_C::OnParticleDieBolt(FName EventName, float EmitterTime, int32_t ParticleTime, FVector Location, FVector Velocity, FVector Direction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleDieBolt");

	FABP_Hex_PARENT_C_OnParticleDieBolt_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;
	Parms.Direction = Direction;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleDieBolt2
void ABP_Hex_PARENT_C::OnParticleDieBolt2(FName EventName, float EmitterTime, int32_t ParticleTime, FVector Location, FVector Velocity, FVector Direction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleDieBolt2");

	FABP_Hex_PARENT_C_OnParticleDieBolt2_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;
	Parms.Direction = Direction;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleSpawnLight_01
void ABP_Hex_PARENT_C::OnParticleSpawnLight_01(FName EventName, float EmitterTime, FVector Location, FVector Velocity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleSpawnLight_01");

	FABP_Hex_PARENT_C_OnParticleSpawnLight_01_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleDieBolt_01
void ABP_Hex_PARENT_C::OnParticleDieBolt_01(FName EventName, float EmitterTime, int32_t ParticleTime, FVector Location, FVector Velocity, FVector Direction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnParticleDieBolt_01");

	FABP_Hex_PARENT_C_OnParticleDieBolt_01_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;
	Parms.Direction = Direction;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnMissionDataUpdated
void ABP_Hex_PARENT_C::OnMissionDataUpdated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnMissionDataUpdated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:PlayPing
void ABP_Hex_PARENT_C::PlayPing()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:PlayPing");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:ForceDefocus
void ABP_Hex_PARENT_C::ForceDefocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:ForceDefocus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:CheckFocus
void ABP_Hex_PARENT_C::CheckFocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:CheckFocus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:InitializeTheater
void ABP_Hex_PARENT_C::InitializeTheater()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:InitializeTheater");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:FireLightningA
void ABP_Hex_PARENT_C::FireLightningA()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:FireLightningA");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:DeactivateTheater
void ABP_Hex_PARENT_C::DeactivateTheater()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:DeactivateTheater");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:HandleTeamPowerChanged
void ABP_Hex_PARENT_C::HandleTeamPowerChanged(int32_t TeamPower, int32_t PersonalPower)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:HandleTeamPowerChanged");

	FABP_Hex_PARENT_C_HandleTeamPowerChanged_Params Parms;

	Parms.TeamPower = TeamPower;
	Parms.PersonalPower = PersonalPower;

	ProcessEvent(FN, &Parms);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnInitializeTile
void ABP_Hex_PARENT_C::OnInitializeTile()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:OnInitializeTile");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:ExecuteUbergraph_BP_Hex_PARENT
void ABP_Hex_PARENT_C::ExecuteUbergraph_BP_Hex_PARENT(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/BP_Hex_PARENT.BP_Hex_PARENT_C:ExecuteUbergraph_BP_Hex_PARENT");

	FABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__MissionTooltip_C_134::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/World/BP_Hex_PARENT.PLACEHOLDER-CLASS__MissionTooltip_C_134");

	return Class;
}

