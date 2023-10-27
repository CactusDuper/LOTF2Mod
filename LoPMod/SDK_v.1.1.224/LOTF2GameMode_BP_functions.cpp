#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LOTF2GameMode_BP.LOTF2GameMode_BP_C
// (Actor)

class UClass* ALOTF2GameMode_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LOTF2GameMode_BP_C");

	return Clss;
}


// LOTF2GameMode_BP_C LOTF2GameMode_BP.Default__LOTF2GameMode_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALOTF2GameMode_BP_C* ALOTF2GameMode_BP_C::GetDefaultObj()
{
	static class ALOTF2GameMode_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALOTF2GameMode_BP_C*>(ALOTF2GameMode_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.SetProxiesVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALOTF2GameMode_BP_C::SetProxiesVisibility(class FName& LevelName, bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameMode_BP_C", "SetProxiesVisibility");

	Params::ALOTF2GameMode_BP_C_SetProxiesVisibility_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALOTF2GameMode_BP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameMode_BP_C", "ReceiveEndPlay");

	Params::ALOTF2GameMode_BP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALOTF2GameMode_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameMode_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ALOTF2GameMode_BP_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameMode_BP_C", "K2_PostLogin");

	Params::ALOTF2GameMode_BP_C_K2_PostLogin_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.ExecuteUbergraph_LOTF2GameMode_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPlayer                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAICombatManagerSubsystem*   CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLOTF2GameInstance_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULOTF2GameInstance*          CallFunc_GetLOTF2GameInstance_GameInstance                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ALOTF2GameMode_BP_C::ExecuteUbergraph_LOTF2GameMode_BP(int32 EntryPoint, class APlayerController* K2Node_Event_NewPlayer, class UAICombatManagerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetLOTF2GameInstance_IsValid, class ULOTF2GameInstance* CallFunc_GetLOTF2GameInstance_GameInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameMode_BP_C", "ExecuteUbergraph_LOTF2GameMode_BP");

	Params::ALOTF2GameMode_BP_C_ExecuteUbergraph_LOTF2GameMode_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewPlayer = K2Node_Event_NewPlayer;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetLOTF2GameInstance_IsValid = CallFunc_GetLOTF2GameInstance_IsValid;
	Parms.CallFunc_GetLOTF2GameInstance_GameInstance = CallFunc_GetLOTF2GameInstance_GameInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.OnNewPlayerJoin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayerController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ALOTF2GameMode_BP_C::OnNewPlayerJoin__DelegateSignature(class APlayerController* NewPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameMode_BP_C", "OnNewPlayerJoin__DelegateSignature");

	Params::ALOTF2GameMode_BP_C_OnNewPlayerJoin__DelegateSignature_Params Parms{};

	Parms.NewPlayerController = NewPlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.OpenMainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALOTF2GameMode_BP_C::OpenMainMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameMode_BP_C", "OpenMainMenu__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


