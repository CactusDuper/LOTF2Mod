#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_SetStatusBarVisibility.BTTask_SetStatusBarVisibility_C
// (None)

class UClass* UBTTask_SetStatusBarVisibility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_SetStatusBarVisibility_C");

	return Clss;
}


// BTTask_SetStatusBarVisibility_C BTTask_SetStatusBarVisibility.Default__BTTask_SetStatusBarVisibility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_SetStatusBarVisibility_C* UBTTask_SetStatusBarVisibility_C::GetDefaultObj()
{
	static class UBTTask_SetStatusBarVisibility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_SetStatusBarVisibility_C*>(UBTTask_SetStatusBarVisibility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_SetStatusBarVisibility.BTTask_SetStatusBarVisibility_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetStatusBarVisibility_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_SetStatusBarVisibility_C", "ReceiveExecuteAI");

	Params::UBTTask_SetStatusBarVisibility_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_SetStatusBarVisibility.BTTask_SetStatusBarVisibility_C.ExecuteUbergraph_BTTask_SetStatusBarVisibility
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseAICharacter_BP_C*       K2Node_DynamicCast_AsBase_AICharacter_BP                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetStatusBarVisibility_C::ExecuteUbergraph_BTTask_SetStatusBarVisibility(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAICharacter_BP_C* K2Node_DynamicCast_AsBase_AICharacter_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_SetStatusBarVisibility_C", "ExecuteUbergraph_BTTask_SetStatusBarVisibility");

	Params::UBTTask_SetStatusBarVisibility_C_ExecuteUbergraph_BTTask_SetStatusBarVisibility_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBase_AICharacter_BP = K2Node_DynamicCast_AsBase_AICharacter_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


