#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnchorInteract.GA_AnchorInteract_C
// (None)

class UClass* UGA_AnchorInteract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnchorInteract_C");

	return Clss;
}


// GA_AnchorInteract_C GA_AnchorInteract.Default__GA_AnchorInteract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnchorInteract_C* UGA_AnchorInteract_C::GetDefaultObj()
{
	static class UGA_AnchorInteract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnchorInteract_C*>(UGA_AnchorInteract_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_AnchorInteract.GA_AnchorInteract_C.OnTriggerFirstTimeAnchorActivationVFX_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_AnchorInteract_C::OnTriggerFirstTimeAnchorActivationVFX_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AnchorInteract_C", "OnTriggerFirstTimeAnchorActivationVFX_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_AnchorInteract.GA_AnchorInteract_C.OnTriggerAnchorActivation_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_AnchorInteract_C::OnTriggerAnchorActivation_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AnchorInteract_C", "OnTriggerAnchorActivation_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_AnchorInteract.GA_AnchorInteract_C.ExecuteUbergraph_GA_AnchorInteract
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmAnchorActor*       CallFunc_GetInteractionAnchor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADualRealmAnchorActor*       CallFunc_GetInteractionAnchor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADualRealmAnchorActorBase_BP_C*K2Node_DynamicCast_AsDual_Realm_Anchor_Actor_Base_BP             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AnchorInteract_C::ExecuteUbergraph_GA_AnchorInteract(int32 EntryPoint, class ADualRealmAnchorActor* CallFunc_GetInteractionAnchor_ReturnValue, class ADualRealmAnchorActor* CallFunc_GetInteractionAnchor_ReturnValue_1, class ADualRealmAnchorActorBase_BP_C* K2Node_DynamicCast_AsDual_Realm_Anchor_Actor_Base_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AnchorInteract_C", "ExecuteUbergraph_GA_AnchorInteract");

	Params::UGA_AnchorInteract_C_ExecuteUbergraph_GA_AnchorInteract_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInteractionAnchor_ReturnValue = CallFunc_GetInteractionAnchor_ReturnValue;
	Parms.CallFunc_GetInteractionAnchor_ReturnValue_1 = CallFunc_GetInteractionAnchor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDual_Realm_Anchor_Actor_Base_BP = K2Node_DynamicCast_AsDual_Realm_Anchor_Actor_Base_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


