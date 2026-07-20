#include "pch.h"

#include "FN_Foliage_classes.h"

UClass* UFoliageInstancedStaticMeshComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.FoliageInstancedStaticMeshComponent");

	return Class;
}

UClass* UFoliageStatistics::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.FoliageStatistics");

	return Class;
}

// Function /Script/Foliage.FoliageStatistics:FoliageOverlappingSphereCount
int32_t UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Foliage.FoliageStatistics:FoliageOverlappingSphereCount");

	FUFoliageStatistics_FoliageOverlappingSphereCount_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.CenterPosition = CenterPosition;
	Parms.Radius = Radius;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/Foliage.FoliageStatistics:FoliageOverlappingBoxCount
int32_t UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Foliage.FoliageStatistics:FoliageOverlappingBoxCount");

	FUFoliageStatistics_FoliageOverlappingBoxCount_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = Box;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UFoliageType::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.FoliageType");

	return Class;
}

UClass* UFoliageType_InstancedStaticMesh::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.FoliageType_InstancedStaticMesh");

	return Class;
}

UClass* AInstancedFoliageActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.InstancedFoliageActor");

	return Class;
}

UClass* AInteractiveFoliageActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.InteractiveFoliageActor");

	return Class;
}

// Function /Script/Foliage.InteractiveFoliageActor:CapsuleTouched
void AInteractiveFoliageActor::CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult OverlapInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Foliage.InteractiveFoliageActor:CapsuleTouched");

	FAInteractiveFoliageActor_CapsuleTouched_Params Parms;

	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.OverlapInfo = OverlapInfo;

	ProcessEvent(FN, &Parms);
}

UClass* UInteractiveFoliageComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.InteractiveFoliageComponent");

	return Class;
}

UClass* AProceduralFoliageBlockingVolume::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageBlockingVolume");

	return Class;
}

UClass* UProceduralFoliageComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageComponent");

	return Class;
}

UClass* UProceduralFoliageSpawner::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageSpawner");

	return Class;
}

// Function /Script/Foliage.ProceduralFoliageSpawner:Simulate
void UProceduralFoliageSpawner::Simulate(int32_t NumSteps)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Foliage.ProceduralFoliageSpawner:Simulate");

	FUProceduralFoliageSpawner_Simulate_Params Parms;

	Parms.NumSteps = NumSteps;

	ProcessEvent(FN, &Parms);
}

UClass* UProceduralFoliageTile::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageTile");

	return Class;
}

UClass* AProceduralFoliageVolume::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageVolume");

	return Class;
}

UScriptStruct* FProceduralFoliageInstance::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Foliage.ProceduralFoliageInstance");

	return Struct;
}

UScriptStruct* FFoliageTypeObject::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Foliage.FoliageTypeObject");

	return Struct;
}

