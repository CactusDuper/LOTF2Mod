#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_KickBridgeActivation_BP.GA_KickBridgeActivation_BP_C
// (None)

class UClass* UGA_KickBridgeActivation_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_KickBridgeActivation_BP_C");

	return Clss;
}


// GA_KickBridgeActivation_BP_C GA_KickBridgeActivation_BP.Default__GA_KickBridgeActivation_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_KickBridgeActivation_BP_C* UGA_KickBridgeActivation_BP_C::GetDefaultObj()
{
	static class UGA_KickBridgeActivation_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_KickBridgeActivation_BP_C*>(UGA_KickBridgeActivation_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_KickBridgeActivation_BP.GA_KickBridgeActivation_BP_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_KickBridgeActivation_BP_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_KickBridgeActivation_BP_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_KickBridgeActivation_BP_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_KickBridgeActivation_BP.GA_KickBridgeActivation_BP_C.ExecuteUbergraph_GA_KickBridgeActivation_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UInteractionContext*         CallFunc_GetInteractionContextFromTargetData_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetInteractor_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetInteractableObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_KickableBridge_C*        K2Node_DynamicCast_AsBP_Kickable_Bridge                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_KickBridgeActivation_BP_C::ExecuteUbergraph_GA_KickBridgeActivation_BP(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UInteractionContext* CallFunc_GetInteractionContextFromTargetData_ReturnValue, class AActor* CallFunc_GetInteractor_ReturnValue, class AActor* CallFunc_GetInteractableObject_ReturnValue, class ABP_KickableBridge_C* K2Node_DynamicCast_AsBP_Kickable_Bridge, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_KickBridgeActivation_BP_C", "ExecuteUbergraph_GA_KickBridgeActivation_BP");

	Params::UGA_KickBridgeActivation_BP_C_ExecuteUbergraph_GA_KickBridgeActivation_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetInteractionContextFromTargetData_ReturnValue = CallFunc_GetInteractionContextFromTargetData_ReturnValue;
	Parms.CallFunc_GetInteractor_ReturnValue = CallFunc_GetInteractor_ReturnValue;
	Parms.CallFunc_GetInteractableObject_ReturnValue = CallFunc_GetInteractableObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Kickable_Bridge = K2Node_DynamicCast_AsBP_Kickable_Bridge;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


