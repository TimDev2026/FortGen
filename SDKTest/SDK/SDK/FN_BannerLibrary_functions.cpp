#include "pch.h"

#include "FN_BannerLibrary_classes.h"

UClass* UBannerLibrary_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Banners/BannerLibrary.BannerLibrary_C");

	return Class;
}

// Function /Game/Banners/BannerLibrary.BannerLibrary_C:UpdateMaterialWithBasicInfo
void UBannerLibrary_C::UpdateMaterialWithBasicInfo(FFortSocialItemBasicData BasicInfo, class UImage* ImageInfo, class UObject* __WorldContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Banners/BannerLibrary.BannerLibrary_C:UpdateMaterialWithBasicInfo");

	FUBannerLibrary_C_UpdateMaterialWithBasicInfo_Params Parms;

	Parms.BasicInfo = BasicInfo;
	Parms.ImageInfo = ImageInfo;
	Parms.__WorldContext = __WorldContext;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/Banners/BannerLibrary.BannerLibrary_C:UpdateBannerMeshMaterial
void UBannerLibrary_C::UpdateBannerMeshMaterial(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Banners/BannerLibrary.BannerLibrary_C:UpdateBannerMeshMaterial");

	FUBannerLibrary_C_UpdateBannerMeshMaterial_Params Parms;

	Parms.Material_Instance_Dynamic = Material_Instance_Dynamic;
	Parms.UseIconMask = UseIconMask;
	Parms.InstigatorPlayerState = InstigatorPlayerState;
	Parms.__WorldContext = __WorldContext;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/Banners/BannerLibrary.BannerLibrary_C:UpdateMaterial
void UBannerLibrary_C::UpdateMaterial(class UImage* Banner_material, FFortHomeBaseInfo Image_info, bool Is_Icon, class UObject* __WorldContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Banners/BannerLibrary.BannerLibrary_C:UpdateMaterial");

	FUBannerLibrary_C_UpdateMaterial_Params Parms;

	Parms.Banner_material = Banner_material;
	Parms.Image_info = Image_info;
	Parms.Is_Icon = Is_Icon;
	Parms.__WorldContext = __WorldContext;

	StaticClass()->ProcessEvent(FN, &Parms);
}

