#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C
// (Actor)

class UClass* AAnathemaInteractableDoor_Base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaInteractableDoor_Base_BP_C");

	return Clss;
}


// AnathemaInteractableDoor_Base_BP_C AnathemaInteractableDoor_Base_BP.Default__AnathemaInteractableDoor_Base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaInteractableDoor_Base_BP_C* AAnathemaInteractableDoor_Base_BP_C::GetDefaultObj()
{
	static class AAnathemaInteractableDoor_Base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaInteractableDoor_Base_BP_C*>(AAnathemaInteractableDoor_Base_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.TriggerClose
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AAnathemaInteractableDoor_Base_BP_C::TriggerClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "TriggerClose");

	Params::AAnathemaInteractableDoor_Base_BP_C_TriggerClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.TriggerLock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AAnathemaInteractableDoor_Base_BP_C::TriggerLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "TriggerLock");

	Params::AAnathemaInteractableDoor_Base_BP_C_TriggerLock_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.TriggerOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AAnathemaInteractableDoor_Base_BP_C::TriggerOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "TriggerOpen");

	Params::AAnathemaInteractableDoor_Base_BP_C_TriggerOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.TriggerUnlock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AAnathemaInteractableDoor_Base_BP_C::TriggerUnlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "TriggerUnlock");

	Params::AAnathemaInteractableDoor_Base_BP_C_TriggerUnlock_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.NotifySetDoorState
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Open                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaInteractableDoor_Base_BP_C::NotifySetDoorState(bool Is_Open)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "NotifySetDoorState");

	Params::AAnathemaInteractableDoor_Base_BP_C_NotifySetDoorState_Params Parms{};

	Parms.Is_Open = Is_Open;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.ConditionalFlipDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double AAnathemaInteractableDoor_Base_BP_C::ConditionalFlipDirection(double Value, bool Forward, bool Temp_bool_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, double K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "ConditionalFlipDirection");

	Params::AAnathemaInteractableDoor_Base_BP_C_ConditionalFlipDirection_Params Parms{};

	Parms.Value = Value;
	Parms.Forward = Forward;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.UpdateArrows
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnathemaInteractableDoor_Base_BP_C::UpdateArrows()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "UpdateArrows");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnathemaInteractableDoor_Base_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnathemaInteractableDoor_Base_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C.ExecuteUbergraph_AnathemaInteractableDoor_Base_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaInteractableDoor_Base_BP_C::ExecuteUbergraph_AnathemaInteractableDoor_Base_BP(int32 EntryPoint, bool CallFunc_IsOpen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaInteractableDoor_Base_BP_C", "ExecuteUbergraph_AnathemaInteractableDoor_Base_BP");

	Params::AAnathemaInteractableDoor_Base_BP_C_ExecuteUbergraph_AnathemaInteractableDoor_Base_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


