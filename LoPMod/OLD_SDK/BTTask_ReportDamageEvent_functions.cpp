#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_ReportDamageEvent.BTTask_ReportDamageEvent_C
// (None)

class UClass* UBTTask_ReportDamageEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_ReportDamageEvent_C");

	return Clss;
}


// BTTask_ReportDamageEvent_C BTTask_ReportDamageEvent.Default__BTTask_ReportDamageEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_ReportDamageEvent_C* UBTTask_ReportDamageEvent_C::GetDefaultObj()
{
	static class UBTTask_ReportDamageEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_ReportDamageEvent_C*>(UBTTask_ReportDamageEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_ReportDamageEvent.BTTask_ReportDamageEvent_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_ReportDamageEvent_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ReportDamageEvent_C", "ReceiveExecuteAI");

	Params::UBTTask_ReportDamageEvent_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_ReportDamageEvent.BTTask_ReportDamageEvent_C.ExecuteUbergraph_BTTask_ReportDamageEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseAIController*           K2Node_DynamicCast_AsBase_AIController                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAITarget*                   CallFunc_K2_GetCurrentTarget_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActor_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_ReportDamageEvent_C::ExecuteUbergraph_BTTask_ReportDamageEvent(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAIController* K2Node_DynamicCast_AsBase_AIController, bool K2Node_DynamicCast_bSuccess, class UAITarget* CallFunc_K2_GetCurrentTarget_ReturnValue, class AActor* CallFunc_GetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ReportDamageEvent_C", "ExecuteUbergraph_BTTask_ReportDamageEvent");

	Params::UBTTask_ReportDamageEvent_C_ExecuteUbergraph_BTTask_ReportDamageEvent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBase_AIController = K2Node_DynamicCast_AsBase_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetCurrentTarget_ReturnValue = CallFunc_K2_GetCurrentTarget_ReturnValue;
	Parms.CallFunc_GetActor_ReturnValue = CallFunc_GetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


