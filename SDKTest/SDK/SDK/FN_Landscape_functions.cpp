#include "pch.h"

#include "FN_Landscape_classes.h"

UClass* UControlPointMeshComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.ControlPointMeshComponent");

	return Class;
}

UClass* ULandscapeGrassType::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeGrassType");

	return Class;
}

UClass* ULandscapeComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeComponent");

	return Class;
}

UClass* ALandscapeGizmoActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeGizmoActor");

	return Class;
}

UClass* ALandscapeGizmoActiveActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeGizmoActiveActor");

	return Class;
}

UClass* ULandscapeGizmoRenderComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeGizmoRenderComponent");

	return Class;
}

UClass* ULandscapeHeightfieldCollisionComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeHeightfieldCollisionComponent");

	return Class;
}

UClass* ULandscapeMeshCollisionComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeMeshCollisionComponent");

	return Class;
}

UClass* ULandscapeInfo::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeInfo");

	return Class;
}

UClass* ULandscapeInfoMap::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeInfoMap");

	return Class;
}

UClass* ULandscapeLayerInfoObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeLayerInfoObject");

	return Class;
}

UClass* ULandscapeMaterialInstanceConstant::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeMaterialInstanceConstant");

	return Class;
}

UClass* ALandscapeMeshProxyActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeMeshProxyActor");

	return Class;
}

UClass* ULandscapeMeshProxyComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeMeshProxyComponent");

	return Class;
}

UClass* ALandscapeProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeProxy");

	return Class;
}

// Function /Script/Landscape.LandscapeProxy:EditorApplySpline
void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Landscape.LandscapeProxy:EditorApplySpline");

	FALandscapeProxy_EditorApplySpline_Params Parms;

	Parms.InSplineComponent = InSplineComponent;
	Parms.StartWidth = StartWidth;
	Parms.EndWidth = EndWidth;
	Parms.StartSideFalloff = StartSideFalloff;
	Parms.EndSideFalloff = EndSideFalloff;
	Parms.StartRoll = StartRoll;
	Parms.EndRoll = EndRoll;
	Parms.NumSubdivisions = NumSubdivisions;
	Parms.bRaiseHeights = bRaiseHeights;
	Parms.bLowerHeights = bLowerHeights;
	Parms.PaintLayer = PaintLayer;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Landscape.LandscapeProxy:ChangeLODDistanceFactor
void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Landscape.LandscapeProxy:ChangeLODDistanceFactor");

	FALandscapeProxy_ChangeLODDistanceFactor_Params Parms;

	Parms.InLODDistanceFactor = InLODDistanceFactor;

	ProcessEvent(FN, &Parms);
}

UClass* ALandscape::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.Landscape");

	return Class;
}

UClass* ULandscapeSplinesComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplinesComponent");

	return Class;
}

UClass* ULandscapeSplineSegment::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplineSegment");

	return Class;
}

UClass* ULandscapeSplineControlPoint::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplineControlPoint");

	return Class;
}

UClass* UMaterialExpressionLandscapeGrassOutput::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeGrassOutput");

	return Class;
}

UClass* UMaterialExpressionLandscapeLayerBlend::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerBlend");

	return Class;
}

UClass* UMaterialExpressionLandscapeLayerCoords::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerCoords");

	return Class;
}

UClass* UMaterialExpressionLandscapeLayerSample::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerSample");

	return Class;
}

UClass* UMaterialExpressionLandscapeLayerSwitch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerSwitch");

	return Class;
}

UClass* UMaterialExpressionLandscapeLayerWeight::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerWeight");

	return Class;
}

UClass* UMaterialExpressionLandscapeVisibilityMask::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeVisibilityMask");

	return Class;
}

UScriptStruct* FGrassVariety::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.GrassVariety");

	return Struct;
}

UScriptStruct* FWeightmapLayerAllocationInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.WeightmapLayerAllocationInfo");

	return Struct;
}

UScriptStruct* FGizmoSelectData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.GizmoSelectData");

	return Struct;
}

UScriptStruct* FLandscapeInfoLayerSettings::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeInfoLayerSettings");

	return Struct;
}

UScriptStruct* FLandscapeImportLayerInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeImportLayerInfo");

	return Struct;
}

UScriptStruct* FLandscapeLayerStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeLayerStruct");

	return Struct;
}

UScriptStruct* FLandscapeEditorLayerSettings::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeEditorLayerSettings");

	return Struct;
}

UScriptStruct* FLandscapeWeightmapUsage::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeWeightmapUsage");

	return Struct;
}

UScriptStruct* FLandscapeSplineMeshEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeSplineMeshEntry");

	return Struct;
}

UScriptStruct* FLandscapeSplineSegmentConnection::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeSplineSegmentConnection");

	return Struct;
}

UScriptStruct* FLandscapeSplineInterpPoint::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeSplineInterpPoint");

	return Struct;
}

UScriptStruct* FLandscapeSplineConnection::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LandscapeSplineConnection");

	return Struct;
}

UScriptStruct* FForeignWorldSplineData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.ForeignWorldSplineData");

	return Struct;
}

UScriptStruct* FForeignSplineSegmentData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.ForeignSplineSegmentData");

	return Struct;
}

UScriptStruct* FForeignControlPointData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.ForeignControlPointData");

	return Struct;
}

UScriptStruct* FGrassInput::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.GrassInput");

	return Struct;
}

UScriptStruct* FLayerBlendInput::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Landscape.LayerBlendInput");

	return Struct;
}

