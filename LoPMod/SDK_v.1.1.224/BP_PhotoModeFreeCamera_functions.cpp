#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhotoModeFreeCamera.BP_PhotoModeFreeCamera_C
// (Actor, Pawn)

class UClass* ABP_PhotoModeFreeCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhotoModeFreeCamera_C");

	return Clss;
}


// BP_PhotoModeFreeCamera_C BP_PhotoModeFreeCamera.Default__BP_PhotoModeFreeCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PhotoModeFreeCamera_C* ABP_PhotoModeFreeCamera_C::GetDefaultObj()
{
	static class ABP_PhotoModeFreeCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PhotoModeFreeCamera_C*>(ABP_PhotoModeFreeCamera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PhotoModeFreeCamera.BP_PhotoModeFreeCamera_C.SetCameraCollisionSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              CurrentRealm                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModeFreeCamera_C::SetCameraCollisionSettings(enum class EGameRealm CurrentRealm, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeFreeCamera_C", "SetCameraCollisionSettings");

	Params::ABP_PhotoModeFreeCamera_C_SetCameraCollisionSettings_Params Parms{};

	Parms.CurrentRealm = CurrentRealm;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeFreeCamera.BP_PhotoModeFreeCamera_C.OnEndTranscendRealm_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              OldRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              NewRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActivateRealmReason    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModeFreeCamera_C::OnEndTranscendRealm_Event(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm, enum class EActivateRealmReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeFreeCamera_C", "OnEndTranscendRealm_Event");

	Params::ABP_PhotoModeFreeCamera_C_OnEndTranscendRealm_Event_Params Parms{};

	Parms.OldRealm = OldRealm;
	Parms.NewRealm = NewRealm;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeFreeCamera.BP_PhotoModeFreeCamera_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModeFreeCamera_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeFreeCamera_C", "ReceiveEndPlay");

	Params::ABP_PhotoModeFreeCamera_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeFreeCamera.BP_PhotoModeFreeCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PhotoModeFreeCamera_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeFreeCamera_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModeFreeCamera.BP_PhotoModeFreeCamera_C.ExecuteUbergraph_BP_PhotoModeFreeCamera
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFOVAngle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_oldRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_newRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActivateRealmReason    K2Node_CustomEvent_reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModeFreeCamera_C::ExecuteUbergraph_BP_PhotoModeFreeCamera(int32 EntryPoint, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, float CallFunc_GetFOVAngle_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, enum class EActivateRealmReason K2Node_CustomEvent_reason, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeFreeCamera_C", "ExecuteUbergraph_BP_PhotoModeFreeCamera");

	Params::ABP_PhotoModeFreeCamera_C_ExecuteUbergraph_BP_PhotoModeFreeCamera_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue = CallFunc_GetCurrentGameRealm_ReturnValue;
	Parms.CallFunc_GetFOVAngle_ReturnValue = CallFunc_GetFOVAngle_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_oldRealm = K2Node_CustomEvent_oldRealm;
	Parms.K2Node_CustomEvent_newRealm = K2Node_CustomEvent_newRealm;
	Parms.K2Node_CustomEvent_reason = K2Node_CustomEvent_reason;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


