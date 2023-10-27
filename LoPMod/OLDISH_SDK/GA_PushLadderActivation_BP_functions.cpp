#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PushLadderActivation_BP.GA_PushLadderActivation_BP_C
// (None)

class UClass* UGA_PushLadderActivation_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PushLadderActivation_BP_C");

	return Clss;
}


// GA_PushLadderActivation_BP_C GA_PushLadderActivation_BP.Default__GA_PushLadderActivation_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PushLadderActivation_BP_C* UGA_PushLadderActivation_BP_C::GetDefaultObj()
{
	static class UGA_PushLadderActivation_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PushLadderActivation_BP_C*>(UGA_PushLadderActivation_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_PushLadderActivation_BP.GA_PushLadderActivation_BP_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_PushLadderActivation_BP_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PushLadderActivation_BP_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_PushLadderActivation_BP_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PushLadderActivation_BP.GA_PushLadderActivation_BP_C.ExecuteUbergraph_GA_PushLadderActivation_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UInteractionContext*         CallFunc_GetInteractionContextFromTargetData_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetInteractor_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetInteractableObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_KickableLadder_C*        K2Node_DynamicCast_AsBP_Kickable_Ladder                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PushLadderActivation_BP_C::ExecuteUbergraph_GA_PushLadderActivation_BP(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UInteractionContext* CallFunc_GetInteractionContextFromTargetData_ReturnValue, class AActor* CallFunc_GetInteractor_ReturnValue, class AActor* CallFunc_GetInteractableObject_ReturnValue, class ABP_KickableLadder_C* K2Node_DynamicCast_AsBP_Kickable_Ladder, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PushLadderActivation_BP_C", "ExecuteUbergraph_GA_PushLadderActivation_BP");

	Params::UGA_PushLadderActivation_BP_C_ExecuteUbergraph_GA_PushLadderActivation_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetInteractionContextFromTargetData_ReturnValue = CallFunc_GetInteractionContextFromTargetData_ReturnValue;
	Parms.CallFunc_GetInteractor_ReturnValue = CallFunc_GetInteractor_ReturnValue;
	Parms.CallFunc_GetInteractableObject_ReturnValue = CallFunc_GetInteractableObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Kickable_Ladder = K2Node_DynamicCast_AsBP_Kickable_Ladder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


