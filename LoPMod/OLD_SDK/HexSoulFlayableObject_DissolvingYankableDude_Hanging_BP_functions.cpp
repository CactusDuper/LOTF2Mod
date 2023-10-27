#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C
// (Actor)

class UClass* AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C");

	return Clss;
}


// HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.Default__HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C* AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::GetDefaultObj()
{
	static class AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C*>(AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C.Dissolve Socket Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::Dissolve_Socket_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C", "Dissolve Socket Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C.Dissolve Socket Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::Dissolve_Socket_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C", "Dissolve Socket Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C.OnDissolveStart_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReverse                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::OnDissolveStart_Event(bool IsReverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C", "OnDissolveStart_Event");

	Params::AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C_OnDissolveStart_Event_Params Parms{};

	Parms.IsReverse = IsReverse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP.HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C.ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsReverse                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C::ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP(int32 EntryPoint, bool K2Node_Event_IsReverse, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C", "ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP");

	Params::AHexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_C_ExecuteUbergraph_HexSoulFlayableObject_DissolvingYankableDude_Hanging_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsReverse = K2Node_Event_IsReverse;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue_1 = CallFunc_MakeVector4_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


