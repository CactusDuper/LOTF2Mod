#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BaseTranscend.GA_BaseTranscend_C
// (None)

class UClass* UGA_BaseTranscend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BaseTranscend_C");

	return Clss;
}


// GA_BaseTranscend_C GA_BaseTranscend.Default__GA_BaseTranscend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BaseTranscend_C* UGA_BaseTranscend_C::GetDefaultObj()
{
	static class UGA_BaseTranscend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BaseTranscend_C*>(UGA_BaseTranscend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_BaseTranscend.GA_BaseTranscend_C.TriggerTranscendCue
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EActivateRealmReason    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BaseTranscend_C::TriggerTranscendCue(enum class EActivateRealmReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_BaseTranscend_C", "TriggerTranscendCue");

	Params::UGA_BaseTranscend_C_TriggerTranscendCue_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BaseTranscend.GA_BaseTranscend_C.ExecuteUbergraph_GA_BaseTranscend
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActivateRealmReason    K2Node_Event_reason                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEvent_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BaseTranscend_C::ExecuteUbergraph_GA_BaseTranscend(int32 EntryPoint, enum class EActivateRealmReason K2Node_Event_reason, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_SendGameplayEvent_ReturnValue, int32 CallFunc_SendGameplayEvent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_BaseTranscend_C", "ExecuteUbergraph_GA_BaseTranscend");

	Params::UGA_BaseTranscend_C_ExecuteUbergraph_GA_BaseTranscend_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_reason = K2Node_Event_reason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SendGameplayEvent_ReturnValue = CallFunc_SendGameplayEvent_ReturnValue;
	Parms.CallFunc_SendGameplayEvent_ReturnValue_1 = CallFunc_SendGameplayEvent_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


