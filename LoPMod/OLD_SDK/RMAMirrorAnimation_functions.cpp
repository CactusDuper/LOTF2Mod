#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RMAMirrorAnimation.RMAMirrorAnimationMirrorTable
// (None)

class UClass* URMAMirrorAnimationMirrorTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RMAMirrorAnimationMirrorTable");

	return Clss;
}


// RMAMirrorAnimationMirrorTable RMAMirrorAnimation.Default__RMAMirrorAnimationMirrorTable
// (Public, ClassDefaultObject, ArchetypeObject)

class URMAMirrorAnimationMirrorTable* URMAMirrorAnimationMirrorTable::GetDefaultObj()
{
	static class URMAMirrorAnimationMirrorTable* Default = nullptr;

	if (!Default)
		Default = static_cast<URMAMirrorAnimationMirrorTable*>(URMAMirrorAnimationMirrorTable::StaticClass()->DefaultObject);

	return Default;
}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorRotationToOtherPose
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FQuat4f                     SourceRotation                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat4f                     SourceRefRotation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat4f                     TargetRefRotation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRMAMirrorAnimationDoubleBoneConfigBoneConfig                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat4f                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQuat4f URMAMirrorAnimationMirrorTable::MirrorRotationToOtherPose(struct FQuat4f& SourceRotation, struct FQuat4f& SourceRefRotation, struct FQuat4f& TargetRefRotation, struct FRMAMirrorAnimationDoubleBoneConfig& BoneConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "MirrorRotationToOtherPose");

	Params::URMAMirrorAnimationMirrorTable_MirrorRotationToOtherPose_Params Parms{};

	Parms.SourceRotation = SourceRotation;
	Parms.SourceRefRotation = SourceRefRotation;
	Parms.TargetRefRotation = TargetRefRotation;
	Parms.BoneConfig = BoneConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorRotation
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FQuat4f                     Rotation                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat4f                     RefRotation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRMAMirrorAnimationSingleBoneConfigBoneConfig                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat4f                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQuat4f URMAMirrorAnimationMirrorTable::MirrorRotation(struct FQuat4f& Rotation, struct FQuat4f& RefRotation, struct FRMAMirrorAnimationSingleBoneConfig& BoneConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "MirrorRotation");

	Params::URMAMirrorAnimationMirrorTable_MirrorRotation_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.RefRotation = RefRotation;
	Parms.BoneConfig = BoneConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorLocationToOtherPose
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     SourceLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SourceRefLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat4f                     SourceRefRotation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetRefLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat4f                     TargetRefRotation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRMAMirrorAnimationDoubleBoneConfigBoneConfig                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector URMAMirrorAnimationMirrorTable::MirrorLocationToOtherPose(struct FVector& SourceLocation, struct FVector& SourceRefLocation, struct FQuat4f& SourceRefRotation, struct FVector& TargetRefLocation, struct FQuat4f& TargetRefRotation, struct FRMAMirrorAnimationDoubleBoneConfig& BoneConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "MirrorLocationToOtherPose");

	Params::URMAMirrorAnimationMirrorTable_MirrorLocationToOtherPose_Params Parms{};

	Parms.SourceLocation = SourceLocation;
	Parms.SourceRefLocation = SourceRefLocation;
	Parms.SourceRefRotation = SourceRefRotation;
	Parms.TargetRefLocation = TargetRefLocation;
	Parms.TargetRefRotation = TargetRefRotation;
	Parms.BoneConfig = BoneConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorLocation
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RefLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat4f                     RefRotation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRMAMirrorAnimationSingleBoneConfigBoneConfig                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector URMAMirrorAnimationMirrorTable::MirrorLocation(struct FVector& Location, struct FVector& RefLocation, struct FQuat4f& RefRotation, struct FRMAMirrorAnimationSingleBoneConfig& BoneConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "MirrorLocation");

	Params::URMAMirrorAnimationMirrorTable_MirrorLocation_Params Parms{};

	Parms.Location = Location;
	Parms.RefLocation = RefLocation;
	Parms.RefRotation = RefRotation;
	Parms.BoneConfig = BoneConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URMAMirrorAnimationMirrorTable::MirrorAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "MirrorAnimations");

	Params::URMAMirrorAnimationMirrorTable_MirrorAnimations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.GetFileVersion
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URMAMirrorAnimationMirrorTable::GetFileVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "GetFileVersion");

	Params::URMAMirrorAnimationMirrorTable_GetFileVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.GetAnimSelection
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UAnimSequence*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UAnimSequence*> URMAMirrorAnimationMirrorTable::GetAnimSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "GetAnimSelection");

	Params::URMAMirrorAnimationMirrorTable_GetAnimSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.GenerateBoneConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URMAMirrorAnimationMirrorTable::GenerateBoneConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationMirrorTable", "GenerateBoneConfig");

	Params::URMAMirrorAnimationMirrorTable_GenerateBoneConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary
// (None)

class UClass* URMAMirrorAnimationFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RMAMirrorAnimationFunctionLibrary");

	return Clss;
}


// RMAMirrorAnimationFunctionLibrary RMAMirrorAnimation.Default__RMAMirrorAnimationFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URMAMirrorAnimationFunctionLibrary* URMAMirrorAnimationFunctionLibrary::GetDefaultObj()
{
	static class URMAMirrorAnimationFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URMAMirrorAnimationFunctionLibrary*>(URMAMirrorAnimationFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.SyncBrowserToObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              AssetPaths                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void URMAMirrorAnimationFunctionLibrary::SyncBrowserToObjects(TArray<class FString>& AssetPaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationFunctionLibrary", "SyncBrowserToObjects");

	Params::URMAMirrorAnimationFunctionLibrary_SyncBrowserToObjects_Params Parms{};

	Parms.AssetPaths = AssetPaths;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.SetUserPreference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewValue                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URMAMirrorAnimationFunctionLibrary::SetUserPreference(const class FString& Key, const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationFunctionLibrary", "SetUserPreference");

	Params::URMAMirrorAnimationFunctionLibrary_SetUserPreference_Params Parms{};

	Parms.Key = Key;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.SaveLoadedAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     AssetToSave                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URMAMirrorAnimationFunctionLibrary::SaveLoadedAsset(class UObject* AssetToSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationFunctionLibrary", "SaveLoadedAsset");

	Params::URMAMirrorAnimationFunctionLibrary_SaveLoadedAsset_Params Parms{};

	Parms.AssetToSave = AssetToSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.GetVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URMAMirrorAnimationFunctionLibrary::GetVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationFunctionLibrary", "GetVersion");

	Params::URMAMirrorAnimationFunctionLibrary_GetVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.GetUserPreference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Successful                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URMAMirrorAnimationFunctionLibrary::GetUserPreference(const class FString& Key, bool* Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationFunctionLibrary", "GetUserPreference");

	Params::URMAMirrorAnimationFunctionLibrary_GetUserPreference_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Successful != nullptr)
		*Successful = Parms.Successful;

	return Parms.ReturnValue;

}


// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.GetPathNameForLoadedAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     LoadedAsset                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URMAMirrorAnimationFunctionLibrary::GetPathNameForLoadedAsset(class UObject* LoadedAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMAMirrorAnimationFunctionLibrary", "GetPathNameForLoadedAsset");

	Params::URMAMirrorAnimationFunctionLibrary_GetPathNameForLoadedAsset_Params Parms{};

	Parms.LoadedAsset = LoadedAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


