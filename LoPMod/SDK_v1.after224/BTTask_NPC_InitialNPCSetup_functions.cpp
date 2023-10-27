#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_NPC_InitialNPCSetup.BTTask_NPC_InitialNPCSetup_C
// (None)

class UClass* UBTTask_NPC_InitialNPCSetup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_NPC_InitialNPCSetup_C");

	return Clss;
}


// BTTask_NPC_InitialNPCSetup_C BTTask_NPC_InitialNPCSetup.Default__BTTask_NPC_InitialNPCSetup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_NPC_InitialNPCSetup_C* UBTTask_NPC_InitialNPCSetup_C::GetDefaultObj()
{
	static class UBTTask_NPC_InitialNPCSetup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_NPC_InitialNPCSetup_C*>(UBTTask_NPC_InitialNPCSetup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_NPC_InitialNPCSetup.BTTask_NPC_InitialNPCSetup_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_NPC_InitialNPCSetup_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_NPC_InitialNPCSetup_C", "ReceiveExecuteAI");

	Params::UBTTask_NPC_InitialNPCSetup_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_NPC_InitialNPCSetup.BTTask_NPC_InitialNPCSetup_C.ExecuteUbergraph_BTTask_NPC_InitialNPCSetup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBTTask_NPC_InitialNPCSetup_C::ExecuteUbergraph_BTTask_NPC_InitialNPCSetup(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_NPC_InitialNPCSetup_C", "ExecuteUbergraph_BTTask_NPC_InitialNPCSetup");

	Params::UBTTask_NPC_InitialNPCSetup_C_ExecuteUbergraph_BTTask_NPC_InitialNPCSetup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


