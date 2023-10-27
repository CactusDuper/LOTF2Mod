#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C
// (Actor)

class UClass* ADualRealmAnchorActorBase_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualRealmAnchorActorBase_BP_C");

	return Clss;
}


// DualRealmAnchorActorBase_BP_C DualRealmAnchorActorBase_BP.Default__DualRealmAnchorActorBase_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADualRealmAnchorActorBase_BP_C* ADualRealmAnchorActorBase_BP_C::GetDefaultObj()
{
	static class ADualRealmAnchorActorBase_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADualRealmAnchorActorBase_BP_C*>(ADualRealmAnchorActorBase_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.TriggerFirstTimeActivationVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmAnchorActorBase_BP_C::TriggerFirstTimeActivationVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchorActorBase_BP_C", "TriggerFirstTimeActivationVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.ToggleLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmAnchorActorBase_BP_C::ToggleLights(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchorActorBase_BP_C", "ToggleLights");

	Params::ADualRealmAnchorActorBase_BP_C_ToggleLights_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmAnchorActorBase_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchorActorBase_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.OnSoulBind
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmAnchorActorBase_BP_C::OnSoulBind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchorActorBase_BP_C", "OnSoulBind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.OnSoulUnbind
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmAnchorActorBase_BP_C::OnSoulUnbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchorActorBase_BP_C", "OnSoulUnbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.OnStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDualRealmAnchorState   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmAnchorActorBase_BP_C::OnStateChanged_Event(enum class EDualRealmAnchorState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchorActorBase_BP_C", "OnStateChanged_Event");

	Params::ADualRealmAnchorActorBase_BP_C_OnStateChanged_Event_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.ExecuteUbergraph_DualRealmAnchorActorBase_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EDualRealmAnchorState   K2Node_CustomEvent_state                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDualRealmAnchorState   CallFunc_GetState_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmAnchorActorBase_BP_C::ExecuteUbergraph_DualRealmAnchorActorBase_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EDualRealmAnchorState K2Node_CustomEvent_state, enum class EDualRealmAnchorState CallFunc_GetState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchorActorBase_BP_C", "ExecuteUbergraph_DualRealmAnchorActorBase_BP");

	Params::ADualRealmAnchorActorBase_BP_C_ExecuteUbergraph_DualRealmAnchorActorBase_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_state = K2Node_CustomEvent_state;
	Parms.CallFunc_GetState_ReturnValue = CallFunc_GetState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


