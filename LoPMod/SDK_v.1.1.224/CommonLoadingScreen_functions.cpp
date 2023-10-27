#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonLoadingScreen.LoadingProcessInterface
// (None)

class UClass* ILoadingProcessInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingProcessInterface");

	return Clss;
}


// LoadingProcessInterface CommonLoadingScreen.Default__LoadingProcessInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ILoadingProcessInterface* ILoadingProcessInterface::GetDefaultObj()
{
	static class ILoadingProcessInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ILoadingProcessInterface*>(ILoadingProcessInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonLoadingScreen.LoadingProcessInterface.K2_ShouldShowLoadingScreen
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                      OutDebugReason                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ILoadingProcessInterface::K2_ShouldShowLoadingScreen(class FString* OutDebugReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingProcessInterface", "K2_ShouldShowLoadingScreen");

	Params::ILoadingProcessInterface_K2_ShouldShowLoadingScreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDebugReason != nullptr)
		*OutDebugReason = std::move(Parms.OutDebugReason);

	return Parms.ReturnValue;

}


// Class CommonLoadingScreen.LoadingProcessTask
// (None)

class UClass* ULoadingProcessTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingProcessTask");

	return Clss;
}


// LoadingProcessTask CommonLoadingScreen.Default__LoadingProcessTask
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingProcessTask* ULoadingProcessTask::GetDefaultObj()
{
	static class ULoadingProcessTask* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingProcessTask*>(ULoadingProcessTask::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonLoadingScreen.LoadingProcessTask.Unregister
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULoadingProcessTask::Unregister()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingProcessTask", "Unregister");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CommonLoadingScreen.LoadingProcessTask.SetShowLoadingScreenReason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDebugReason                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadingProcessTask::SetShowLoadingScreenReason(const class FString& InDebugReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingProcessTask", "SetShowLoadingScreenReason");

	Params::ULoadingProcessTask_SetShowLoadingScreenReason_Params Parms{};

	Parms.InDebugReason = InDebugReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonLoadingScreen.LoadingProcessTask.CreateLoadingScreenProcessTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ShowLoadingScreenReason                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoadingProcessTask*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoadingProcessTask* ULoadingProcessTask::CreateLoadingScreenProcessTask(class UObject* WorldContextObject, const class FString& ShowLoadingScreenReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingProcessTask", "CreateLoadingScreenProcessTask");

	Params::ULoadingProcessTask_CreateLoadingScreenProcessTask_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ShowLoadingScreenReason = ShowLoadingScreenReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonLoadingScreen.LoadingScreenManager
// (None)

class UClass* ULoadingScreenManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenManager");

	return Clss;
}


// LoadingScreenManager CommonLoadingScreen.Default__LoadingScreenManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingScreenManager* ULoadingScreenManager::GetDefaultObj()
{
	static class ULoadingScreenManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreenManager*>(ULoadingScreenManager::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonLoadingScreen.LoadingScreenManager.SetLoadingBarEnabled
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadingScreenManager::SetLoadingBarEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "SetLoadingBarEnabled");

	Params::ULoadingScreenManager_SetLoadingBarEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonLoadingScreen.LoadingScreenManager.RemoveLoadingScreenWatcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadingScreenManager::RemoveLoadingScreenWatcher(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "RemoveLoadingScreenWatcher");

	Params::ULoadingScreenManager_RemoveLoadingScreenWatcher_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonLoadingScreen.LoadingScreenManager.K2_SetLoadingScreenCustomText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadingScreenManager::K2_SetLoadingScreenCustomText(class UWorld* WorldContextObject, const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "K2_SetLoadingScreenCustomText");

	Params::ULoadingScreenManager_K2_SetLoadingScreenCustomText_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewText = NewText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingScreenCustomText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULoadingScreenManager::GetLoadingScreenCustomText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "GetLoadingScreenCustomText");

	Params::ULoadingScreenManager_GetLoadingScreenCustomText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingBarStage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELoadingBarStage        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELoadingBarStage ULoadingScreenManager::GetLoadingBarStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "GetLoadingBarStage");

	Params::ULoadingScreenManager_GetLoadingBarStage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingBarProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULoadingScreenManager::GetLoadingBarProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "GetLoadingBarProgress");

	Params::ULoadingScreenManager_GetLoadingBarProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonLoadingScreen.LoadingScreenManager.GetLoadingBarEnabled
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULoadingScreenManager::GetLoadingBarEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "GetLoadingBarEnabled");

	Params::ULoadingScreenManager_GetLoadingBarEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonLoadingScreen.LoadingScreenManager.GetDebugReasonForShowingOrHidingLoadingScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULoadingScreenManager::GetDebugReasonForShowingOrHidingLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "GetDebugReasonForShowingOrHidingLoadingScreen");

	Params::ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonLoadingScreen.LoadingScreenManager.GetCurrentLoadingMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULoadingScreenManager::GetCurrentLoadingMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "GetCurrentLoadingMap");

	Params::ULoadingScreenManager_GetCurrentLoadingMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonLoadingScreen.LoadingScreenManager.AddLoadingScreenWatcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadingScreenManager::AddLoadingScreenWatcher(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenManager", "AddLoadingScreenWatcher");

	Params::ULoadingScreenManager_AddLoadingScreenWatcher_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


