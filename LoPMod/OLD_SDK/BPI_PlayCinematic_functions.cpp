#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PlayCinematic.BPI_PlayCinematic_C
// (Actor)

class UClass* ABPI_PlayCinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlayCinematic_C");

	return Clss;
}


// BPI_PlayCinematic_C BPI_PlayCinematic.Default__BPI_PlayCinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPI_PlayCinematic_C* ABPI_PlayCinematic_C::GetDefaultObj()
{
	static class ABPI_PlayCinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPI_PlayCinematic_C*>(ABPI_PlayCinematic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PlayCinematic.BPI_PlayCinematic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPI_PlayCinematic_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayCinematic_C", "UserConstructionScript");

	Params::ABPI_PlayCinematic_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_PlayCinematic.BPI_PlayCinematic_C.OnCinematicEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPI_PlayCinematic_C::OnCinematicEnd_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayCinematic_C", "OnCinematicEnd_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PlayCinematic.BPI_PlayCinematic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPI_PlayCinematic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayCinematic_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PlayCinematic.BPI_PlayCinematic_C.BPI_Trap_Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActivatingEntity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPI_PlayCinematic_C::BPI_Trap_Activate(class AActor* ActivatingEntity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayCinematic_C", "BPI_Trap_Activate");

	Params::ABPI_PlayCinematic_C_BPI_Trap_Activate_Params Parms{};

	Parms.ActivatingEntity = ActivatingEntity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_PlayCinematic.BPI_PlayCinematic_C.OnCinematicStartPlaying_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPI_PlayCinematic_C::OnCinematicStartPlaying_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayCinematic_C", "OnCinematicStartPlaying_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PlayCinematic.BPI_PlayCinematic_C.ExecuteUbergraph_BPI_PlayCinematic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQuestDirector*              CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQuestDirector*              CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActivatingEntity                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQuestDirector*              CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPI_PlayCinematic_C::ExecuteUbergraph_BPI_PlayCinematic(int32 EntryPoint, bool CallFunc_IsGameplayTagValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsGameplayTagValid_ReturnValue_1, class AActor* K2Node_Event_ActivatingEntity, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayCinematic_C", "ExecuteUbergraph_BPI_PlayCinematic");

	Params::ABPI_PlayCinematic_C_ExecuteUbergraph_BPI_PlayCinematic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.K2Node_Event_ActivatingEntity = K2Node_Event_ActivatingEntity;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_2 = CallFunc_IsGameplayTagValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


