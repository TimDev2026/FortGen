#include "pch.h"

#include "FN_MyFort_Manager_classes.h"

UClass* AMyFort_Manager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C");

	return Class;
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:ShouldCreateBuilding
void AMyFort_Manager_C::ShouldCreateBuilding(class UMyTownBuildingDefinitionData* Building_Definition, bool Allow_Create)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:ShouldCreateBuilding");

	FAMyFort_Manager_C_ShouldCreateBuilding_Params Parms;

	Parms.Building_Definition = Building_Definition;
	Parms.Allow_Create = Allow_Create;

	ProcessEvent(FN, &Parms);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:MouseOverBuildingState
void AMyFort_Manager_C::MouseOverBuildingState(int32_t Building_ID, class AMyTownBuildingActor* Building, class USphereComponent* CollisionComponent, class UStaticMeshComponent* Building_Mesh)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:MouseOverBuildingState");

	FAMyFort_Manager_C_MouseOverBuildingState_Params Parms;

	Parms.Building_ID = Building_ID;
	Parms.Building = Building;
	Parms.CollisionComponent = CollisionComponent;
	Parms.Building_Mesh = Building_Mesh;

	ProcessEvent(FN, &Parms);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:FindBuildingID
bool AMyFort_Manager_C::FindBuildingID(FString A, class AMyTownBuildingActor* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:FindBuildingID");

	FAMyFort_Manager_C_FindBuildingID_Params Parms;

	Parms.A = A;
	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:SmallWorldCollision
void AMyFort_Manager_C::SmallWorldCollision(FVector InitialBuildingLocation, FVector CameraLocation, class USphereComponent* Collision, float DistanceOffset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:SmallWorldCollision");

	FAMyFort_Manager_C_SmallWorldCollision_Params Parms;

	Parms.InitialBuildingLocation = InitialBuildingLocation;
	Parms.CameraLocation = CameraLocation;
	Parms.Collision = Collision;
	Parms.DistanceOffset = DistanceOffset;

	ProcessEvent(FN, &Parms);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:UpdateRoads
void AMyFort_Manager_C::UpdateRoads()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:UpdateRoads");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:SaveBuildingPosition
void AMyFort_Manager_C::SaveBuildingPosition()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:SaveBuildingPosition");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:Initialize Array
void AMyFort_Manager_C::Initialize_Array()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:Initialize Array");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:UserConstructionScript
void AMyFort_Manager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:OnMyTownBuildingWorkersChanged_Event_0_Copy
void AMyFort_Manager_C::OnMyTownBuildingWorkersChanged_Event_0_Copy(FString BuildingTemplateId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:OnMyTownBuildingWorkersChanged_Event_0_Copy");

	FAMyFort_Manager_C_OnMyTownBuildingWorkersChanged_Event_0_Copy_Params Parms;

	Parms.BuildingTemplateId = BuildingTemplateId;

	ProcessEvent(FN, &Parms);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:ChangeWorker
void AMyFort_Manager_C::ChangeWorker()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:ChangeWorker");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:HandleClientEvent_OnboardingInitializeVisuals
void AMyFort_Manager_C::HandleClientEvent_OnboardingInitializeVisuals(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:HandleClientEvent_OnboardingInitializeVisuals");

	FAMyFort_Manager_C_HandleClientEvent_OnboardingInitializeVisuals_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:ReceiveBeginPlay
void AMyFort_Manager_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:OnMyTownInitialized_Event
void AMyFort_Manager_C::OnMyTownInitialized_Event()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:OnMyTownInitialized_Event");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:OnMyTownBannerColorChanged_Event
void AMyFort_Manager_C::OnMyTownBannerColorChanged_Event(FLinearColor NewColor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:OnMyTownBannerColorChanged_Event");

	FAMyFort_Manager_C_OnMyTownBannerColorChanged_Event_Params Parms;

	Parms.NewColor = NewColor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:SpawnBuildings
void AMyFort_Manager_C::SpawnBuildings()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:SpawnBuildings");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:FindNumberofBuildings
void AMyFort_Manager_C::FindNumberofBuildings()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:FindNumberofBuildings");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:PositioningActors
void AMyFort_Manager_C::PositioningActors()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:PositioningActors");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:BannerColors
void AMyFort_Manager_C::BannerColors()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:BannerColors");

	ProcessEvent(FN, nullptr);
}

// Function /Game/MyFort/MyFort_Manager.MyFort_Manager_C:ExecuteUbergraph_MyFort_Manager
void AMyFort_Manager_C::ExecuteUbergraph_MyFort_Manager(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/MyFort/MyFort_Manager.MyFort_Manager_C:ExecuteUbergraph_MyFort_Manager");

	FAMyFort_Manager_C_ExecuteUbergraph_MyFort_Manager_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

