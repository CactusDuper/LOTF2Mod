#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Summon_RhogarHound_Alarm.BP_Summon_RhogarHound_Alarm_C
// (Actor, Pawn)

class UClass* ABP_Summon_RhogarHound_Alarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Summon_RhogarHound_Alarm_C");

	return Clss;
}


// BP_Summon_RhogarHound_Alarm_C BP_Summon_RhogarHound_Alarm.Default__BP_Summon_RhogarHound_Alarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Summon_RhogarHound_Alarm_C* ABP_Summon_RhogarHound_Alarm_C::GetDefaultObj()
{
	static class ABP_Summon_RhogarHound_Alarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Summon_RhogarHound_Alarm_C*>(ABP_Summon_RhogarHound_Alarm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Summon_RhogarHound_Alarm.BP_Summon_RhogarHound_Alarm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Summon_RhogarHound_Alarm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Summon_RhogarHound_Alarm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Summon_RhogarHound_Alarm.BP_Summon_RhogarHound_Alarm_C.BndEvt__BP_Summon_RhogarHound_Alarm_DissolveFXComponent_K2Node_ComponentBoundEvent_0_OnDissolveStart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsReverse                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Summon_RhogarHound_Alarm_C::BndEvt__BP_Summon_RhogarHound_Alarm_DissolveFXComponent_K2Node_ComponentBoundEvent_0_OnDissolveStart__DelegateSignature(bool IsReverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Summon_RhogarHound_Alarm_C", "BndEvt__BP_Summon_RhogarHound_Alarm_DissolveFXComponent_K2Node_ComponentBoundEvent_0_OnDissolveStart__DelegateSignature");

	Params::ABP_Summon_RhogarHound_Alarm_C_BndEvt__BP_Summon_RhogarHound_Alarm_DissolveFXComponent_K2Node_ComponentBoundEvent_0_OnDissolveStart__DelegateSignature_Params Parms{};

	Parms.IsReverse = IsReverse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Summon_RhogarHound_Alarm.BP_Summon_RhogarHound_Alarm_C.ExecuteUbergraph_BP_Summon_RhogarHound_Alarm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsReverse                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAnathemaComponent*        CallFunc_GetAkComponentHead_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Summon_RhogarHound_Alarm_C::ExecuteUbergraph_BP_Summon_RhogarHound_Alarm(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, bool K2Node_ComponentBoundEvent_IsReverse, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Summon_RhogarHound_Alarm_C", "ExecuteUbergraph_BP_Summon_RhogarHound_Alarm");

	Params::ABP_Summon_RhogarHound_Alarm_C_ExecuteUbergraph_BP_Summon_RhogarHound_Alarm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.K2Node_ComponentBoundEvent_IsReverse = K2Node_ComponentBoundEvent_IsReverse;
	Parms.CallFunc_GetAkComponentHead_ReturnValue = CallFunc_GetAkComponentHead_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue_1 = CallFunc_PostAkEvent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


