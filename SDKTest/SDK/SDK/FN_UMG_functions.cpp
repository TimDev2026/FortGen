#include "pch.h"

#include "FN_UMG_classes.h"

UClass* UAsyncTaskDownloadImage::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.AsyncTaskDownloadImage");

	return Class;
}

// Function /Script/UMG.AsyncTaskDownloadImage:DownloadImage
class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(FString URL)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.AsyncTaskDownloadImage:DownloadImage");

	FUAsyncTaskDownloadImage_DownloadImage_Params Parms;

	Parms.URL = URL;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UDragDropOperation::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.DragDropOperation");

	return Class;
}

// Function /Script/UMG.DragDropOperation:Drop
void UDragDropOperation::Drop(FPointerEvent PointerEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.DragDropOperation:Drop");

	FUDragDropOperation_Drop_Params Parms;

	Parms.PointerEvent = PointerEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.DragDropOperation:Dragged
void UDragDropOperation::Dragged(FPointerEvent PointerEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.DragDropOperation:Dragged");

	FUDragDropOperation_Dragged_Params Parms;

	Parms.PointerEvent = PointerEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.DragDropOperation:DragCancelled
void UDragDropOperation::DragCancelled(FPointerEvent PointerEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.DragDropOperation:DragCancelled");

	FUDragDropOperation_DragCancelled_Params Parms;

	Parms.PointerEvent = PointerEvent;

	ProcessEvent(FN, &Parms);
}

UClass* UMovieScene2DTransformSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MovieScene2DTransformSection");

	return Class;
}

UClass* UMovieScene2DTransformTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MovieScene2DTransformTrack");

	return Class;
}

UClass* UMovieSceneMarginSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MovieSceneMarginSection");

	return Class;
}

UClass* UMovieSceneMarginTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MovieSceneMarginTrack");

	return Class;
}

UClass* UNamedSlotInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.NamedSlotInterface");

	return Class;
}

UClass* UPropertyBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.PropertyBinding");

	return Class;
}

UClass* UBoolBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.BoolBinding");

	return Class;
}

// Function /Script/UMG.BoolBinding:GetValue
bool UBoolBinding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.BoolBinding:GetValue");

	FUBoolBinding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UBrushBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.BrushBinding");

	return Class;
}

// Function /Script/UMG.BrushBinding:GetValue
FSlateBrush UBrushBinding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.BrushBinding:GetValue");

	FUBrushBinding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UCheckedStateBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.CheckedStateBinding");

	return Class;
}

// Function /Script/UMG.CheckedStateBinding:GetValue
ECheckBoxState UCheckedStateBinding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CheckedStateBinding:GetValue");

	FUCheckedStateBinding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UColorBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ColorBinding");

	return Class;
}

// Function /Script/UMG.ColorBinding:GetSlateValue
FSlateColor UColorBinding::GetSlateValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ColorBinding:GetSlateValue");

	FUColorBinding_GetSlateValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ColorBinding:GetLinearValue
FLinearColor UColorBinding::GetLinearValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ColorBinding:GetLinearValue");

	FUColorBinding_GetLinearValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFloatBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.FloatBinding");

	return Class;
}

// Function /Script/UMG.FloatBinding:GetValue
float UFloatBinding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.FloatBinding:GetValue");

	FUFloatBinding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UInt32Binding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Int32Binding");

	return Class;
}

// Function /Script/UMG.Int32Binding:GetValue
int32_t UInt32Binding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Int32Binding:GetValue");

	FUInt32Binding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UMouseCursorBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MouseCursorBinding");

	return Class;
}

// Function /Script/UMG.MouseCursorBinding:GetValue
EMouseCursor UMouseCursorBinding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MouseCursorBinding:GetValue");

	FUMouseCursorBinding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UTextBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.TextBinding");

	return Class;
}

// Function /Script/UMG.TextBinding:GetTextValue
FText UTextBinding::GetTextValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBinding:GetTextValue");

	FUTextBinding_GetTextValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBinding:GetStringValue
FString UTextBinding::GetStringValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBinding:GetStringValue");

	FUTextBinding_GetStringValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UVisibilityBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.VisibilityBinding");

	return Class;
}

// Function /Script/UMG.VisibilityBinding:GetValue
ESlateVisibility UVisibilityBinding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.VisibilityBinding:GetValue");

	FUVisibilityBinding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UWidgetBinding::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetBinding");

	return Class;
}

// Function /Script/UMG.WidgetBinding:GetValue
class UWidget* UWidgetBinding::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBinding:GetValue");

	FUWidgetBinding_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* URichTextBlockDecorator::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.RichTextBlockDecorator");

	return Class;
}

UClass* USlateBlueprintLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SlateBlueprintLibrary");

	return Class;
}

// Function /Script/UMG.SlateBlueprintLibrary:LocalToViewport
void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, FGeometry Geometry, FVector2D LocalCoordinate, FVector2D PixelPosition, FVector2D ViewportPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SlateBlueprintLibrary:LocalToViewport");

	FUSlateBlueprintLibrary_LocalToViewport_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;
	Parms.PixelPosition = PixelPosition;
	Parms.ViewportPosition = ViewportPosition;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SlateBlueprintLibrary:LocalToAbsolute
FVector2D USlateBlueprintLibrary::LocalToAbsolute(FGeometry Geometry, FVector2D LocalCoordinate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SlateBlueprintLibrary:LocalToAbsolute");

	FUSlateBlueprintLibrary_LocalToAbsolute_Params Parms;

	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SlateBlueprintLibrary:IsUnderLocation
bool USlateBlueprintLibrary::IsUnderLocation(FGeometry Geometry, FVector2D AbsoluteCoordinate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SlateBlueprintLibrary:IsUnderLocation");

	FUSlateBlueprintLibrary_IsUnderLocation_Params Parms;

	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SlateBlueprintLibrary:GetLocalSize
FVector2D USlateBlueprintLibrary::GetLocalSize(FGeometry Geometry)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SlateBlueprintLibrary:GetLocalSize");

	FUSlateBlueprintLibrary_GetLocalSize_Params Parms;

	Parms.Geometry = Geometry;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SlateBlueprintLibrary:AbsoluteToViewport
void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D PixelPosition, FVector2D ViewportPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SlateBlueprintLibrary:AbsoluteToViewport");

	FUSlateBlueprintLibrary_AbsoluteToViewport_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
	Parms.PixelPosition = PixelPosition;
	Parms.ViewportPosition = ViewportPosition;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SlateBlueprintLibrary:AbsoluteToLocal
FVector2D USlateBlueprintLibrary::AbsoluteToLocal(FGeometry Geometry, FVector2D AbsoluteCoordinate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SlateBlueprintLibrary:AbsoluteToLocal");

	FUSlateBlueprintLibrary_AbsoluteToLocal_Params Parms;

	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* USlateDataSheet::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SlateDataSheet");

	return Class;
}

UClass* USlateVectorArtData::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SlateVectorArtData");

	return Class;
}

UClass* UUMGSequencePlayer::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.UMGSequencePlayer");

	return Class;
}

UClass* UVisual::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Visual");

	return Class;
}

UClass* UPanelSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.PanelSlot");

	return Class;
}

UClass* UBorderSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.BorderSlot");

	return Class;
}

// Function /Script/UMG.BorderSlot:SetVerticalAlignment
void UBorderSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.BorderSlot:SetVerticalAlignment");

	FUBorderSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.BorderSlot:SetPadding
void UBorderSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.BorderSlot:SetPadding");

	FUBorderSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.BorderSlot:SetHorizontalAlignment
void UBorderSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.BorderSlot:SetHorizontalAlignment");

	FUBorderSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* UButtonSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ButtonSlot");

	return Class;
}

// Function /Script/UMG.ButtonSlot:SetVerticalAlignment
void UButtonSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ButtonSlot:SetVerticalAlignment");

	FUButtonSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ButtonSlot:SetPadding
void UButtonSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ButtonSlot:SetPadding");

	FUButtonSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ButtonSlot:SetHorizontalAlignment
void UButtonSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ButtonSlot:SetHorizontalAlignment");

	FUButtonSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* UCanvasPanelSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.CanvasPanelSlot");

	return Class;
}

// Function /Script/UMG.CanvasPanelSlot:SetZOrder
void UCanvasPanelSlot::SetZOrder(int32_t InZOrder)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetZOrder");

	FUCanvasPanelSlot_SetZOrder_Params Parms;

	Parms.InZOrder = InZOrder;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetSize
void UCanvasPanelSlot::SetSize(FVector2D InSize)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetSize");

	FUCanvasPanelSlot_SetSize_Params Parms;

	Parms.InSize = InSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetPosition
void UCanvasPanelSlot::SetPosition(FVector2D InPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetPosition");

	FUCanvasPanelSlot_SetPosition_Params Parms;

	Parms.InPosition = InPosition;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetOffsets
void UCanvasPanelSlot::SetOffsets(FMargin InOffset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetOffsets");

	FUCanvasPanelSlot_SetOffsets_Params Parms;

	Parms.InOffset = InOffset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetMinimum
void UCanvasPanelSlot::SetMinimum(FVector2D InMinimumAnchors)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetMinimum");

	FUCanvasPanelSlot_SetMinimum_Params Parms;

	Parms.InMinimumAnchors = InMinimumAnchors;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetMaximum
void UCanvasPanelSlot::SetMaximum(FVector2D InMaximumAnchors)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetMaximum");

	FUCanvasPanelSlot_SetMaximum_Params Parms;

	Parms.InMaximumAnchors = InMaximumAnchors;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetLayout
void UCanvasPanelSlot::SetLayout(FAnchorData InLayoutData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetLayout");

	FUCanvasPanelSlot_SetLayout_Params Parms;

	Parms.InLayoutData = InLayoutData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetAutoSize
void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetAutoSize");

	FUCanvasPanelSlot_SetAutoSize_Params Parms;

	Parms.InbAutoSize = InbAutoSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetAnchors
void UCanvasPanelSlot::SetAnchors(FAnchors InAnchors)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetAnchors");

	FUCanvasPanelSlot_SetAnchors_Params Parms;

	Parms.InAnchors = InAnchors;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:SetAlignment
void UCanvasPanelSlot::SetAlignment(FVector2D InAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:SetAlignment");

	FUCanvasPanelSlot_SetAlignment_Params Parms;

	Parms.InAlignment = InAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetZOrder
int32_t UCanvasPanelSlot::GetZOrder() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetZOrder");

	FUCanvasPanelSlot_GetZOrder_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetSize
FVector2D UCanvasPanelSlot::GetSize() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetSize");

	FUCanvasPanelSlot_GetSize_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetPosition
FVector2D UCanvasPanelSlot::GetPosition() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetPosition");

	FUCanvasPanelSlot_GetPosition_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetOffsets
FMargin UCanvasPanelSlot::GetOffsets() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetOffsets");

	FUCanvasPanelSlot_GetOffsets_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetLayout
FAnchorData UCanvasPanelSlot::GetLayout() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetLayout");

	FUCanvasPanelSlot_GetLayout_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetAutoSize
bool UCanvasPanelSlot::GetAutoSize() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetAutoSize");

	FUCanvasPanelSlot_GetAutoSize_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetAnchors
FAnchors UCanvasPanelSlot::GetAnchors() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetAnchors");

	FUCanvasPanelSlot_GetAnchors_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CanvasPanelSlot:GetAlignment
FVector2D UCanvasPanelSlot::GetAlignment() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanelSlot:GetAlignment");

	FUCanvasPanelSlot_GetAlignment_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UGridSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.GridSlot");

	return Class;
}

// Function /Script/UMG.GridSlot:SetVerticalAlignment
void UGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridSlot:SetVerticalAlignment");

	FUGridSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.GridSlot:SetRowSpan
void UGridSlot::SetRowSpan(int32_t InRowSpan)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridSlot:SetRowSpan");

	FUGridSlot_SetRowSpan_Params Parms;

	Parms.InRowSpan = InRowSpan;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.GridSlot:SetRow
void UGridSlot::SetRow(int32_t InRow)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridSlot:SetRow");

	FUGridSlot_SetRow_Params Parms;

	Parms.InRow = InRow;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.GridSlot:SetLayer
void UGridSlot::SetLayer(int32_t InLayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridSlot:SetLayer");

	FUGridSlot_SetLayer_Params Parms;

	Parms.InLayer = InLayer;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.GridSlot:SetHorizontalAlignment
void UGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridSlot:SetHorizontalAlignment");

	FUGridSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.GridSlot:SetColumnSpan
void UGridSlot::SetColumnSpan(int32_t InColumnSpan)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridSlot:SetColumnSpan");

	FUGridSlot_SetColumnSpan_Params Parms;

	Parms.InColumnSpan = InColumnSpan;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.GridSlot:SetColumn
void UGridSlot::SetColumn(int32_t InColumn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridSlot:SetColumn");

	FUGridSlot_SetColumn_Params Parms;

	Parms.InColumn = InColumn;

	ProcessEvent(FN, &Parms);
}

UClass* UHorizontalBoxSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.HorizontalBoxSlot");

	return Class;
}

// Function /Script/UMG.HorizontalBoxSlot:SetVerticalAlignment
void UHorizontalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.HorizontalBoxSlot:SetVerticalAlignment");

	FUHorizontalBoxSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.HorizontalBoxSlot:SetSize
void UHorizontalBoxSlot::SetSize(FSlateChildSize InSize)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.HorizontalBoxSlot:SetSize");

	FUHorizontalBoxSlot_SetSize_Params Parms;

	Parms.InSize = InSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.HorizontalBoxSlot:SetPadding
void UHorizontalBoxSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.HorizontalBoxSlot:SetPadding");

	FUHorizontalBoxSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.HorizontalBoxSlot:SetHorizontalAlignment
void UHorizontalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.HorizontalBoxSlot:SetHorizontalAlignment");

	FUHorizontalBoxSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* UOverlaySlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.OverlaySlot");

	return Class;
}

// Function /Script/UMG.OverlaySlot:SetVerticalAlignment
void UOverlaySlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.OverlaySlot:SetVerticalAlignment");

	FUOverlaySlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.OverlaySlot:SetPadding
void UOverlaySlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.OverlaySlot:SetPadding");

	FUOverlaySlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.OverlaySlot:SetHorizontalAlignment
void UOverlaySlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.OverlaySlot:SetHorizontalAlignment");

	FUOverlaySlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* USafeZoneSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SafeZoneSlot");

	return Class;
}

UClass* UScaleBoxSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ScaleBoxSlot");

	return Class;
}

// Function /Script/UMG.ScaleBoxSlot:SetVerticalAlignment
void UScaleBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScaleBoxSlot:SetVerticalAlignment");

	FUScaleBoxSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ScaleBoxSlot:SetPadding
void UScaleBoxSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScaleBoxSlot:SetPadding");

	FUScaleBoxSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ScaleBoxSlot:SetHorizontalAlignment
void UScaleBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScaleBoxSlot:SetHorizontalAlignment");

	FUScaleBoxSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* UScrollBoxSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ScrollBoxSlot");

	return Class;
}

// Function /Script/UMG.ScrollBoxSlot:SetPadding
void UScrollBoxSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBoxSlot:SetPadding");

	FUScrollBoxSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ScrollBoxSlot:SetHorizontalAlignment
void UScrollBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBoxSlot:SetHorizontalAlignment");

	FUScrollBoxSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* USizeBoxSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SizeBoxSlot");

	return Class;
}

// Function /Script/UMG.SizeBoxSlot:SetVerticalAlignment
void USizeBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBoxSlot:SetVerticalAlignment");

	FUSizeBoxSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBoxSlot:SetPadding
void USizeBoxSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBoxSlot:SetPadding");

	FUSizeBoxSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBoxSlot:SetHorizontalAlignment
void USizeBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBoxSlot:SetHorizontalAlignment");

	FUSizeBoxSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* UUniformGridSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.UniformGridSlot");

	return Class;
}

// Function /Script/UMG.UniformGridSlot:SetVerticalAlignment
void UUniformGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridSlot:SetVerticalAlignment");

	FUUniformGridSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UniformGridSlot:SetRow
void UUniformGridSlot::SetRow(int32_t InRow)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridSlot:SetRow");

	FUUniformGridSlot_SetRow_Params Parms;

	Parms.InRow = InRow;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UniformGridSlot:SetHorizontalAlignment
void UUniformGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridSlot:SetHorizontalAlignment");

	FUUniformGridSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UniformGridSlot:SetColumn
void UUniformGridSlot::SetColumn(int32_t InColumn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridSlot:SetColumn");

	FUUniformGridSlot_SetColumn_Params Parms;

	Parms.InColumn = InColumn;

	ProcessEvent(FN, &Parms);
}

UClass* UVerticalBoxSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.VerticalBoxSlot");

	return Class;
}

// Function /Script/UMG.VerticalBoxSlot:SetVerticalAlignment
void UVerticalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.VerticalBoxSlot:SetVerticalAlignment");

	FUVerticalBoxSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.VerticalBoxSlot:SetSize
void UVerticalBoxSlot::SetSize(FSlateChildSize InSize)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.VerticalBoxSlot:SetSize");

	FUVerticalBoxSlot_SetSize_Params Parms;

	Parms.InSize = InSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.VerticalBoxSlot:SetPadding
void UVerticalBoxSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.VerticalBoxSlot:SetPadding");

	FUVerticalBoxSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.VerticalBoxSlot:SetHorizontalAlignment
void UVerticalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.VerticalBoxSlot:SetHorizontalAlignment");

	FUVerticalBoxSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* UWidgetSwitcherSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetSwitcherSlot");

	return Class;
}

// Function /Script/UMG.WidgetSwitcherSlot:SetVerticalAlignment
void UWidgetSwitcherSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcherSlot:SetVerticalAlignment");

	FUWidgetSwitcherSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetSwitcherSlot:SetPadding
void UWidgetSwitcherSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcherSlot:SetPadding");

	FUWidgetSwitcherSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetSwitcherSlot:SetHorizontalAlignment
void UWidgetSwitcherSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcherSlot:SetHorizontalAlignment");

	FUWidgetSwitcherSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

UClass* UWrapBoxSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WrapBoxSlot");

	return Class;
}

// Function /Script/UMG.WrapBoxSlot:SetVerticalAlignment
void UWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WrapBoxSlot:SetVerticalAlignment");

	FUWrapBoxSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WrapBoxSlot:SetPadding
void UWrapBoxSlot::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WrapBoxSlot:SetPadding");

	FUWrapBoxSlot_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WrapBoxSlot:SetHorizontalAlignment
void UWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WrapBoxSlot:SetHorizontalAlignment");

	FUWrapBoxSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WrapBoxSlot:SetFillSpanWhenLessThan
void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WrapBoxSlot:SetFillSpanWhenLessThan");

	FUWrapBoxSlot_SetFillSpanWhenLessThan_Params Parms;

	Parms.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WrapBoxSlot:SetFillEmptySpace
void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WrapBoxSlot:SetFillEmptySpace");

	FUWrapBoxSlot_SetFillEmptySpace_Params Parms;

	Parms.InbFillEmptySpace = InbFillEmptySpace;

	ProcessEvent(FN, &Parms);
}

UClass* UWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Widget");

	return Class;
}

// Function /Script/UMG.Widget:SetVisibility
void UWidget::SetVisibility(ESlateVisibility InVisibility)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetVisibility");

	FUWidget_SetVisibility_Params Parms;

	Parms.InVisibility = InVisibility;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetUserFocus
void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetUserFocus");

	FUWidget_SetUserFocus_Params Parms;

	Parms.PlayerController = PlayerController;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetToolTipText
void UWidget::SetToolTipText(FText InToolTipText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetToolTipText");

	FUWidget_SetToolTipText_Params Parms;

	Parms.InToolTipText = InToolTipText;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetToolTip
void UWidget::SetToolTip(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetToolTip");

	FUWidget_SetToolTip_Params Parms;

	Parms.Widget = Widget;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetRenderTranslation
void UWidget::SetRenderTranslation(FVector2D Translation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetRenderTranslation");

	FUWidget_SetRenderTranslation_Params Parms;

	Parms.Translation = Translation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetRenderTransformPivot
void UWidget::SetRenderTransformPivot(FVector2D Pivot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetRenderTransformPivot");

	FUWidget_SetRenderTransformPivot_Params Parms;

	Parms.Pivot = Pivot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetRenderTransform
void UWidget::SetRenderTransform(FWidgetTransform InTransform)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetRenderTransform");

	FUWidget_SetRenderTransform_Params Parms;

	Parms.InTransform = InTransform;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetRenderShear
void UWidget::SetRenderShear(FVector2D Shear)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetRenderShear");

	FUWidget_SetRenderShear_Params Parms;

	Parms.Shear = Shear;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetRenderScale
void UWidget::SetRenderScale(FVector2D Scale)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetRenderScale");

	FUWidget_SetRenderScale_Params Parms;

	Parms.Scale = Scale;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetRenderAngle
void UWidget::SetRenderAngle(float Angle)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetRenderAngle");

	FUWidget_SetRenderAngle_Params Parms;

	Parms.Angle = Angle;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetKeyboardFocus
void UWidget::SetKeyboardFocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetKeyboardFocus");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.Widget:SetIsEnabled
void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetIsEnabled");

	FUWidget_SetIsEnabled_Params Parms;

	Parms.bInIsEnabled = bInIsEnabled;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:SetCursor
void UWidget::SetCursor(EMouseCursor InCursor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:SetCursor");

	FUWidget_SetCursor_Params Parms;

	Parms.InCursor = InCursor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:ResetCursor
void UWidget::ResetCursor()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:ResetCursor");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.Widget:RemoveFromParent
void UWidget::RemoveFromParent()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:RemoveFromParent");

	ProcessEvent(FN, nullptr);
}

// DelegateFunction /Script/UMG.Widget:OnReply__DelegateSignature
FEventReply UWidget::OnReply__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:OnReply__DelegateSignature");

	FUWidget_OnReply__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:OnPointerEvent__DelegateSignature
FEventReply UWidget::OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:OnPointerEvent__DelegateSignature");

	FUWidget_OnPointerEvent__DelegateSignature_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:IsVisible
bool UWidget::IsVisible() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:IsVisible");

	FUWidget_IsVisible_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:IsHovered
bool UWidget::IsHovered() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:IsHovered");

	FUWidget_IsHovered_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:InvalidateLayoutAndVolatility
void UWidget::InvalidateLayoutAndVolatility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:InvalidateLayoutAndVolatility");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.Widget:HasUserFocusedDescendants
bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:HasUserFocusedDescendants");

	FUWidget_HasUserFocusedDescendants_Params Parms;

	Parms.PlayerController = PlayerController;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:HasUserFocus
bool UWidget::HasUserFocus(class APlayerController* PlayerController) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:HasUserFocus");

	FUWidget_HasUserFocus_Params Parms;

	Parms.PlayerController = PlayerController;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:HasMouseCapture
bool UWidget::HasMouseCapture() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:HasMouseCapture");

	FUWidget_HasMouseCapture_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:HasKeyboardFocus
bool UWidget::HasKeyboardFocus() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:HasKeyboardFocus");

	FUWidget_HasKeyboardFocus_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:HasFocusedDescendants
bool UWidget::HasFocusedDescendants() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:HasFocusedDescendants");

	FUWidget_HasFocusedDescendants_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:HasAnyUserFocus
bool UWidget::HasAnyUserFocus() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:HasAnyUserFocus");

	FUWidget_HasAnyUserFocus_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetWidget__DelegateSignature
class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetWidget__DelegateSignature");

	FUWidget_GetWidget__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:GetVisibility
ESlateVisibility UWidget::GetVisibility() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetVisibility");

	FUWidget_GetVisibility_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetText__DelegateSignature
FText UWidget::GetText__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetText__DelegateSignature");

	FUWidget_GetText__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetSlateVisibility__DelegateSignature
ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetSlateVisibility__DelegateSignature");

	FUWidget_GetSlateVisibility__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetSlateColor__DelegateSignature
FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetSlateColor__DelegateSignature");

	FUWidget_GetSlateColor__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetSlateBrush__DelegateSignature
FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetSlateBrush__DelegateSignature");

	FUWidget_GetSlateBrush__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:GetParent
class UPanelWidget* UWidget::GetParent() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetParent");

	FUWidget_GetParent_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetMouseCursor__DelegateSignature
EMouseCursor UWidget::GetMouseCursor__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetMouseCursor__DelegateSignature");

	FUWidget_GetMouseCursor__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetLinearColor__DelegateSignature
FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetLinearColor__DelegateSignature");

	FUWidget_GetLinearColor__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:GetIsEnabled
bool UWidget::GetIsEnabled() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetIsEnabled");

	FUWidget_GetIsEnabled_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetInt32__DelegateSignature
int32_t UWidget::GetInt32__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetInt32__DelegateSignature");

	FUWidget_GetInt32__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetFloat__DelegateSignature
float UWidget::GetFloat__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetFloat__DelegateSignature");

	FUWidget_GetFloat__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:GetDesiredSize
FVector2D UWidget::GetDesiredSize() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetDesiredSize");

	FUWidget_GetDesiredSize_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetCheckBoxState__DelegateSignature
ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetCheckBoxState__DelegateSignature");

	FUWidget_GetCheckBoxState__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GetBool__DelegateSignature
bool UWidget::GetBool__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GetBool__DelegateSignature");

	FUWidget_GetBool__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GenerateWidgetForString__DelegateSignature
class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(FString Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GenerateWidgetForString__DelegateSignature");

	FUWidget_GenerateWidgetForString__DelegateSignature_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.Widget:GenerateWidgetForObject__DelegateSignature
class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:GenerateWidgetForObject__DelegateSignature");

	FUWidget_GenerateWidgetForObject__DelegateSignature_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:ForceVolatile
void UWidget::ForceVolatile(bool bForce)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:ForceVolatile");

	FUWidget_ForceVolatile_Params Parms;

	Parms.bForce = bForce;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Widget:ForceLayoutPrepass
void UWidget::ForceLayoutPrepass()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Widget:ForceLayoutPrepass");

	ProcessEvent(FN, nullptr);
}

UClass* UCircularThrobber::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.CircularThrobber");

	return Class;
}

// Function /Script/UMG.CircularThrobber:SetRadius
void UCircularThrobber::SetRadius(float InRadius)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CircularThrobber:SetRadius");

	FUCircularThrobber_SetRadius_Params Parms;

	Parms.InRadius = InRadius;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CircularThrobber:SetPeriod
void UCircularThrobber::SetPeriod(float InPeriod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CircularThrobber:SetPeriod");

	FUCircularThrobber_SetPeriod_Params Parms;

	Parms.InPeriod = InPeriod;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CircularThrobber:SetNumberOfPieces
void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CircularThrobber:SetNumberOfPieces");

	FUCircularThrobber_SetNumberOfPieces_Params Parms;

	Parms.InNumberOfPieces = InNumberOfPieces;

	ProcessEvent(FN, &Parms);
}

UClass* UComboBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ComboBox");

	return Class;
}

UClass* UComboBoxString::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ComboBoxString");

	return Class;
}

// Function /Script/UMG.ComboBoxString:SetSelectedOption
void UComboBoxString::SetSelectedOption(FString Option)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:SetSelectedOption");

	FUComboBoxString_SetSelectedOption_Params Parms;

	Parms.Option = Option;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ComboBoxString:RemoveOption
bool UComboBoxString::RemoveOption(FString Option)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:RemoveOption");

	FUComboBoxString_RemoveOption_Params Parms;

	Parms.Option = Option;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ComboBoxString:RefreshOptions
void UComboBoxString::RefreshOptions()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:RefreshOptions");

	ProcessEvent(FN, nullptr);
}

// DelegateFunction /Script/UMG.ComboBoxString:OnSelectionChangedEvent__DelegateSignature
void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, ESelectInfo SelectionType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:OnSelectionChangedEvent__DelegateSignature");

	FUComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params Parms;

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.ComboBoxString:OnOpeningEvent__DelegateSignature
void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:OnOpeningEvent__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.ComboBoxString:GetSelectedOption
FString UComboBoxString::GetSelectedOption() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:GetSelectedOption");

	FUComboBoxString_GetSelectedOption_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ComboBoxString:GetOptionCount
int32_t UComboBoxString::GetOptionCount() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:GetOptionCount");

	FUComboBoxString_GetOptionCount_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ComboBoxString:GetOptionAtIndex
FString UComboBoxString::GetOptionAtIndex(int32_t INDEX) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:GetOptionAtIndex");

	FUComboBoxString_GetOptionAtIndex_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ComboBoxString:FindOptionIndex
int32_t UComboBoxString::FindOptionIndex(FString Option) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:FindOptionIndex");

	FUComboBoxString_FindOptionIndex_Params Parms;

	Parms.Option = Option;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ComboBoxString:ClearSelection
void UComboBoxString::ClearSelection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:ClearSelection");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.ComboBoxString:ClearOptions
void UComboBoxString::ClearOptions()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:ClearOptions");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.ComboBoxString:AddOption
void UComboBoxString::AddOption(FString Option)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ComboBoxString:AddOption");

	FUComboBoxString_AddOption_Params Parms;

	Parms.Option = Option;

	ProcessEvent(FN, &Parms);
}

UClass* UEditableText::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.EditableText");

	return Class;
}

// Function /Script/UMG.EditableText:SetText
void UEditableText::SetText(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableText:SetText");

	FUEditableText_SetText_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.EditableText:SetIsReadOnly
void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableText:SetIsReadOnly");

	FUEditableText_SetIsReadOnly_Params Parms;

	Parms.InbIsReadyOnly = InbIsReadyOnly;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.EditableText:SetIsPassword
void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableText:SetIsPassword");

	FUEditableText_SetIsPassword_Params Parms;

	Parms.InbIsPassword = InbIsPassword;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.EditableText:SetHintText
void UEditableText::SetHintText(FText InHintText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableText:SetHintText");

	FUEditableText_SetHintText_Params Parms;

	Parms.InHintText = InHintText;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.EditableText:OnEditableTextCommittedEvent__DelegateSignature
void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(FText TEXT, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableText:OnEditableTextCommittedEvent__DelegateSignature");

	FUEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.EditableText:OnEditableTextChangedEvent__DelegateSignature
void UEditableText::OnEditableTextChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableText:OnEditableTextChangedEvent__DelegateSignature");

	FUEditableText_OnEditableTextChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.EditableText:GetText
FText UEditableText::GetText() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableText:GetText");

	FUEditableText_GetText_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UEditableTextBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.EditableTextBox");

	return Class;
}

// Function /Script/UMG.EditableTextBox:SetText
void UEditableTextBox::SetText(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableTextBox:SetText");

	FUEditableTextBox_SetText_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.EditableTextBox:SetError
void UEditableTextBox::SetError(FText InError)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableTextBox:SetError");

	FUEditableTextBox_SetError_Params Parms;

	Parms.InError = InError;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.EditableTextBox:OnEditableTextBoxCommittedEvent__DelegateSignature
void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(FText TEXT, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableTextBox:OnEditableTextBoxCommittedEvent__DelegateSignature");

	FUEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.EditableTextBox:OnEditableTextBoxChangedEvent__DelegateSignature
void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableTextBox:OnEditableTextBoxChangedEvent__DelegateSignature");

	FUEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.EditableTextBox:GetText
FText UEditableTextBox::GetText() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableTextBox:GetText");

	FUEditableTextBox_GetText_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.EditableTextBox:ClearError
void UEditableTextBox::ClearError()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.EditableTextBox:ClearError");

	ProcessEvent(FN, nullptr);
}

UClass* UExpandableArea::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ExpandableArea");

	return Class;
}

// Function /Script/UMG.ExpandableArea:SetIsExpanded
void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ExpandableArea:SetIsExpanded");

	FUExpandableArea_SetIsExpanded_Params Parms;

	Parms.IsExpanded = IsExpanded;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ExpandableArea:GetIsExpanded
bool UExpandableArea::GetIsExpanded() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ExpandableArea:GetIsExpanded");

	FUExpandableArea_GetIsExpanded_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UImage::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Image");

	return Class;
}

// Function /Script/UMG.Image:SetOpacity
void UImage::SetOpacity(float InOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Image:SetOpacity");

	FUImage_SetOpacity_Params Parms;

	Parms.InOpacity = InOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Image:SetColorAndOpacity
void UImage::SetColorAndOpacity(FLinearColor InColorAndOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Image:SetColorAndOpacity");

	FUImage_SetColorAndOpacity_Params Parms;

	Parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Image:SetBrushFromTexture
void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Image:SetBrushFromTexture");

	FUImage_SetBrushFromTexture_Params Parms;

	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Image:SetBrushFromMaterial
void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Image:SetBrushFromMaterial");

	FUImage_SetBrushFromMaterial_Params Parms;

	Parms.Material = Material;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Image:SetBrushFromAsset
void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Image:SetBrushFromAsset");

	FUImage_SetBrushFromAsset_Params Parms;

	Parms.Asset = Asset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Image:SetBrush
void UImage::SetBrush(FSlateBrush InBrush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Image:SetBrush");

	FUImage_SetBrush_Params Parms;

	Parms.InBrush = InBrush;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Image:GetDynamicMaterial
class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Image:GetDynamicMaterial");

	FUImage_GetDynamicMaterial_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UNativeWidgetHost::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.NativeWidgetHost");

	return Class;
}

UClass* UPanelWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.PanelWidget");

	return Class;
}

// Function /Script/UMG.PanelWidget:RemoveChildAt
bool UPanelWidget::RemoveChildAt(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:RemoveChildAt");

	FUPanelWidget_RemoveChildAt_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.PanelWidget:RemoveChild
bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:RemoveChild");

	FUPanelWidget_RemoveChild_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.PanelWidget:HasChild
bool UPanelWidget::HasChild(class UWidget* Content) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:HasChild");

	FUPanelWidget_HasChild_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.PanelWidget:HasAnyChildren
bool UPanelWidget::HasAnyChildren() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:HasAnyChildren");

	FUPanelWidget_HasAnyChildren_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.PanelWidget:GetChildrenCount
int32_t UPanelWidget::GetChildrenCount() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:GetChildrenCount");

	FUPanelWidget_GetChildrenCount_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.PanelWidget:GetChildIndex
int32_t UPanelWidget::GetChildIndex(class UWidget* Content) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:GetChildIndex");

	FUPanelWidget_GetChildIndex_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.PanelWidget:GetChildAt
class UWidget* UPanelWidget::GetChildAt(int32_t INDEX) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:GetChildAt");

	FUPanelWidget_GetChildAt_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.PanelWidget:ClearChildren
void UPanelWidget::ClearChildren()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:ClearChildren");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.PanelWidget:AddChild
class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.PanelWidget:AddChild");

	FUPanelWidget_AddChild_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UCanvasPanel::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.CanvasPanel");

	return Class;
}

// Function /Script/UMG.CanvasPanel:AddChildToCanvas
class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CanvasPanel:AddChildToCanvas");

	FUCanvasPanel_AddChildToCanvas_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UContentWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ContentWidget");

	return Class;
}

// Function /Script/UMG.ContentWidget:GetContentSlot
class UPanelSlot* UContentWidget::GetContentSlot() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ContentWidget:GetContentSlot");

	FUContentWidget_GetContentSlot_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UBorder::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Border");

	return Class;
}

// Function /Script/UMG.Border:SetVerticalAlignment
void UBorder::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetVerticalAlignment");

	FUBorder_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetPadding
void UBorder::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetPadding");

	FUBorder_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetHorizontalAlignment
void UBorder::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetHorizontalAlignment");

	FUBorder_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetContentColorAndOpacity
void UBorder::SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetContentColorAndOpacity");

	FUBorder_SetContentColorAndOpacity_Params Parms;

	Parms.InContentColorAndOpacity = InContentColorAndOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetBrushFromTexture
void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetBrushFromTexture");

	FUBorder_SetBrushFromTexture_Params Parms;

	Parms.Texture = Texture;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetBrushFromMaterial
void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetBrushFromMaterial");

	FUBorder_SetBrushFromMaterial_Params Parms;

	Parms.Material = Material;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetBrushFromAsset
void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetBrushFromAsset");

	FUBorder_SetBrushFromAsset_Params Parms;

	Parms.Asset = Asset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetBrushColor
void UBorder::SetBrushColor(FLinearColor InBrushColor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetBrushColor");

	FUBorder_SetBrushColor_Params Parms;

	Parms.InBrushColor = InBrushColor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:SetBrush
void UBorder::SetBrush(FSlateBrush InBrush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:SetBrush");

	FUBorder_SetBrush_Params Parms;

	Parms.InBrush = InBrush;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Border:GetDynamicMaterial
class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Border:GetDynamicMaterial");

	FUBorder_GetDynamicMaterial_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UButton::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Button");

	return Class;
}

// Function /Script/UMG.Button:SetStyle
void UButton::SetStyle(FButtonStyle InStyle)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Button:SetStyle");

	FUButton_SetStyle_Params Parms;

	Parms.InStyle = InStyle;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Button:SetColorAndOpacity
void UButton::SetColorAndOpacity(FLinearColor InColorAndOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Button:SetColorAndOpacity");

	FUButton_SetColorAndOpacity_Params Parms;

	Parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Button:SetBackgroundColor
void UButton::SetBackgroundColor(FLinearColor InBackgroundColor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Button:SetBackgroundColor");

	FUButton_SetBackgroundColor_Params Parms;

	Parms.InBackgroundColor = InBackgroundColor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Button:IsPressed
bool UButton::IsPressed() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Button:IsPressed");

	FUButton_IsPressed_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UCheckBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.CheckBox");

	return Class;
}

// Function /Script/UMG.CheckBox:SetIsChecked
void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CheckBox:SetIsChecked");

	FUCheckBox_SetIsChecked_Params Parms;

	Parms.InIsChecked = InIsChecked;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CheckBox:SetCheckedState
void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CheckBox:SetCheckedState");

	FUCheckBox_SetCheckedState_Params Parms;

	Parms.InCheckedState = InCheckedState;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CheckBox:IsPressed
bool UCheckBox::IsPressed() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CheckBox:IsPressed");

	FUCheckBox_IsPressed_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CheckBox:IsChecked
bool UCheckBox::IsChecked() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CheckBox:IsChecked");

	FUCheckBox_IsChecked_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.CheckBox:GetCheckedState
ECheckBoxState UCheckBox::GetCheckedState() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.CheckBox:GetCheckedState");

	FUCheckBox_GetCheckedState_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UInvalidationBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.InvalidationBox");

	return Class;
}

// Function /Script/UMG.InvalidationBox:SetCanCache
void UInvalidationBox::SetCanCache(bool CanCache)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.InvalidationBox:SetCanCache");

	FUInvalidationBox_SetCanCache_Params Parms;

	Parms.CanCache = CanCache;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.InvalidationBox:InvalidateCache
void UInvalidationBox::InvalidateCache()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.InvalidationBox:InvalidateCache");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.InvalidationBox:GetCanCache
bool UInvalidationBox::GetCanCache() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.InvalidationBox:GetCanCache");

	FUInvalidationBox_GetCanCache_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UMenuAnchor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MenuAnchor");

	return Class;
}

// Function /Script/UMG.MenuAnchor:ToggleOpen
void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MenuAnchor:ToggleOpen");

	FUMenuAnchor_ToggleOpen_Params Parms;

	Parms.bFocusOnOpen = bFocusOnOpen;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MenuAnchor:ShouldOpenDueToClick
bool UMenuAnchor::ShouldOpenDueToClick() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MenuAnchor:ShouldOpenDueToClick");

	FUMenuAnchor_ShouldOpenDueToClick_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MenuAnchor:Open
void UMenuAnchor::Open(bool bFocusMenu)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MenuAnchor:Open");

	FUMenuAnchor_Open_Params Parms;

	Parms.bFocusMenu = bFocusMenu;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MenuAnchor:IsOpen
bool UMenuAnchor::IsOpen() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MenuAnchor:IsOpen");

	FUMenuAnchor_IsOpen_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MenuAnchor:HasOpenSubMenus
bool UMenuAnchor::HasOpenSubMenus() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MenuAnchor:HasOpenSubMenus");

	FUMenuAnchor_HasOpenSubMenus_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MenuAnchor:GetMenuPosition
FVector2D UMenuAnchor::GetMenuPosition() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MenuAnchor:GetMenuPosition");

	FUMenuAnchor_GetMenuPosition_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MenuAnchor:Close
void UMenuAnchor::Close()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MenuAnchor:Close");

	ProcessEvent(FN, nullptr);
}

UClass* UNamedSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.NamedSlot");

	return Class;
}

UClass* URetainerBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.RetainerBox");

	return Class;
}

// Function /Script/UMG.RetainerBox:SetTextureParameter
void URetainerBox::SetTextureParameter(FName TextureParameter)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.RetainerBox:SetTextureParameter");

	FURetainerBox_SetTextureParameter_Params Parms;

	Parms.TextureParameter = TextureParameter;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.RetainerBox:SetEffectMaterial
void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.RetainerBox:SetEffectMaterial");

	FURetainerBox_SetEffectMaterial_Params Parms;

	Parms.EffectMaterial = EffectMaterial;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.RetainerBox:GetEffectMaterial
class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.RetainerBox:GetEffectMaterial");

	FURetainerBox_GetEffectMaterial_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* USafeZone::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SafeZone");

	return Class;
}

UClass* UScaleBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ScaleBox");

	return Class;
}

UClass* USizeBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SizeBox");

	return Class;
}

// Function /Script/UMG.SizeBox:SetWidthOverride
void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:SetWidthOverride");

	FUSizeBox_SetWidthOverride_Params Parms;

	Parms.InWidthOverride = InWidthOverride;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBox:SetMinDesiredWidth
void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:SetMinDesiredWidth");

	FUSizeBox_SetMinDesiredWidth_Params Parms;

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBox:SetMinDesiredHeight
void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:SetMinDesiredHeight");

	FUSizeBox_SetMinDesiredHeight_Params Parms;

	Parms.InMinDesiredHeight = InMinDesiredHeight;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBox:SetMaxDesiredWidth
void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:SetMaxDesiredWidth");

	FUSizeBox_SetMaxDesiredWidth_Params Parms;

	Parms.InMaxDesiredWidth = InMaxDesiredWidth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBox:SetMaxDesiredHeight
void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:SetMaxDesiredHeight");

	FUSizeBox_SetMaxDesiredHeight_Params Parms;

	Parms.InMaxDesiredHeight = InMaxDesiredHeight;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBox:SetHeightOverride
void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:SetHeightOverride");

	FUSizeBox_SetHeightOverride_Params Parms;

	Parms.InHeightOverride = InHeightOverride;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SizeBox:ClearWidthOverride
void USizeBox::ClearWidthOverride()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:ClearWidthOverride");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SizeBox:ClearMinDesiredWidth
void USizeBox::ClearMinDesiredWidth()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:ClearMinDesiredWidth");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SizeBox:ClearMinDesiredHeight
void USizeBox::ClearMinDesiredHeight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:ClearMinDesiredHeight");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SizeBox:ClearMaxDesiredWidth
void USizeBox::ClearMaxDesiredWidth()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:ClearMaxDesiredWidth");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SizeBox:ClearMaxDesiredHeight
void USizeBox::ClearMaxDesiredHeight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:ClearMaxDesiredHeight");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SizeBox:ClearHeightOverride
void USizeBox::ClearHeightOverride()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SizeBox:ClearHeightOverride");

	ProcessEvent(FN, nullptr);
}

UClass* UViewport::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Viewport");

	return Class;
}

// Function /Script/UMG.Viewport:Spawn
class AActor* UViewport::Spawn(class UClass* ActorClass)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Viewport:Spawn");

	FUViewport_Spawn_Params Parms;

	Parms.ActorClass = ActorClass;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Viewport:SetViewRotation
void UViewport::SetViewRotation(FRotator Rotation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Viewport:SetViewRotation");

	FUViewport_SetViewRotation_Params Parms;

	Parms.Rotation = Rotation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Viewport:SetViewLocation
void UViewport::SetViewLocation(FVector Location)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Viewport:SetViewLocation");

	FUViewport_SetViewLocation_Params Parms;

	Parms.Location = Location;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Viewport:GetViewRotation
FRotator UViewport::GetViewRotation() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Viewport:GetViewRotation");

	FUViewport_GetViewRotation_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Viewport:GetViewportWorld
class UWorld* UViewport::GetViewportWorld() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Viewport:GetViewportWorld");

	FUViewport_GetViewportWorld_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Viewport:GetViewLocation
FVector UViewport::GetViewLocation() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Viewport:GetViewLocation");

	FUViewport_GetViewLocation_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UGridPanel::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.GridPanel");

	return Class;
}

// Function /Script/UMG.GridPanel:AddChildToGrid
class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.GridPanel:AddChildToGrid");

	FUGridPanel_AddChildToGrid_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UHorizontalBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.HorizontalBox");

	return Class;
}

// Function /Script/UMG.HorizontalBox:AddChildToHorizontalBox
class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.HorizontalBox:AddChildToHorizontalBox");

	FUHorizontalBox_AddChildToHorizontalBox_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UOverlay::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Overlay");

	return Class;
}

// Function /Script/UMG.Overlay:AddChildToOverlay
class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Overlay:AddChildToOverlay");

	FUOverlay_AddChildToOverlay_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UScrollBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ScrollBox");

	return Class;
}

// Function /Script/UMG.ScrollBox:SetScrollOffset
void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBox:SetScrollOffset");

	FUScrollBox_SetScrollOffset_Params Parms;

	Parms.NewScrollOffset = NewScrollOffset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ScrollBox:ScrollWidgetIntoView
void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBox:ScrollWidgetIntoView");

	FUScrollBox_ScrollWidgetIntoView_Params Parms;

	Parms.WidgetToFind = WidgetToFind;
	Parms.AnimateScroll = AnimateScroll;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ScrollBox:ScrollToStart
void UScrollBox::ScrollToStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBox:ScrollToStart");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.ScrollBox:ScrollToEnd
void UScrollBox::ScrollToEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBox:ScrollToEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.ScrollBox:GetScrollOffset
float UScrollBox::GetScrollOffset() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBox:GetScrollOffset");

	FUScrollBox_GetScrollOffset_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UUniformGridPanel::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.UniformGridPanel");

	return Class;
}

// Function /Script/UMG.UniformGridPanel:SetSlotPadding
void UUniformGridPanel::SetSlotPadding(FMargin InSlotPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridPanel:SetSlotPadding");

	FUUniformGridPanel_SetSlotPadding_Params Parms;

	Parms.InSlotPadding = InSlotPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UniformGridPanel:SetMinDesiredSlotWidth
void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridPanel:SetMinDesiredSlotWidth");

	FUUniformGridPanel_SetMinDesiredSlotWidth_Params Parms;

	Parms.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UniformGridPanel:SetMinDesiredSlotHeight
void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridPanel:SetMinDesiredSlotHeight");

	FUUniformGridPanel_SetMinDesiredSlotHeight_Params Parms;

	Parms.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UniformGridPanel:AddChildToUniformGrid
class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UniformGridPanel:AddChildToUniformGrid");

	FUUniformGridPanel_AddChildToUniformGrid_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UVerticalBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.VerticalBox");

	return Class;
}

// Function /Script/UMG.VerticalBox:AddChildToVerticalBox
class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.VerticalBox:AddChildToVerticalBox");

	FUVerticalBox_AddChildToVerticalBox_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UWidgetSwitcher::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetSwitcher");

	return Class;
}

// Function /Script/UMG.WidgetSwitcher:SetActiveWidgetIndex
void UWidgetSwitcher::SetActiveWidgetIndex(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcher:SetActiveWidgetIndex");

	FUWidgetSwitcher_SetActiveWidgetIndex_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetSwitcher:SetActiveWidget
void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcher:SetActiveWidget");

	FUWidgetSwitcher_SetActiveWidget_Params Parms;

	Parms.Widget = Widget;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetSwitcher:GetWidgetAtIndex
class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32_t INDEX) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcher:GetWidgetAtIndex");

	FUWidgetSwitcher_GetWidgetAtIndex_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetSwitcher:GetNumWidgets
int32_t UWidgetSwitcher::GetNumWidgets() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcher:GetNumWidgets");

	FUWidgetSwitcher_GetNumWidgets_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetSwitcher:GetActiveWidgetIndex
int32_t UWidgetSwitcher::GetActiveWidgetIndex() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetSwitcher:GetActiveWidgetIndex");

	FUWidgetSwitcher_GetActiveWidgetIndex_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UWrapBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WrapBox");

	return Class;
}

// Function /Script/UMG.WrapBox:SetInnerSlotPadding
void UWrapBox::SetInnerSlotPadding(FVector2D InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WrapBox:SetInnerSlotPadding");

	FUWrapBox_SetInnerSlotPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WrapBox:AddChildWrapBox
class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget* Content)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WrapBox:AddChildWrapBox");

	FUWrapBox_AddChildWrapBox_Params Parms;

	Parms.Content = Content;

	ProcessEvent(FN, &Parms);
}

UClass* UProgressBar::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ProgressBar");

	return Class;
}

// Function /Script/UMG.ProgressBar:SetPercent
void UProgressBar::SetPercent(float InPercent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ProgressBar:SetPercent");

	FUProgressBar_SetPercent_Params Parms;

	Parms.InPercent = InPercent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ProgressBar:SetIsMarquee
void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ProgressBar:SetIsMarquee");

	FUProgressBar_SetIsMarquee_Params Parms;

	Parms.InbIsMarquee = InbIsMarquee;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.ProgressBar:SetFillColorAndOpacity
void UProgressBar::SetFillColorAndOpacity(FLinearColor InColor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ProgressBar:SetFillColorAndOpacity");

	FUProgressBar_SetFillColorAndOpacity_Params Parms;

	Parms.InColor = InColor;

	ProcessEvent(FN, &Parms);
}

UClass* UScrollBar::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ScrollBar");

	return Class;
}

// Function /Script/UMG.ScrollBar:SetState
void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.ScrollBar:SetState");

	FUScrollBar_SetState_Params Parms;

	Parms.InOffsetFraction = InOffsetFraction;
	Parms.InThumbSizeFraction = InThumbSizeFraction;

	ProcessEvent(FN, &Parms);
}

UClass* USlider::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Slider");

	return Class;
}

// Function /Script/UMG.Slider:SetValue
void USlider::SetValue(float InValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Slider:SetValue");

	FUSlider_SetValue_Params Parms;

	Parms.InValue = InValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Slider:SetStepSize
void USlider::SetStepSize(float InValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Slider:SetStepSize");

	FUSlider_SetStepSize_Params Parms;

	Parms.InValue = InValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Slider:SetSliderHandleColor
void USlider::SetSliderHandleColor(FLinearColor InValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Slider:SetSliderHandleColor");

	FUSlider_SetSliderHandleColor_Params Parms;

	Parms.InValue = InValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Slider:SetSliderBarColor
void USlider::SetSliderBarColor(FLinearColor InValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Slider:SetSliderBarColor");

	FUSlider_SetSliderBarColor_Params Parms;

	Parms.InValue = InValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Slider:SetLocked
void USlider::SetLocked(bool InValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Slider:SetLocked");

	FUSlider_SetLocked_Params Parms;

	Parms.InValue = InValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Slider:SetIndentHandle
void USlider::SetIndentHandle(bool InValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Slider:SetIndentHandle");

	FUSlider_SetIndentHandle_Params Parms;

	Parms.InValue = InValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Slider:GetValue
float USlider::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Slider:GetValue");

	FUSlider_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* USpacer::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Spacer");

	return Class;
}

// Function /Script/UMG.Spacer:SetSize
void USpacer::SetSize(FVector2D InSize)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Spacer:SetSize");

	FUSpacer_SetSize_Params Parms;

	Parms.InSize = InSize;

	ProcessEvent(FN, &Parms);
}

UClass* USpinBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.SpinBox");

	return Class;
}

// Function /Script/UMG.SpinBox:SetValue
void USpinBox::SetValue(float NewValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:SetValue");

	FUSpinBox_SetValue_Params Parms;

	Parms.NewValue = NewValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:SetMinValue
void USpinBox::SetMinValue(float NewValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:SetMinValue");

	FUSpinBox_SetMinValue_Params Parms;

	Parms.NewValue = NewValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:SetMinSliderValue
void USpinBox::SetMinSliderValue(float NewValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:SetMinSliderValue");

	FUSpinBox_SetMinSliderValue_Params Parms;

	Parms.NewValue = NewValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:SetMaxValue
void USpinBox::SetMaxValue(float NewValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:SetMaxValue");

	FUSpinBox_SetMaxValue_Params Parms;

	Parms.NewValue = NewValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:SetMaxSliderValue
void USpinBox::SetMaxSliderValue(float NewValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:SetMaxSliderValue");

	FUSpinBox_SetMaxSliderValue_Params Parms;

	Parms.NewValue = NewValue;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:SetForegroundColor
void USpinBox::SetForegroundColor(FSlateColor InForegroundColor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:SetForegroundColor");

	FUSpinBox_SetForegroundColor_Params Parms;

	Parms.InForegroundColor = InForegroundColor;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.SpinBox:OnSpinBoxValueCommittedEvent__DelegateSignature
void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:OnSpinBoxValueCommittedEvent__DelegateSignature");

	FUSpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms;

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.SpinBox:OnSpinBoxValueChangedEvent__DelegateSignature
void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:OnSpinBoxValueChangedEvent__DelegateSignature");

	FUSpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms;

	Parms.InValue = InValue;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.SpinBox:OnSpinBoxBeginSliderMovement__DelegateSignature
void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:OnSpinBoxBeginSliderMovement__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SpinBox:GetValue
float USpinBox::GetValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:GetValue");

	FUSpinBox_GetValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:GetMinValue
float USpinBox::GetMinValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:GetMinValue");

	FUSpinBox_GetMinValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:GetMinSliderValue
float USpinBox::GetMinSliderValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:GetMinSliderValue");

	FUSpinBox_GetMinSliderValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:GetMaxValue
float USpinBox::GetMaxValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:GetMaxValue");

	FUSpinBox_GetMaxValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:GetMaxSliderValue
float USpinBox::GetMaxSliderValue() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:GetMaxSliderValue");

	FUSpinBox_GetMaxSliderValue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.SpinBox:ClearMinValue
void USpinBox::ClearMinValue()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:ClearMinValue");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SpinBox:ClearMinSliderValue
void USpinBox::ClearMinSliderValue()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:ClearMinSliderValue");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SpinBox:ClearMaxValue
void USpinBox::ClearMaxValue()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:ClearMaxValue");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.SpinBox:ClearMaxSliderValue
void USpinBox::ClearMaxSliderValue()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.SpinBox:ClearMaxSliderValue");

	ProcessEvent(FN, nullptr);
}

UClass* UTableViewBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.TableViewBase");

	return Class;
}

// DelegateFunction /Script/UMG.TableViewBase:OnGenerateRowUObject__DelegateSignature
class UWidget* UTableViewBase::OnGenerateRowUObject__DelegateSignature(class UObject* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TableViewBase:OnGenerateRowUObject__DelegateSignature");

	FUTableViewBase_OnGenerateRowUObject__DelegateSignature_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

UClass* UListView::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.ListView");

	return Class;
}

UClass* UTileView::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.TileView");

	return Class;
}

// Function /Script/UMG.TileView:SetItemWidth
void UTileView::SetItemWidth(float Width)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TileView:SetItemWidth");

	FUTileView_SetItemWidth_Params Parms;

	Parms.Width = Width;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TileView:SetItemHeight
void UTileView::SetItemHeight(float Height)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TileView:SetItemHeight");

	FUTileView_SetItemHeight_Params Parms;

	Parms.Height = Height;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TileView:RequestListRefresh
void UTileView::RequestListRefresh()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TileView:RequestListRefresh");

	ProcessEvent(FN, nullptr);
}

UClass* UTextLayoutWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.TextLayoutWidget");

	return Class;
}

UClass* UMultiLineEditableText::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MultiLineEditableText");

	return Class;
}

// Function /Script/UMG.MultiLineEditableText:SetText
void UMultiLineEditableText::SetText(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableText:SetText");

	FUMultiLineEditableText_SetText_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.MultiLineEditableText:OnMultiLineEditableTextCommittedEvent__DelegateSignature
void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText TEXT, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableText:OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	FUMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.MultiLineEditableText:OnMultiLineEditableTextChangedEvent__DelegateSignature
void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableText:OnMultiLineEditableTextChangedEvent__DelegateSignature");

	FUMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MultiLineEditableText:GetText
FText UMultiLineEditableText::GetText() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableText:GetText");

	FUMultiLineEditableText_GetText_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UMultiLineEditableTextBox::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.MultiLineEditableTextBox");

	return Class;
}

// Function /Script/UMG.MultiLineEditableTextBox:SetText
void UMultiLineEditableTextBox::SetText(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableTextBox:SetText");

	FUMultiLineEditableTextBox_SetText_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MultiLineEditableTextBox:SetError
void UMultiLineEditableTextBox::SetError(FText InError)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableTextBox:SetError");

	FUMultiLineEditableTextBox_SetError_Params Parms;

	Parms.InError = InError;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.MultiLineEditableTextBox:OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText TEXT, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableTextBox:OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	FUMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/UMG.MultiLineEditableTextBox:OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableTextBox:OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	FUMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.MultiLineEditableTextBox:GetText
FText UMultiLineEditableTextBox::GetText() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.MultiLineEditableTextBox:GetText");

	FUMultiLineEditableTextBox_GetText_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* URichTextBlock::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.RichTextBlock");

	return Class;
}

UClass* UTextBlock::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.TextBlock");

	return Class;
}

// Function /Script/UMG.TextBlock:SetText
void UTextBlock::SetText(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:SetText");

	FUTextBlock_SetText_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBlock:SetShadowOffset
void UTextBlock::SetShadowOffset(FVector2D InShadowOffset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:SetShadowOffset");

	FUTextBlock_SetShadowOffset_Params Parms;

	Parms.InShadowOffset = InShadowOffset;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBlock:SetShadowColorAndOpacity
void UTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:SetShadowColorAndOpacity");

	FUTextBlock_SetShadowColorAndOpacity_Params Parms;

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBlock:SetOpacity
void UTextBlock::SetOpacity(float InOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:SetOpacity");

	FUTextBlock_SetOpacity_Params Parms;

	Parms.InOpacity = InOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBlock:SetJustification
void UTextBlock::SetJustification(ETextJustify InJustification)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:SetJustification");

	FUTextBlock_SetJustification_Params Parms;

	Parms.InJustification = InJustification;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBlock:SetFont
void UTextBlock::SetFont(FSlateFontInfo InFontInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:SetFont");

	FUTextBlock_SetFont_Params Parms;

	Parms.InFontInfo = InFontInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBlock:SetColorAndOpacity
void UTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:SetColorAndOpacity");

	FUTextBlock_SetColorAndOpacity_Params Parms;

	Parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.TextBlock:GetText
FText UTextBlock::GetText() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.TextBlock:GetText");

	FUTextBlock_GetText_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UThrobber::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.Throbber");

	return Class;
}

// Function /Script/UMG.Throbber:SetNumberOfPieces
void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Throbber:SetNumberOfPieces");

	FUThrobber_SetNumberOfPieces_Params Parms;

	Parms.InNumberOfPieces = InNumberOfPieces;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Throbber:SetAnimateVertically
void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Throbber:SetAnimateVertically");

	FUThrobber_SetAnimateVertically_Params Parms;

	Parms.bInAnimateVertically = bInAnimateVertically;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Throbber:SetAnimateOpacity
void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Throbber:SetAnimateOpacity");

	FUThrobber_SetAnimateOpacity_Params Parms;

	Parms.bInAnimateOpacity = bInAnimateOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.Throbber:SetAnimateHorizontally
void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.Throbber:SetAnimateHorizontally");

	FUThrobber_SetAnimateHorizontally_Params Parms;

	Parms.bInAnimateHorizontally = bInAnimateHorizontally;

	ProcessEvent(FN, &Parms);
}

UClass* UUserWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.UserWidget");

	return Class;
}

// Function /Script/UMG.UserWidget:Tick
void UUserWidget::Tick(FGeometry MyGeometry, float InDeltaTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:Tick");

	FUUserWidget_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:StopListeningForInputAction
void UUserWidget::StopListeningForInputAction(FName ActionName, EInputEvent EventType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:StopListeningForInputAction");

	FUUserWidget_StopListeningForInputAction_Params Parms;

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:StopListeningForAllInputActions
void UUserWidget::StopListeningForAllInputActions()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:StopListeningForAllInputActions");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.UserWidget:StopAnimation
void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:StopAnimation");

	FUUserWidget_StopAnimation_Params Parms;

	Parms.InAnimation = InAnimation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetPositionInViewport
void UUserWidget::SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetPositionInViewport");

	FUUserWidget_SetPositionInViewport_Params Parms;

	Parms.Position = Position;
	Parms.bRemoveDPIScale = bRemoveDPIScale;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetPadding
void UUserWidget::SetPadding(FMargin InPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetPadding");

	FUUserWidget_SetPadding_Params Parms;

	Parms.InPadding = InPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetOwningLocalPlayer
void UUserWidget::SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetOwningLocalPlayer");

	FUUserWidget_SetOwningLocalPlayer_Params Parms;

	Parms.LocalPlayer = LocalPlayer;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetNumLoopsToPlay
void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetNumLoopsToPlay");

	FUUserWidget_SetNumLoopsToPlay_Params Parms;

	Parms.InAnimation = InAnimation;
	Parms.NumLoopsToPlay = NumLoopsToPlay;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetInputActionPriority
void UUserWidget::SetInputActionPriority(int32_t NewPriority)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetInputActionPriority");

	FUUserWidget_SetInputActionPriority_Params Parms;

	Parms.NewPriority = NewPriority;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetInputActionBlocking
void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetInputActionBlocking");

	FUUserWidget_SetInputActionBlocking_Params Parms;

	Parms.bShouldBlock = bShouldBlock;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetForegroundColor
void UUserWidget::SetForegroundColor(FSlateColor InForegroundColor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetForegroundColor");

	FUUserWidget_SetForegroundColor_Params Parms;

	Parms.InForegroundColor = InForegroundColor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetDesiredSizeInViewport
void UUserWidget::SetDesiredSizeInViewport(FVector2D Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetDesiredSizeInViewport");

	FUUserWidget_SetDesiredSizeInViewport_Params Parms;

	Parms.Size = Size;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetColorAndOpacity
void UUserWidget::SetColorAndOpacity(FLinearColor InColorAndOpacity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetColorAndOpacity");

	FUUserWidget_SetColorAndOpacity_Params Parms;

	Parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetAnchorsInViewport
void UUserWidget::SetAnchorsInViewport(FAnchors Anchors)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetAnchorsInViewport");

	FUUserWidget_SetAnchorsInViewport_Params Parms;

	Parms.Anchors = Anchors;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:SetAlignmentInViewport
void UUserWidget::SetAlignmentInViewport(FVector2D Alignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:SetAlignmentInViewport");

	FUUserWidget_SetAlignmentInViewport_Params Parms;

	Parms.Alignment = Alignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:RemoveFromViewport
void UUserWidget::RemoveFromViewport()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:RemoveFromViewport");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.UserWidget:PlaySound
void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:PlaySound");

	FUUserWidget_PlaySound_Params Parms;

	Parms.SoundToPlay = SoundToPlay;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:PlayAnimation
void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:PlayAnimation");

	FUUserWidget_PlayAnimation_Params Parms;

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:PauseAnimation
float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:PauseAnimation");

	FUUserWidget_PauseAnimation_Params Parms;

	Parms.InAnimation = InAnimation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnTouchStarted
FEventReply UUserWidget::OnTouchStarted(FGeometry MyGeometry, FPointerEvent InTouchEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnTouchStarted");

	FUUserWidget_OnTouchStarted_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnTouchMoved
FEventReply UUserWidget::OnTouchMoved(FGeometry MyGeometry, FPointerEvent InTouchEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnTouchMoved");

	FUUserWidget_OnTouchMoved_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnTouchGesture
FEventReply UUserWidget::OnTouchGesture(FGeometry MyGeometry, FPointerEvent GestureEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnTouchGesture");

	FUUserWidget_OnTouchGesture_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.GestureEvent = GestureEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnTouchEnded
FEventReply UUserWidget::OnTouchEnded(FGeometry MyGeometry, FPointerEvent InTouchEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnTouchEnded");

	FUUserWidget_OnTouchEnded_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnPreviewMouseButtonDown
FEventReply UUserWidget::OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnPreviewMouseButtonDown");

	FUUserWidget_OnPreviewMouseButtonDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnPreviewKeyDown
FEventReply UUserWidget::OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnPreviewKeyDown");

	FUUserWidget_OnPreviewKeyDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnPaint
void UUserWidget::OnPaint(FPaintContext Context) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnPaint");

	FUUserWidget_OnPaint_Params Parms;

	Parms.Context = Context;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMouseWheel
FEventReply UUserWidget::OnMouseWheel(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMouseWheel");

	FUUserWidget_OnMouseWheel_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMouseMove
FEventReply UUserWidget::OnMouseMove(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMouseMove");

	FUUserWidget_OnMouseMove_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMouseLeave
void UUserWidget::OnMouseLeave(FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMouseLeave");

	FUUserWidget_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMouseEnter
void UUserWidget::OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMouseEnter");

	FUUserWidget_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMouseButtonUp
FEventReply UUserWidget::OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMouseButtonUp");

	FUUserWidget_OnMouseButtonUp_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMouseButtonDown
FEventReply UUserWidget::OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMouseButtonDown");

	FUUserWidget_OnMouseButtonDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMouseButtonDoubleClick
FEventReply UUserWidget::OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent InMouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMouseButtonDoubleClick");

	FUUserWidget_OnMouseButtonDoubleClick_Params Parms;

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnMotionDetected
FEventReply UUserWidget::OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnMotionDetected");

	FUUserWidget_OnMotionDetected_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InMotionEvent = InMotionEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnKeyUp
FEventReply UUserWidget::OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnKeyUp");

	FUUserWidget_OnKeyUp_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnKeyDown
FEventReply UUserWidget::OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnKeyDown");

	FUUserWidget_OnKeyDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnKeyChar
FEventReply UUserWidget::OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnKeyChar");

	FUUserWidget_OnKeyChar_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InCharacterEvent = InCharacterEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnFocusReceived
FEventReply UUserWidget::OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnFocusReceived");

	FUUserWidget_OnFocusReceived_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnFocusLost
void UUserWidget::OnFocusLost(FFocusEvent InFocusEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnFocusLost");

	FUUserWidget_OnFocusLost_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnDrop
bool UUserWidget::OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnDrop");

	FUUserWidget_OnDrop_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnDragOver
bool UUserWidget::OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnDragOver");

	FUUserWidget_OnDragOver_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnDragLeave
void UUserWidget::OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnDragLeave");

	FUUserWidget_OnDragLeave_Params Parms;

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnDragEnter
void UUserWidget::OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnDragEnter");

	FUUserWidget_OnDragEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnDragDetected
void UUserWidget::OnDragDetected(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnDragDetected");

	FUUserWidget_OnDragDetected_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnDragCancelled
void UUserWidget::OnDragCancelled(FPointerEvent PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnDragCancelled");

	FUUserWidget_OnDragCancelled_Params Parms;

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnControllerButtonReleased
FEventReply UUserWidget::OnControllerButtonReleased(FGeometry MyGeometry, FControllerEvent ControllerEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnControllerButtonReleased");

	FUUserWidget_OnControllerButtonReleased_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.ControllerEvent = ControllerEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnControllerButtonPressed
FEventReply UUserWidget::OnControllerButtonPressed(FGeometry MyGeometry, FControllerEvent ControllerEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnControllerButtonPressed");

	FUUserWidget_OnControllerButtonPressed_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.ControllerEvent = ControllerEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnControllerAnalogValueChanged
FEventReply UUserWidget::OnControllerAnalogValueChanged(FGeometry MyGeometry, FControllerEvent ControllerEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnControllerAnalogValueChanged");

	FUUserWidget_OnControllerAnalogValueChanged_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.ControllerEvent = ControllerEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnAnimationStarted
void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnAnimationStarted");

	FUUserWidget_OnAnimationStarted_Params Parms;

	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnAnimationFinished
void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnAnimationFinished");

	FUUserWidget_OnAnimationFinished_Params Parms;

	Parms.Animation = Animation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:OnAnalogValueChanged
FEventReply UUserWidget::OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:OnAnalogValueChanged");

	FUUserWidget_OnAnalogValueChanged_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:ListenForInputAction
void UUserWidget::ListenForInputAction(FName ActionName, EInputEvent EventType, bool bConsume, struct FUMG_OnInputAction__DelegateSignature Callback)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:ListenForInputAction");

	FUUserWidget_ListenForInputAction_Params Parms;

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;
	Parms.bConsume = bConsume;
	Parms.Callback = Callback;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:IsPlayingAnimation
bool UUserWidget::IsPlayingAnimation() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:IsPlayingAnimation");

	FUUserWidget_IsPlayingAnimation_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:IsListeningForInputAction
bool UUserWidget::IsListeningForInputAction(FName ActionName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:IsListeningForInputAction");

	FUUserWidget_IsListeningForInputAction_Params Parms;

	Parms.ActionName = ActionName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:IsInViewport
bool UUserWidget::IsInViewport() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:IsInViewport");

	FUUserWidget_IsInViewport_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:IsInteractable
bool UUserWidget::IsInteractable() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:IsInteractable");

	FUUserWidget_IsInteractable_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:IsAnimationPlaying
bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:IsAnimationPlaying");

	FUUserWidget_IsAnimationPlaying_Params Parms;

	Parms.InAnimation = InAnimation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:GetOwningPlayerPawn
class APawn* UUserWidget::GetOwningPlayerPawn() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:GetOwningPlayerPawn");

	FUUserWidget_GetOwningPlayerPawn_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:GetOwningPlayer
class APlayerController* UUserWidget::GetOwningPlayer() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:GetOwningPlayer");

	FUUserWidget_GetOwningPlayer_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:GetOwningLocalPlayer
class ULocalPlayer* UUserWidget::GetOwningLocalPlayer() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:GetOwningLocalPlayer");

	FUUserWidget_GetOwningLocalPlayer_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:GetIsVisible
bool UUserWidget::GetIsVisible() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:GetIsVisible");

	FUUserWidget_GetIsVisible_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:Destruct
void UUserWidget::Destruct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:Destruct");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.UserWidget:Construct
void UUserWidget::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.UserWidget:AddToViewport
void UUserWidget::AddToViewport(int32_t ZOrder)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:AddToViewport");

	FUUserWidget_AddToViewport_Params Parms;

	Parms.ZOrder = ZOrder;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.UserWidget:AddToPlayerScreen
bool UUserWidget::AddToPlayerScreen(int32_t ZOrder)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.UserWidget:AddToPlayerScreen");

	FUUserWidget_AddToPlayerScreen_Params Parms;

	Parms.ZOrder = ZOrder;

	ProcessEvent(FN, &Parms);
}

UClass* UWidgetTree::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetTree");

	return Class;
}

UClass* UWidgetAnimation::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetAnimation");

	return Class;
}

// Function /Script/UMG.WidgetAnimation:GetStartTime
float UWidgetAnimation::GetStartTime() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetAnimation:GetStartTime");

	FUWidgetAnimation_GetStartTime_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetAnimation:GetEndTime
float UWidgetAnimation::GetEndTime() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetAnimation:GetEndTime");

	FUWidgetAnimation_GetEndTime_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UWidgetBlueprintGeneratedClass::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetBlueprintGeneratedClass");

	return Class;
}

UClass* UWidgetBlueprintLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetBlueprintLibrary");

	return Class;
}

// Function /Script/UMG.WidgetBlueprintLibrary:UnlockMouse
FEventReply UWidgetBlueprintLibrary::UnlockMouse(FEventReply Reply)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:UnlockMouse");

	FUWidgetBlueprintLibrary_UnlockMouse_Params Parms;

	Parms.Reply = Reply;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:Unhandled
FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:Unhandled");

	FUWidgetBlueprintLibrary_Unhandled_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetUserFocus
FEventReply UWidgetBlueprintLibrary::SetUserFocus(FEventReply Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetUserFocus");

	FUWidgetBlueprintLibrary_SetUserFocus_Params Parms;

	Parms.Reply = Reply;
	Parms.FocusWidget = FocusWidget;
	Parms.bInAllUsers = bInAllUsers;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetMousePosition
FEventReply UWidgetBlueprintLibrary::SetMousePosition(FEventReply Reply, FVector2D NewMousePosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetMousePosition");

	FUWidgetBlueprintLibrary_SetMousePosition_Params Parms;

	Parms.Reply = Reply;
	Parms.NewMousePosition = NewMousePosition;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetInputMode_UIOnly
void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetInputMode_UIOnly");

	FUWidgetBlueprintLibrary_SetInputMode_UIOnly_Params Parms;

	Parms.Target = Target;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.bLockMouseToViewport = bLockMouseToViewport;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetInputMode_GameOnly
void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* Target)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetInputMode_GameOnly");

	FUWidgetBlueprintLibrary_SetInputMode_GameOnly_Params Parms;

	Parms.Target = Target;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetInputMode_GameAndUI
void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetInputMode_GameAndUI");

	FUWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params Parms;

	Parms.Target = Target;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.bLockMouseToViewport = bLockMouseToViewport;
	Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetFocusToGameViewport
void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetFocusToGameViewport");

	StaticClass()->ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetBrushResourceToTexture
void UWidgetBlueprintLibrary::SetBrushResourceToTexture(FSlateBrush Brush, class UTexture2D* Texture)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetBrushResourceToTexture");

	FUWidgetBlueprintLibrary_SetBrushResourceToTexture_Params Parms;

	Parms.Brush = Brush;
	Parms.Texture = Texture;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:SetBrushResourceToMaterial
void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(FSlateBrush Brush, class UMaterialInterface* Material)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:SetBrushResourceToMaterial");

	FUWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params Parms;

	Parms.Brush = Brush;
	Parms.Material = Material;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:ReleaseMouseCapture
FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(FEventReply Reply)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:ReleaseMouseCapture");

	FUWidgetBlueprintLibrary_ReleaseMouseCapture_Params Parms;

	Parms.Reply = Reply;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:ReleaseJoystickCapture
FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(FEventReply Reply, bool bInAllJoysticks)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:ReleaseJoystickCapture");

	FUWidgetBlueprintLibrary_ReleaseJoystickCapture_Params Parms;

	Parms.Reply = Reply;
	Parms.bInAllJoysticks = bInAllJoysticks;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:NoResourceBrush
FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:NoResourceBrush");

	FUWidgetBlueprintLibrary_NoResourceBrush_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:MakeBrushFromTexture
FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:MakeBrushFromTexture");

	FUWidgetBlueprintLibrary_MakeBrushFromTexture_Params Parms;

	Parms.Texture = Texture;
	Parms.Width = Width;
	Parms.Height = Height;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:MakeBrushFromMaterial
FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:MakeBrushFromMaterial");

	FUWidgetBlueprintLibrary_MakeBrushFromMaterial_Params Parms;

	Parms.Material = Material;
	Parms.Width = Width;
	Parms.Height = Height;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:MakeBrushFromAsset
FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:MakeBrushFromAsset");

	FUWidgetBlueprintLibrary_MakeBrushFromAsset_Params Parms;

	Parms.BrushAsset = BrushAsset;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:LockMouse
FEventReply UWidgetBlueprintLibrary::LockMouse(FEventReply Reply, class UWidget* CapturingWidget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:LockMouse");

	FUWidgetBlueprintLibrary_LockMouse_Params Parms;

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:IsDragDropping
bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:IsDragDropping");

	FUWidgetBlueprintLibrary_IsDragDropping_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:Handled
FEventReply UWidgetBlueprintLibrary::Handled()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:Handled");

	FUWidgetBlueprintLibrary_Handled_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetKeyEventFromAnalogInputEvent
FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(FAnalogInputEvent Event)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetKeyEventFromAnalogInputEvent");

	FUWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params Parms;

	Parms.Event = Event;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetInputEventFromPointerEvent
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(FPointerEvent Event)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetInputEventFromPointerEvent");

	FUWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params Parms;

	Parms.Event = Event;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetInputEventFromNavigationEvent
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(FNavigationEvent Event)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetInputEventFromNavigationEvent");

	FUWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params Parms;

	Parms.Event = Event;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetInputEventFromKeyEvent
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(FKeyEvent Event)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetInputEventFromKeyEvent");

	FUWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params Parms;

	Parms.Event = Event;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetInputEventFromControllerEvent
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromControllerEvent(FControllerEvent Event)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetInputEventFromControllerEvent");

	FUWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params Parms;

	Parms.Event = Event;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetInputEventFromCharacterEvent
FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(FCharacterEvent Event)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetInputEventFromCharacterEvent");

	FUWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params Parms;

	Parms.Event = Event;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetDynamicMaterial
class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(FSlateBrush Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetDynamicMaterial");

	FUWidgetBlueprintLibrary_GetDynamicMaterial_Params Parms;

	Parms.Brush = Brush;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetDragDroppingContent
class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetDragDroppingContent");

	FUWidgetBlueprintLibrary_GetDragDroppingContent_Params Parms;


	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetBrushResourceAsTexture2D
class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(FSlateBrush Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetBrushResourceAsTexture2D");

	FUWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params Parms;

	Parms.Brush = Brush;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetBrushResourceAsMaterial
class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(FSlateBrush Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetBrushResourceAsMaterial");

	FUWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params Parms;

	Parms.Brush = Brush;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetBrushResource
class UObject* UWidgetBlueprintLibrary::GetBrushResource(FSlateBrush Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetBrushResource");

	FUWidgetBlueprintLibrary_GetBrushResource_Params Parms;

	Parms.Brush = Brush;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetAllWidgetsWithInterface
void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class UUserWidget*> FoundWidgets, bool TopLevelOnly)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetAllWidgetsWithInterface");

	FUWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Interface = Interface;
	Parms.FoundWidgets = FoundWidgets;
	Parms.TopLevelOnly = TopLevelOnly;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:GetAllWidgetsOfClass
void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*> FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:GetAllWidgetsOfClass");

	FUWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.FoundWidgets = FoundWidgets;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:EndDragDrop
FEventReply UWidgetBlueprintLibrary::EndDragDrop(FEventReply Reply)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:EndDragDrop");

	FUWidgetBlueprintLibrary_EndDragDrop_Params Parms;

	Parms.Reply = Reply;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DrawTextFormatted
void UWidgetBlueprintLibrary::DrawTextFormatted(FPaintContext Context, FText TEXT, FVector2D Position, class UFont* Font, int32_t FontSize, FName FontTypeFace, FLinearColor Tint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DrawTextFormatted");

	FUWidgetBlueprintLibrary_DrawTextFormatted_Params Parms;

	Parms.Context = Context;
	Parms.TEXT = TEXT;
	Parms.Position = Position;
	Parms.Font = Font;
	Parms.FontSize = FontSize;
	Parms.FontTypeFace = FontTypeFace;
	Parms.Tint = Tint;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DrawText
void UWidgetBlueprintLibrary::DrawText(FPaintContext Context, FString InString, FVector2D Position, FLinearColor Tint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DrawText");

	FUWidgetBlueprintLibrary_DrawText_Params Parms;

	Parms.Context = Context;
	Parms.InString = InString;
	Parms.Position = Position;
	Parms.Tint = Tint;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DrawLines
void UWidgetBlueprintLibrary::DrawLines(FPaintContext Context, TArray<FVector2D> Points, FLinearColor Tint, bool bAntiAlias)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DrawLines");

	FUWidgetBlueprintLibrary_DrawLines_Params Parms;

	Parms.Context = Context;
	Parms.Points = Points;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DrawLine
void UWidgetBlueprintLibrary::DrawLine(FPaintContext Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DrawLine");

	FUWidgetBlueprintLibrary_DrawLine_Params Parms;

	Parms.Context = Context;
	Parms.PositionA = PositionA;
	Parms.PositionB = PositionB;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DrawBox
void UWidgetBlueprintLibrary::DrawBox(FPaintContext Context, FVector2D Position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DrawBox");

	FUWidgetBlueprintLibrary_DrawBox_Params Parms;

	Parms.Context = Context;
	Parms.Position = Position;
	Parms.Size = Size;
	Parms.Brush = Brush;
	Parms.Tint = Tint;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DismissAllMenus
void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DismissAllMenus");

	StaticClass()->ProcessEvent(FN, nullptr);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DetectDragIfPressed
FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(FPointerEvent PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DetectDragIfPressed");

	FUWidgetBlueprintLibrary_DetectDragIfPressed_Params Parms;

	Parms.PointerEvent = PointerEvent;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:DetectDrag
FEventReply UWidgetBlueprintLibrary::DetectDrag(FEventReply Reply, class UWidget* WidgetDetectingDrag, FKey DragKey)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:DetectDrag");

	FUWidgetBlueprintLibrary_DetectDrag_Params Parms;

	Parms.Reply = Reply;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:CreateDragDropOperation
class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:CreateDragDropOperation");

	FUWidgetBlueprintLibrary_CreateDragDropOperation_Params Parms;

	Parms.OperationClass = OperationClass;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:Create
class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:Create");

	FUWidgetBlueprintLibrary_Create_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetType = WidgetType;
	Parms.OwningPlayer = OwningPlayer;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:ClearUserFocus
FEventReply UWidgetBlueprintLibrary::ClearUserFocus(FEventReply Reply, bool bInAllUsers)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:ClearUserFocus");

	FUWidgetBlueprintLibrary_ClearUserFocus_Params Parms;

	Parms.Reply = Reply;
	Parms.bInAllUsers = bInAllUsers;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:CaptureMouse
FEventReply UWidgetBlueprintLibrary::CaptureMouse(FEventReply Reply, class UWidget* CapturingWidget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:CaptureMouse");

	FUWidgetBlueprintLibrary_CaptureMouse_Params Parms;

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:CaptureJoystick
FEventReply UWidgetBlueprintLibrary::CaptureJoystick(FEventReply Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:CaptureJoystick");

	FUWidgetBlueprintLibrary_CaptureJoystick_Params Parms;

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;
	Parms.bInAllJoysticks = bInAllJoysticks;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetBlueprintLibrary:CancelDragDrop
void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetBlueprintLibrary:CancelDragDrop");

	StaticClass()->ProcessEvent(FN, nullptr);
}

UClass* UWidgetComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetComponent");

	return Class;
}

// Function /Script/UMG.WidgetComponent:SetWidget
void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:SetWidget");

	FUWidgetComponent_SetWidget_Params Parms;

	Parms.Widget = Widget;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetComponent:SetOwnerPlayer
void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:SetOwnerPlayer");

	FUWidgetComponent_SetOwnerPlayer_Params Parms;

	Parms.LocalPlayer = LocalPlayer;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetComponent:SetMaxInteractionDistance
void UWidgetComponent::SetMaxInteractionDistance(float Distance)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:SetMaxInteractionDistance");

	FUWidgetComponent_SetMaxInteractionDistance_Params Parms;

	Parms.Distance = Distance;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetComponent:SetDrawSize
void UWidgetComponent::SetDrawSize(FVector2D Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:SetDrawSize");

	FUWidgetComponent_SetDrawSize_Params Parms;

	Parms.Size = Size;

	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetComponent:GetUserWidgetObject
class UUserWidget* UWidgetComponent::GetUserWidgetObject() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:GetUserWidgetObject");

	FUWidgetComponent_GetUserWidgetObject_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetComponent:GetOwnerPlayer
class ULocalPlayer* UWidgetComponent::GetOwnerPlayer() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:GetOwnerPlayer");

	FUWidgetComponent_GetOwnerPlayer_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetComponent:GetMaxInteractionDistance
float UWidgetComponent::GetMaxInteractionDistance() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:GetMaxInteractionDistance");

	FUWidgetComponent_GetMaxInteractionDistance_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetComponent:GetDrawSize
FVector2D UWidgetComponent::GetDrawSize() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetComponent:GetDrawSize");

	FUWidgetComponent_GetDrawSize_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UWidgetLayoutLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetLayoutLibrary");

	return Class;
}

// Function /Script/UMG.WidgetLayoutLibrary:SlotAsVerticalBoxSlot
class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:SlotAsVerticalBoxSlot");

	FUWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params Parms;

	Parms.Widget = Widget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:SlotAsUniformGridSlot
class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:SlotAsUniformGridSlot");

	FUWidgetLayoutLibrary_SlotAsUniformGridSlot_Params Parms;

	Parms.Widget = Widget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:SlotAsOverlaySlot
class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:SlotAsOverlaySlot");

	FUWidgetLayoutLibrary_SlotAsOverlaySlot_Params Parms;

	Parms.Widget = Widget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:SlotAsHorizontalBoxSlot
class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:SlotAsHorizontalBoxSlot");

	FUWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params Parms;

	Parms.Widget = Widget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:SlotAsGridSlot
class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:SlotAsGridSlot");

	FUWidgetLayoutLibrary_SlotAsGridSlot_Params Parms;

	Parms.Widget = Widget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:SlotAsCanvasSlot
class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:SlotAsCanvasSlot");

	FUWidgetLayoutLibrary_SlotAsCanvasSlot_Params Parms;

	Parms.Widget = Widget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:SlotAsBorderSlot
class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:SlotAsBorderSlot");

	FUWidgetLayoutLibrary_SlotAsBorderSlot_Params Parms;

	Parms.Widget = Widget;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:RemoveAllWidgets
void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:RemoveAllWidgets");

	FUWidgetLayoutLibrary_RemoveAllWidgets_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:ProjectWorldLocationToWidgetPosition
bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D ScreenPosition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:ProjectWorldLocationToWidgetPosition");

	FUWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.WorldLocation = WorldLocation;
	Parms.ScreenPosition = ScreenPosition;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:GetViewportSize
FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:GetViewportSize");

	FUWidgetLayoutLibrary_GetViewportSize_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:GetViewportScale
float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:GetViewportScale");

	FUWidgetLayoutLibrary_GetViewportScale_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/UMG.WidgetLayoutLibrary:GetMousePositionScaledByDPI
bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float LocationX, float LocationY)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/UMG.WidgetLayoutLibrary:GetMousePositionScaledByDPI");

	FUWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params Parms;

	Parms.Player = Player;
	Parms.LocationX = LocationX;
	Parms.LocationY = LocationY;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UWidgetNavigation::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UMG.WidgetNavigation");

	return Class;
}

UScriptStruct* FEventReply::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.EventReply");

	return Struct;
}

UScriptStruct* FWidgetTransform::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.WidgetTransform");

	return Struct;
}

UScriptStruct* FShapedTextOptions::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.ShapedTextOptions");

	return Struct;
}

UScriptStruct* FPaintContext::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.PaintContext");

	return Struct;
}

UScriptStruct* FNamedSlotBinding::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.NamedSlotBinding");

	return Struct;
}

UScriptStruct* FDynamicPropertyPath::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.DynamicPropertyPath");

	return Struct;
}

UScriptStruct* FPropertyPathSegment::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.PropertyPathSegment");

	return Struct;
}

UScriptStruct* FSlateChildSize::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.SlateChildSize");

	return Struct;
}

UScriptStruct* FSlateMeshVertex::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.SlateMeshVertex");

	return Struct;
}

UScriptStruct* FAnchorData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.AnchorData");

	return Struct;
}

UScriptStruct* FWidgetAnimationBinding::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.WidgetAnimationBinding");

	return Struct;
}

UScriptStruct* FDelegateRuntimeBinding::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.DelegateRuntimeBinding");

	return Struct;
}

UScriptStruct* FWidgetNavigationData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UMG.WidgetNavigationData");

	return Struct;
}

