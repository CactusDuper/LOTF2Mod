#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CinematicTriggerBySoulflay.CinematicTriggerBySoulflay_C
// (Actor)

class UClass* ACinematicTriggerBySoulflay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CinematicTriggerBySoulflay_C");

	return Clss;
}


// CinematicTriggerBySoulflay_C CinematicTriggerBySoulflay.Default__CinematicTriggerBySoulflay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACinematicTriggerBySoulflay_C* ACinematicTriggerBySoulflay_C::GetDefaultObj()
{
	static class ACinematicTriggerBySoulflay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACinematicTriggerBySoulflay_C*>(ACinematicTriggerBySoulflay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CinematicTriggerBySoulflay.CinematicTriggerBySoulflay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACinematicTriggerBySoulflay_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicTriggerBySoulflay_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CinematicTriggerBySoulflay.CinematicTriggerBySoulflay_C.PlayCinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematicTriggerBySoulflay_C::PlayCinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicTriggerBySoulflay_C", "PlayCinematic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CinematicTriggerBySoulflay.CinematicTriggerBySoulflay_C.ExecuteUbergraph_CinematicTriggerBySoulflay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULOTF2SaveGameManager*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameAsync_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACinematicTriggerBySoulflay_C::ExecuteUbergraph_CinematicTriggerBySoulflay(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ULOTF2SaveGameManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_SaveGameAsync_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicTriggerBySoulflay_C", "ExecuteUbergraph_CinematicTriggerBySoulflay");

	Params::ACinematicTriggerBySoulflay_C_ExecuteUbergraph_CinematicTriggerBySoulflay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_SaveGameAsync_ReturnValue = CallFunc_SaveGameAsync_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


