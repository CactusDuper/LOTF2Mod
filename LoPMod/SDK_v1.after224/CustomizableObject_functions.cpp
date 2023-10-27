#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CustomizableObject.CustomizableInstanceLODManagementBase
// (None)

class UClass* UCustomizableInstanceLODManagementBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableInstanceLODManagementBase");

	return Clss;
}


// CustomizableInstanceLODManagementBase CustomizableObject.Default__CustomizableInstanceLODManagementBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableInstanceLODManagementBase* UCustomizableInstanceLODManagementBase::GetDefaultObj()
{
	static class UCustomizableInstanceLODManagementBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableInstanceLODManagementBase*>(UCustomizableInstanceLODManagementBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObject.CustomizableInstanceLODManagement
// (None)

class UClass* UCustomizableInstanceLODManagement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableInstanceLODManagement");

	return Clss;
}


// CustomizableInstanceLODManagement CustomizableObject.Default__CustomizableInstanceLODManagement
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableInstanceLODManagement* UCustomizableInstanceLODManagement::GetDefaultObj()
{
	static class UCustomizableInstanceLODManagement* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableInstanceLODManagement*>(UCustomizableInstanceLODManagement::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObject.CustomizableInstancePrivateData
// (None)

class UClass* UCustomizableInstancePrivateData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableInstancePrivateData");

	return Clss;
}


// CustomizableInstancePrivateData CustomizableObject.Default__CustomizableInstancePrivateData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableInstancePrivateData* UCustomizableInstancePrivateData::GetDefaultObj()
{
	static class UCustomizableInstancePrivateData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableInstancePrivateData*>(UCustomizableInstancePrivateData::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObject.MutableMaskOutCache
// (None)

class UClass* UMutableMaskOutCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MutableMaskOutCache");

	return Clss;
}


// MutableMaskOutCache CustomizableObject.Default__MutableMaskOutCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UMutableMaskOutCache* UMutableMaskOutCache::GetDefaultObj()
{
	static class UMutableMaskOutCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UMutableMaskOutCache*>(UMutableMaskOutCache::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObject.CustomizableObject
// (None)

class UClass* UCustomizableObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableObject");

	return Clss;
}


// CustomizableObject CustomizableObject.Default__CustomizableObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableObject* UCustomizableObject::GetDefaultObj()
{
	static class UCustomizableObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableObject*>(UCustomizableObject::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomizableObject.CustomizableObject.UnloadMaskOutCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObject::UnloadMaskOutCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "UnloadMaskOutCache");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObject.LoadMaskOutCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObject::LoadMaskOutCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "LoadMaskOutCache");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObject.IsCompiled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObject::IsCompiled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "IsCompiled");

	Params::UCustomizableObject_IsCompiled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StateIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int32 StateIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetStateUIMetadataFromIndex");

	Params::UCustomizableObject_GetStateUIMetadataFromIndex_Params Parms{};

	Parms.StateIndex = StateIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetStateUIMetadata(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetStateUIMetadata");

	Params::UCustomizableObject_GetStateUIMetadata_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateParameterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ParameterIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetStateParameterName(const class FString& StateName, int32 ParameterIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetStateParameterName");

	Params::UCustomizableObject_GetStateParameterName_Params Parms{};

	Parms.StateName = StateName;
	Parms.ParameterIndex = ParameterIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetStateParameterCount(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetStateParameterCount");

	Params::UCustomizableObject_GetStateParameterCount_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StateIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetStateName(int32 StateIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetStateName");

	Params::UCustomizableObject_GetStateName_Params Parms{};

	Parms.StateIndex = StateIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetStateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetStateCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetStateCount");

	Params::UCustomizableObject_GetStateCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int32 ParamIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetParameterUIMetadataFromIndex");

	Params::UCustomizableObject_GetParameterUIMetadataFromIndex_Params Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FParameterUIData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetParameterUIMetadata");

	Params::UCustomizableObject_GetParameterUIMetadata_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMutableParameterType   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMutableParameterType UCustomizableObject::GetParameterTypeByName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetParameterTypeByName");

	Params::UCustomizableObject_GetParameterTypeByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMutableParameterType   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMutableParameterType UCustomizableObject::GetParameterType(int32 ParamIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetParameterType");

	Params::UCustomizableObject_GetParameterType_Params Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetParameterName(int32 ParamIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetParameterName");

	Params::UCustomizableObject_GetParameterName_Params Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetParameterDescriptionCount(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetParameterDescriptionCount");

	Params::UCustomizableObject_GetParameterDescriptionCount_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetParameterCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetParameterCount");

	Params::UCustomizableObject_GetParameterCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::GetIntParameterNumOptions(int32 ParamIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetIntParameterNumOptions");

	Params::UCustomizableObject_GetIntParameterNumOptions_Params Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ParamIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              K                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObject::GetIntParameterAvailableOption(int32 ParamIndex, int32 K)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "GetIntParameterAvailableOption");

	Params::UCustomizableObject_GetIntParameterAvailableOption_Params Parms{};

	Parms.ParamIndex = ParamIndex;
	Parms.K = K;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.FindParameter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObject::FindParameter(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "FindParameter");

	Params::UCustomizableObject_FindParameter_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObject.CreateInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomizableObjectInstance* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectInstance* UCustomizableObject::CreateInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObject", "CreateInstance");

	Params::UCustomizableObject_CreateInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CustomizableObject.CustomizableObjectInstance
// (None)

class UClass* UCustomizableObjectInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableObjectInstance");

	return Clss;
}


// CustomizableObjectInstance CustomizableObject.Default__CustomizableObjectInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableObjectInstance* UCustomizableObjectInstance::GetDefaultObj()
{
	static class UCustomizableObjectInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableObjectInstance*>(UCustomizableObjectInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIgnoreCloseDist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceHighPriority                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "UpdateSkeletalMeshAsync");

	Params::UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params Parms{};

	Parms.bIgnoreCloseDist = bIgnoreCloseDist;
	Parms.bForceHighPriority = bForceHighPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      VectorParamName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                VectorValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(const class FString& VectorParamName, const struct FLinearColor& VectorValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetVectorParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params Parms{};

	Parms.VectorParamName = VectorParamName;
	Parms.VectorValue = VectorValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomizableObjectInstance::SetRandomValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetRandomValues");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      ProjectorParamName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Pos                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Up                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetProjectorValue(const class FString& ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float Angle, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetProjectorValue");

	Params::UCustomizableObjectInstance_SetProjectorValue_Params Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Pos = Pos;
	Parms.Direction = Direction;
	Parms.Up = Up;
	Parms.Scale = Scale;
	Parms.Angle = Angle;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SelectedOptionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetIntParameterSelectedOption(const class FString& ParamName, const class FString& SelectedOptionName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetIntParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetIntParameterSelectedOption_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.SelectedOptionName = SelectedOptionName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FloatParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(const class FString& FloatParamName, float FloatValue, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetFloatParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params Parms{};

	Parms.FloatParamName = FloatParamName;
	Parms.FloatValue = FloatValue;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetCurrentState(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetCurrentState");

	Params::UCustomizableObjectInstance_SetCurrentState_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      ColorParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ColorValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetColorParameterSelectedOption(const class FString& ColorParamName, const struct FLinearColor& ColorValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetColorParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetColorParameterSelectedOption_Params Parms{};

	Parms.ColorParamName = ColorParamName;
	Parms.ColorValue = ColorValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BoolParamName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               BoolValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(const class FString& BoolParamName, bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetBoolParameterSelectedOption");

	Params::UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params Parms{};

	Parms.BoolParamName = BoolParamName;
	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::RemoveValueFromProjectorRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromProjectorRange");

	Params::UCustomizableObjectInstance_RemoveValueFromProjectorRange_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::RemoveValueFromIntRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromIntRange");

	Params::UCustomizableObjectInstance_RemoveValueFromIntRange_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::RemoveValueFromFloatRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromFloatRange");

	Params::UCustomizableObjectInstance_RemoveValueFromFloatRange_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::IsParamMultidimensional(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "IsParamMultidimensional");

	Params::UCustomizableObjectInstance_IsParamMultidimensional_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::IsParameterRelevant(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "IsParameterRelevant");

	Params::UCustomizableObjectInstance_IsParameterRelevant_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ProjectorParamName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Up                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECustomizableObjectProjectorTypeType                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectInstance::GetProjectorValue(const class FString& ProjectorParamName, struct FVector* Pos, struct FVector* Direction, struct FVector* Up, struct FVector* Scale, float* Angle, enum class ECustomizableObjectProjectorType* Type, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorValue");

	Params::UCustomizableObjectInstance_GetProjectorValue_Params Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

	if (Up != nullptr)
		*Up = std::move(Parms.Up);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorUp(const class FString& ParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorUp");

	Params::UCustomizableObjectInstance_GetProjectorUp_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorScale(const class FString& ParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorScale");

	Params::UCustomizableObjectInstance_GetProjectorScale_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorPosition(const class FString& ParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorPosition");

	Params::UCustomizableObjectInstance_GetProjectorPosition_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECustomizableObjectProjectorTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(const class FString& ParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorParameterType");

	Params::UCustomizableObjectInstance_GetProjectorParameterType_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCustomizableObjectInstance::GetProjectorDirection(const class FString& ParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorDirection");

	Params::UCustomizableObjectInstance_GetProjectorDirection_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCustomizableObjectInstance::GetProjectorAngle(const class FString& ParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorAngle");

	Params::UCustomizableObjectInstance_GetProjectorAngle_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DescIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UCustomizableObjectInstance::GetParameterDescription(const class FString& ParamName, int32 DescIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetParameterDescription");

	Params::UCustomizableObjectInstance_GetParameterDescription_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.DescIndex = DescIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObjectInstance::GetIntParameterSelectedOption(const class FString& ParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetIntParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetIntParameterSelectedOption_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FloatParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(const class FString& FloatParamName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetFloatParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params Parms{};

	Parms.FloatParamName = FloatParamName;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObjectInstance::GetCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetCurrentState");

	Params::UCustomizableObjectInstance_GetCurrentState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ColorParamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UCustomizableObjectInstance::GetColorParameterSelectedOption(const class FString& ColorParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetColorParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetColorParameterSelectedOption_Params Parms{};

	Parms.ColorParamName = ColorParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      BoolParamName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(const class FString& BoolParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetBoolParameterSelectedOption");

	Params::UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params Parms{};

	Parms.BoolParamName = BoolParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindVectorParameterNameIndex(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindVectorParameterNameIndex");

	Params::UCustomizableObjectInstance_FindVectorParameterNameIndex_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindProjectorParameterNameIndex(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindProjectorParameterNameIndex");

	Params::UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindIntParameterNameIndex(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindIntParameterNameIndex");

	Params::UCustomizableObjectInstance_FindIntParameterNameIndex_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindFloatParameterNameIndex(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindFloatParameterNameIndex");

	Params::UCustomizableObjectInstance_FindFloatParameterNameIndex_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::FindBoolParameterNameIndex(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindBoolParameterNameIndex");

	Params::UCustomizableObjectInstance_FindBoolParameterNameIndex_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.CurrentParamRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::CurrentParamRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "CurrentParamRange");

	Params::UCustomizableObjectInstance_CurrentParamRange_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.CloneStatic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCustomizableObjectInstance* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectInstance* UCustomizableObjectInstance::CloneStatic(class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "CloneStatic");

	Params::UCustomizableObjectInstance_CloneStatic_Params Parms{};

	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.Clone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomizableObjectInstance* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectInstance* UCustomizableObjectInstance::Clone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "Clone");

	Params::UCustomizableObjectInstance_Clone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::AddValueToProjectorRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToProjectorRange");

	Params::UCustomizableObjectInstance_AddValueToProjectorRange_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.AddValueToIntRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::AddValueToIntRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToIntRange");

	Params::UCustomizableObjectInstance_AddValueToIntRange_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParamName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectInstance::AddValueToFloatRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToFloatRange");

	Params::UCustomizableObjectInstance_AddValueToFloatRange_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CustomizableObject.MutableTextureMipDataProviderFactory
// (None)

class UClass* UMutableTextureMipDataProviderFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MutableTextureMipDataProviderFactory");

	return Clss;
}


// MutableTextureMipDataProviderFactory CustomizableObject.Default__MutableTextureMipDataProviderFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UMutableTextureMipDataProviderFactory* UMutableTextureMipDataProviderFactory::GetDefaultObj()
{
	static class UMutableTextureMipDataProviderFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UMutableTextureMipDataProviderFactory*>(UMutableTextureMipDataProviderFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObject.CustomizableSystemImageProvider
// (None)

class UClass* UCustomizableSystemImageProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableSystemImageProvider");

	return Clss;
}


// CustomizableSystemImageProvider CustomizableObject.Default__CustomizableSystemImageProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableSystemImageProvider* UCustomizableSystemImageProvider::GetDefaultObj()
{
	static class UCustomizableSystemImageProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableSystemImageProvider*>(UCustomizableSystemImageProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObject.CustomizableObjectImageProviderArray
// (None)

class UClass* UCustomizableObjectImageProviderArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableObjectImageProviderArray");

	return Clss;
}


// CustomizableObjectImageProviderArray CustomizableObject.Default__CustomizableObjectImageProviderArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableObjectImageProviderArray* UCustomizableObjectImageProviderArray::GetDefaultObj()
{
	static class UCustomizableObjectImageProviderArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableObjectImageProviderArray*>(UCustomizableObjectImageProviderArray::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObject.CustomizableObjectSystem
// (None)

class UClass* UCustomizableObjectSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableObjectSystem");

	return Clss;
}


// CustomizableObjectSystem CustomizableObject.Default__CustomizableObjectSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableObjectSystem* UCustomizableObjectSystem::GetDefaultObj()
{
	static class UCustomizableObjectSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableObjectSystem*>(UCustomizableObjectSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReleaseTextures                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableObjectSystem::SetReleaseMutableTexturesImmediately(bool bReleaseTextures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "SetReleaseMutableTexturesImmediately");

	Params::UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Params Parms{};

	Parms.bReleaseTextures = bReleaseTextures;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetTotalInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetTotalInstances");

	Params::UCustomizableObjectSystem_GetTotalInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetTextureMemoryUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetTextureMemoryUsed");

	Params::UCustomizableObjectSystem_GetTextureMemoryUsed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCustomizableObjectSystem::GetPluginVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetPluginVersion");

	Params::UCustomizableObjectSystem_GetPluginVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetNumPendingInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetNumPendingInstances");

	Params::UCustomizableObjectSystem_GetNumPendingInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetNumInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetNumInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetNumInstances");

	Params::UCustomizableObjectSystem_GetNumInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCustomizableObjectSystem*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCustomizableObjectSystem* UCustomizableObjectSystem::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetInstance");

	Params::UCustomizableObjectSystem_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectSystem::GetAverageBuildTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetAverageBuildTime");

	Params::UCustomizableObjectSystem_GetAverageBuildTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectSystem::AreEnginePatchesPresent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectSystem", "AreEnginePatchesPresent");

	Params::UCustomizableObjectSystem_AreEnginePatchesPresent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CustomizableObject.CustomizableSkeletalComponent
// (SceneComponent)

class UClass* UCustomizableSkeletalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableSkeletalComponent");

	return Clss;
}


// CustomizableSkeletalComponent CustomizableObject.Default__CustomizableSkeletalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableSkeletalComponent* UCustomizableSkeletalComponent::GetDefaultObj()
{
	static class UCustomizableSkeletalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableSkeletalComponent*>(UCustomizableSkeletalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNeverSkipUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableSkeletalComponent", "UpdateSkeletalMeshAsync");

	Params::UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params Parms{};

	Parms.bNeverSkipUpdate = bNeverSkipUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CustomizableObject.CustomizableSkeletalMeshActor
// (Actor)

class UClass* ACustomizableSkeletalMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableSkeletalMeshActor");

	return Clss;
}


// CustomizableSkeletalMeshActor CustomizableObject.Default__CustomizableSkeletalMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACustomizableSkeletalMeshActor* ACustomizableSkeletalMeshActor::GetDefaultObj()
{
	static class ACustomizableSkeletalMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACustomizableSkeletalMeshActor*>(ACustomizableSkeletalMeshActor::StaticClass()->DefaultObject);

	return Default;
}

}


