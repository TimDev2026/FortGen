#include "pch.h"

#include "FN_HB_RoadSpline_classes.h"

UClass* AHB_RoadSpline_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:AddPath
void AHB_RoadSpline_C::AddPath(RoadPathConnections Connection, float GravelValue, float StreetValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:AddPath");

	FAHB_RoadSpline_C_AddPath_Params Parms;

	Parms.Connection = Connection;
	Parms.GravelValue = GravelValue;
	Parms.StreetValue = StreetValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:SetPath
void AHB_RoadSpline_C::SetPath(RoadPathConnections Connection, float Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:SetPath");

	FAHB_RoadSpline_C_SetPath_Params Parms;

	Parms.Connection = Connection;
	Parms.Value = Value;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpgradePath
void AHB_RoadSpline_C::UpgradePath(class AActor* UpgradeBuilding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpgradePath");

	FAHB_RoadSpline_C_UpgradePath_Params Parms;

	Parms.UpgradeBuilding = UpgradeBuilding;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:ClearDependentActors
void AHB_RoadSpline_C::ClearDependentActors()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:ClearDependentActors");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:Set Dependent ActorsforSpline
void AHB_RoadSpline_C::Set_Dependent_ActorsforSpline()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:Set Dependent ActorsforSpline");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:Make Dynamic Material
void AHB_RoadSpline_C::Make_Dynamic_Material(class UMeshComponent* Mesh)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:Make Dynamic Material");

	FAHB_RoadSpline_C_Make_Dynamic_Material_Params Parms;

	Parms.Mesh = Mesh;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpdateDependentActors
void AHB_RoadSpline_C::UpdateDependentActors()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpdateDependentActors");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:SetDependentActor
void AHB_RoadSpline_C::SetDependentActor(class AActor* Actor, RoadConnections RoadConnection)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:SetDependentActor");

	FAHB_RoadSpline_C_SetDependentActor_Params Parms;

	Parms.Actor = Actor;
	Parms.RoadConnection = RoadConnection;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpdateSplineRoadConectionEnd
void AHB_RoadSpline_C::UpdateSplineRoadConectionEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpdateSplineRoadConectionEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpdateSpline Road Connection Start
void AHB_RoadSpline_C::UpdateSpline_Road_Connection_Start()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UpdateSpline Road Connection Start");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:SetSplineVaribles
void AHB_RoadSpline_C::SetSplineVaribles()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:SetSplineVaribles");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UserConstructionScript
void AHB_RoadSpline_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadSpline.HB_RoadSpline_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

