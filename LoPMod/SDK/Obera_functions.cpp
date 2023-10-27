#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Obera.OberaBPLibrary
// (None)

class UClass* UOberaBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OberaBPLibrary");

	return Clss;
}


// OberaBPLibrary Obera.Default__OberaBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOberaBPLibrary* UOberaBPLibrary::GetDefaultObj()
{
	static class UOberaBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOberaBPLibrary*>(UOberaBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Obera.OberaBPLibrary.SetStringFieldInJsonObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOberaBPLibrary::SetStringFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetStringFieldInJsonObject");

	Params::UOberaBPLibrary_SetStringFieldInJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.StringValue = StringValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Obera.OberaBPLibrary.SetObjectFieldInJsonObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOberaJSonObject            ObjectValue                                                      (Parm, NativeAccessSpecifierPublic)

void UOberaBPLibrary::SetObjectFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, const struct FOberaJSonObject& ObjectValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetObjectFieldInJsonObject");

	Params::UOberaBPLibrary_SetObjectFieldInJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.ObjectValue = ObjectValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Obera.OberaBPLibrary.SetJsonValueAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOberaJSonValue             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOberaJSonValue UOberaBPLibrary::SetJsonValueAsString(const struct FOberaJSonValue& Value, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetJsonValueAsString");

	Params::UOberaBPLibrary_SetJsonValueAsString_Params Parms{};

	Parms.Value = Value;
	Parms.StringValue = StringValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.SetJsonValueAsObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// struct FOberaJSonObject            ObjectValue                                                      (Parm, NativeAccessSpecifierPublic)
// struct FOberaJSonValue             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOberaJSonValue UOberaBPLibrary::SetJsonValueAsObject(const struct FOberaJSonValue& Value, const struct FOberaJSonObject& ObjectValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetJsonValueAsObject");

	Params::UOberaBPLibrary_SetJsonValueAsObject_Params Parms{};

	Parms.Value = Value;
	Parms.ObjectValue = ObjectValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.SetJsonValueAsFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOberaJSonValue             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOberaJSonValue UOberaBPLibrary::SetJsonValueAsFloat(const struct FOberaJSonValue& Value, float FloatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetJsonValueAsFloat");

	Params::UOberaBPLibrary_SetJsonValueAsFloat_Params Parms{};

	Parms.Value = Value;
	Parms.FloatValue = FloatValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.SetJsonValueAsBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               BoolValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOberaJSonValue             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOberaJSonValue UOberaBPLibrary::SetJsonValueAsBool(const struct FOberaJSonValue& Value, bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetJsonValueAsBool");

	Params::UOberaBPLibrary_SetJsonValueAsBool_Params Parms{};

	Parms.Value = Value;
	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.SetJsonValueAsArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// TArray<struct FOberaJSonValue>     ArrayValue                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FOberaJSonValue             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOberaJSonValue UOberaBPLibrary::SetJsonValueAsArray(const struct FOberaJSonValue& Value, const TArray<struct FOberaJSonValue>& ArrayValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetJsonValueAsArray");

	Params::UOberaBPLibrary_SetJsonValueAsArray_Params Parms{};

	Parms.Value = Value;
	Parms.ArrayValue = ArrayValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.SetFloatFieldInJsonObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOberaBPLibrary::SetFloatFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, float FloatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetFloatFieldInJsonObject");

	Params::UOberaBPLibrary_SetFloatFieldInJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.FloatValue = FloatValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Obera.OberaBPLibrary.SetBoolFieldInJsonObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               BoolValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOberaBPLibrary::SetBoolFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetBoolFieldInJsonObject");

	Params::UOberaBPLibrary_SetBoolFieldInJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Obera.OberaBPLibrary.SetArrayFieldFromJsonObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOberaJSonValue>     ValueArray                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOberaBPLibrary::SetArrayFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, const TArray<struct FOberaJSonValue>& ValueArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SetArrayFieldFromJsonObject");

	Params::UOberaBPLibrary_SetArrayFieldFromJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.ValueArray = ValueArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Obera.OberaBPLibrary.SaveStringIntoFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringToSvae                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::SaveStringIntoFile(const class FString& Path, const class FString& StringToSvae)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SaveStringIntoFile");

	Params::UOberaBPLibrary_SaveStringIntoFile_Params Parms{};

	Parms.Path = Path;
	Parms.StringToSvae = StringToSvae;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.SaveJsonObjectIntoFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::SaveJsonObjectIntoFile(const class FString& Path, const struct FOberaJSonObject& Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "SaveJsonObjectIntoFile");

	Params::UOberaBPLibrary_SaveJsonObjectIntoFile_Params Parms{};

	Parms.Path = Path;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.LoadJsonObjectFromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOberaJSonObject            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOberaJSonObject UOberaBPLibrary::LoadJsonObjectFromFile(const class FString& Path, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "LoadJsonObjectFromFile");

	Params::UOberaBPLibrary_LoadJsonObjectFromFile_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.LoadFileIntoString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOberaBPLibrary::LoadFileIntoString(const class FString& Path, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "LoadFileIntoString");

	Params::UOberaBPLibrary_LoadFileIntoString_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetStringFieldFromJsonObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnString                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetStringFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, class FString* ReturnString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetStringFieldFromJsonObject");

	Params::UOberaBPLibrary_GetStringFieldFromJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnString != nullptr)
		*ReturnString = std::move(Parms.ReturnString);

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetObjectFieldFromJsonObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOberaJSonObject            ReturnObject                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetObjectFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, struct FOberaJSonObject* ReturnObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetObjectFieldFromJsonObject");

	Params::UOberaBPLibrary_GetObjectFieldFromJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnObject != nullptr)
		*ReturnObject = std::move(Parms.ReturnObject);

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetJsonValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnString                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetJsonValueAsString(const struct FOberaJSonValue& Value, class FString* ReturnString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetJsonValueAsString");

	Params::UOberaBPLibrary_GetJsonValueAsString_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnString != nullptr)
		*ReturnString = std::move(Parms.ReturnString);

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetJsonValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// struct FOberaJSonObject            ReturnObject                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetJsonValueAsObject(const struct FOberaJSonValue& Value, struct FOberaJSonObject* ReturnObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetJsonValueAsObject");

	Params::UOberaBPLibrary_GetJsonValueAsObject_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnObject != nullptr)
		*ReturnObject = std::move(Parms.ReturnObject);

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetJsonValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// float                              ReturnFloat                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetJsonValueAsFloat(const struct FOberaJSonValue& Value, float* ReturnFloat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetJsonValueAsFloat");

	Params::UOberaBPLibrary_GetJsonValueAsFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnFloat != nullptr)
		*ReturnFloat = Parms.ReturnFloat;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetJsonValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnBool                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetJsonValueAsBool(const struct FOberaJSonValue& Value, bool* ReturnBool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetJsonValueAsBool");

	Params::UOberaBPLibrary_GetJsonValueAsBool_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnBool != nullptr)
		*ReturnBool = Parms.ReturnBool;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetJsonValueAsArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonValue             Value                                                            (Parm, NativeAccessSpecifierPublic)
// TArray<struct FOberaJSonValue>     ReturnArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetJsonValueAsArray(const struct FOberaJSonValue& Value, TArray<struct FOberaJSonValue>* ReturnArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetJsonValueAsArray");

	Params::UOberaBPLibrary_GetJsonValueAsArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnArray != nullptr)
		*ReturnArray = std::move(Parms.ReturnArray);

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetFloatFieldFromJsonObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnFloat                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetFloatFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, float* ReturnFloat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetFloatFieldFromJsonObject");

	Params::UOberaBPLibrary_GetFloatFieldFromJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnFloat != nullptr)
		*ReturnFloat = Parms.ReturnFloat;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetBoolFieldFromJsonObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnBool                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetBoolFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, bool* ReturnBool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetBoolFieldFromJsonObject");

	Params::UOberaBPLibrary_GetBoolFieldFromJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnBool != nullptr)
		*ReturnBool = Parms.ReturnBool;

	return Parms.ReturnValue;

}


// Function Obera.OberaBPLibrary.GetArrayFieldFromJsonObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOberaJSonObject            Object                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOberaJSonValue>     ReturnArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOberaBPLibrary::GetArrayFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, TArray<struct FOberaJSonValue>* ReturnArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OberaBPLibrary", "GetArrayFieldFromJsonObject");

	Params::UOberaBPLibrary_GetArrayFieldFromJsonObject_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnArray != nullptr)
		*ReturnArray = std::move(Parms.ReturnArray);

	return Parms.ReturnValue;

}

}


