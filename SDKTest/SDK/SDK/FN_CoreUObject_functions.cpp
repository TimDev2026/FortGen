#include "pch.h"

#include "FN_CoreUObject_classes.h"

UClass* UObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Object");

	return Class;
}

// Function /Script/CoreUObject.Object:ExecuteUbergraph
void UObject::ExecuteUbergraph(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/CoreUObject.Object:ExecuteUbergraph");

	FUObject_ExecuteUbergraph_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* UInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Interface");

	return Class;
}

UClass* UGCObjectReferencer::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.GCObjectReferencer");

	return Class;
}

UClass* UTextBuffer::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.TextBuffer");

	return Class;
}

UClass* UField::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Field");

	return Class;
}

UClass* UStruct::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Struct");

	return Class;
}

UClass* UScriptStruct::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.ScriptStruct");

	return Class;
}

UClass* UPackage::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Package");

	return Class;
}

UClass* UClass::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Class");

	return Class;
}

UClass* UFunction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Function");

	return Class;
}

UClass* UDelegateFunction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.DelegateFunction");

	return Class;
}

UClass* UDynamicClass::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.DynamicClass");

	return Class;
}

UClass* UPackageMap::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.PackageMap");

	return Class;
}

UClass* UEnum::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Enum");

	return Class;
}

UClass* ULinkerPlaceholderClass::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.LinkerPlaceholderClass");

	return Class;
}

UClass* ULinkerPlaceholderExportObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.LinkerPlaceholderExportObject");

	return Class;
}

UClass* ULinkerPlaceholderFunction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.LinkerPlaceholderFunction");

	return Class;
}

UClass* UMetaData::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.MetaData");

	return Class;
}

UClass* UObjectRedirector::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.ObjectRedirector");

	return Class;
}

UClass* UProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Property");

	return Class;
}

UClass* UNumericProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.NumericProperty");

	return Class;
}

UClass* UArrayProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.ArrayProperty");

	return Class;
}

UClass* UObjectPropertyBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.ObjectPropertyBase");

	return Class;
}

UClass* UAssetObjectProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.AssetObjectProperty");

	return Class;
}

UClass* UAssetClassProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.AssetClassProperty");

	return Class;
}

UClass* UBoolProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.BoolProperty");

	return Class;
}

UClass* UByteProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.ByteProperty");

	return Class;
}

UClass* UObjectProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.ObjectProperty");

	return Class;
}

UClass* UClassProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.ClassProperty");

	return Class;
}

UClass* UDelegateProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.DelegateProperty");

	return Class;
}

UClass* UDoubleProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.DoubleProperty");

	return Class;
}

UClass* UFloatProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.FloatProperty");

	return Class;
}

UClass* UIntProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.IntProperty");

	return Class;
}

UClass* UInt16Property::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Int16Property");

	return Class;
}

UClass* UInt64Property::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Int64Property");

	return Class;
}

UClass* UInt8Property::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.Int8Property");

	return Class;
}

UClass* UInterfaceProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.InterfaceProperty");

	return Class;
}

UClass* ULazyObjectProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.LazyObjectProperty");

	return Class;
}

UClass* UMapProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.MapProperty");

	return Class;
}

UClass* UMulticastDelegateProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.MulticastDelegateProperty");

	return Class;
}

UClass* UNameProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.NameProperty");

	return Class;
}

UClass* UStrProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.StrProperty");

	return Class;
}

UClass* UStructProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.StructProperty");

	return Class;
}

UClass* UUInt16Property::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.UInt16Property");

	return Class;
}

UClass* UUInt32Property::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.UInt32Property");

	return Class;
}

UClass* UUInt64Property::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.UInt64Property");

	return Class;
}

UClass* UWeakObjectProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.WeakObjectProperty");

	return Class;
}

UClass* UTextProperty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/CoreUObject.TextProperty");

	return Class;
}

UScriptStruct* FGuid::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Guid");

	return Struct;
}

UScriptStruct* FVector::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Vector");

	return Struct;
}

UScriptStruct* FVector4::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Vector4");

	return Struct;
}

UScriptStruct* FVector2D::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Vector2D");

	return Struct;
}

UScriptStruct* FTwoVectors::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.TwoVectors");

	return Struct;
}

UScriptStruct* FPlane::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Plane");

	return Struct;
}

UScriptStruct* FRotator::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Rotator");

	return Struct;
}

UScriptStruct* FQuat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Quat");

	return Struct;
}

UScriptStruct* FPackedNormal::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.PackedNormal");

	return Struct;
}

UScriptStruct* FIntPoint::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.IntPoint");

	return Struct;
}

UScriptStruct* FIntVector::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.IntVector");

	return Struct;
}

UScriptStruct* FColor::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Color");

	return Struct;
}

UScriptStruct* FLinearColor::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.LinearColor");

	return Struct;
}

UScriptStruct* FBox::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Box");

	return Struct;
}

UScriptStruct* FBox2D::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Box2D");

	return Struct;
}

UScriptStruct* FBoxSphereBounds::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.BoxSphereBounds");

	return Struct;
}

UScriptStruct* FOrientedBox::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.OrientedBox");

	return Struct;
}

UScriptStruct* FMatrix::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Matrix");

	return Struct;
}

UScriptStruct* FInterpCurvePointFloat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurvePointFloat");

	return Struct;
}

UScriptStruct* FInterpCurveFloat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurveFloat");

	return Struct;
}

UScriptStruct* FInterpCurvePointVector2D::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurvePointVector2D");

	return Struct;
}

UScriptStruct* FInterpCurveVector2D::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurveVector2D");

	return Struct;
}

UScriptStruct* FInterpCurvePointVector::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurvePointVector");

	return Struct;
}

UScriptStruct* FInterpCurveVector::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurveVector");

	return Struct;
}

UScriptStruct* FInterpCurvePointQuat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurvePointQuat");

	return Struct;
}

UScriptStruct* FInterpCurveQuat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurveQuat");

	return Struct;
}

UScriptStruct* FInterpCurvePointTwoVectors::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurvePointTwoVectors");

	return Struct;
}

UScriptStruct* FInterpCurveTwoVectors::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurveTwoVectors");

	return Struct;
}

UScriptStruct* FInterpCurvePointLinearColor::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurvePointLinearColor");

	return Struct;
}

UScriptStruct* FInterpCurveLinearColor::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.InterpCurveLinearColor");

	return Struct;
}

UScriptStruct* FTransform::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Transform");

	return Struct;
}

UScriptStruct* FRandomStream::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.RandomStream");

	return Struct;
}

UScriptStruct* FDateTime::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.DateTime");

	return Struct;
}

UScriptStruct* FTimespan::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Timespan");

	return Struct;
}

UScriptStruct* FStringAssetReference::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.StringAssetReference");

	return Struct;
}

UScriptStruct* FStringClassReference::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.StringClassReference");

	return Struct;
}

UScriptStruct* FFallbackStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.FallbackStruct");

	return Struct;
}

UScriptStruct* FFloatRangeBound::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.FloatRangeBound");

	return Struct;
}

UScriptStruct* FFloatRange::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.FloatRange");

	return Struct;
}

UScriptStruct* FInt32RangeBound::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Int32RangeBound");

	return Struct;
}

UScriptStruct* FInt32Range::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Int32Range");

	return Struct;
}

UScriptStruct* FFloatInterval::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.FloatInterval");

	return Struct;
}

UScriptStruct* FInt32Interval::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/CoreUObject.Int32Interval");

	return Struct;
}

