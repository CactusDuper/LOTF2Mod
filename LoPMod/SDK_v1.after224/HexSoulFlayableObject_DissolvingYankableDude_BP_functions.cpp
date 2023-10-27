#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HexSoulFlayableObject_DissolvingYankableDude_BP.HexSoulFlayableObject_DissolvingYankableDude_BP_C
// (Actor)

class UClass* AHexSoulFlayableObject_DissolvingYankableDude_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HexSoulFlayableObject_DissolvingYankableDude_BP_C");

	return Clss;
}


// HexSoulFlayableObject_DissolvingYankableDude_BP_C HexSoulFlayableObject_DissolvingYankableDude_BP.Default__HexSoulFlayableObject_DissolvingYankableDude_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHexSoulFlayableObject_DissolvingYankableDude_BP_C* AHexSoulFlayableObject_DissolvingYankableDude_BP_C::GetDefaultObj()
{
	static class AHexSoulFlayableObject_DissolvingYankableDude_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHexSoulFlayableObject_DissolvingYankableDude_BP_C*>(AHexSoulFlayableObject_DissolvingYankableDude_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HexSoulFlayableObject_DissolvingYankableDude_BP.HexSoulFlayableObject_DissolvingYankableDude_BP_C.InitializeForSoulFlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHexSoulFlayableObject_DissolvingYankableDude_BP_C::InitializeForSoulFlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_BP_C", "InitializeForSoulFlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexSoulFlayableObject_DissolvingYankableDude_BP.HexSoulFlayableObject_DissolvingYankableDude_BP_C.OnSoulFlayYank
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHexSoulFlayableObject_DissolvingYankableDude_BP_C::OnSoulFlayYank()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_BP_C", "OnSoulFlayYank");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexSoulFlayableObject_DissolvingYankableDude_BP.HexSoulFlayableObject_DissolvingYankableDude_BP_C.OnDissolveStart_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReverse                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexSoulFlayableObject_DissolvingYankableDude_BP_C::OnDissolveStart_Event(bool IsReverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_BP_C", "OnDissolveStart_Event");

	Params::AHexSoulFlayableObject_DissolvingYankableDude_BP_C_OnDissolveStart_Event_Params Parms{};

	Parms.IsReverse = IsReverse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HexSoulFlayableObject_DissolvingYankableDude_BP.HexSoulFlayableObject_DissolvingYankableDude_BP_C.ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsReverse                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexSoulFlayableObject_DissolvingYankableDude_BP_C::ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_IsReverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_BP_C", "ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_BP");

	Params::AHexSoulFlayableObject_DissolvingYankableDude_BP_C_ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_IsReverse = K2Node_CustomEvent_IsReverse;

	UObject::ProcessEvent(Func, &Parms);

}

}


