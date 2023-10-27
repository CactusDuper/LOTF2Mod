#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_EnemyFrontstab.BTTask_EnemyFrontstab_C
// (None)

class UClass* UBTTask_EnemyFrontstab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_EnemyFrontstab_C");

	return Clss;
}


// BTTask_EnemyFrontstab_C BTTask_EnemyFrontstab.Default__BTTask_EnemyFrontstab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_EnemyFrontstab_C* UBTTask_EnemyFrontstab_C::GetDefaultObj()
{
	static class UBTTask_EnemyFrontstab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_EnemyFrontstab_C*>(UBTTask_EnemyFrontstab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_EnemyFrontstab.BTTask_EnemyFrontstab_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_EnemyFrontstab_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_EnemyFrontstab_C", "ReceiveExecuteAI");

	Params::UBTTask_EnemyFrontstab_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_EnemyFrontstab.BTTask_EnemyFrontstab_C.ExecuteUbergraph_BTTask_EnemyFrontstab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexSyncedAnimComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_EnemyFrontstab_C::ExecuteUbergraph_BTTask_EnemyFrontstab(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UHexSyncedAnimComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_EnemyFrontstab_C", "ExecuteUbergraph_BTTask_EnemyFrontstab");

	Params::UBTTask_EnemyFrontstab_C_ExecuteUbergraph_BTTask_EnemyFrontstab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


