#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DualRealmAnchor_Ancient_Type3_BP.DualRealmAnchor_Ancient_Type3_BP_C
// (Actor)

class UClass* ADualRealmAnchor_Ancient_Type3_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualRealmAnchor_Ancient_Type3_BP_C");

	return Clss;
}


// DualRealmAnchor_Ancient_Type3_BP_C DualRealmAnchor_Ancient_Type3_BP.Default__DualRealmAnchor_Ancient_Type3_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADualRealmAnchor_Ancient_Type3_BP_C* ADualRealmAnchor_Ancient_Type3_BP_C::GetDefaultObj()
{
	static class ADualRealmAnchor_Ancient_Type3_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADualRealmAnchor_Ancient_Type3_BP_C*>(ADualRealmAnchor_Ancient_Type3_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DualRealmAnchor_Ancient_Type3_BP.DualRealmAnchor_Ancient_Type3_BP_C.OnActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmAnchor_Ancient_Type3_BP_C::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchor_Ancient_Type3_BP_C", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmAnchor_Ancient_Type3_BP.DualRealmAnchor_Ancient_Type3_BP_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmAnchor_Ancient_Type3_BP_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchor_Ancient_Type3_BP_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmAnchor_Ancient_Type3_BP.DualRealmAnchor_Ancient_Type3_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmAnchor_Ancient_Type3_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchor_Ancient_Type3_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmAnchor_Ancient_Type3_BP.DualRealmAnchor_Ancient_Type3_BP_C.ExecuteUbergraph_DualRealmAnchor_Ancient_Type3_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDualRealmAnchorState   CallFunc_GetState_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmAnchor_Ancient_Type3_BP_C::ExecuteUbergraph_DualRealmAnchor_Ancient_Type3_BP(int32 EntryPoint, enum class EDualRealmAnchorState CallFunc_GetState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmAnchor_Ancient_Type3_BP_C", "ExecuteUbergraph_DualRealmAnchor_Ancient_Type3_BP");

	Params::ADualRealmAnchor_Ancient_Type3_BP_C_ExecuteUbergraph_DualRealmAnchor_Ancient_Type3_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetState_ReturnValue = CallFunc_GetState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


