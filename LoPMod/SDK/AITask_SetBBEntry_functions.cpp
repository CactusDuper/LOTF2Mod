#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AITask_SetBBEntry.AITask_SetBBEntry_C
// (None)

class UClass* UAITask_SetBBEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_SetBBEntry_C");

	return Clss;
}


// AITask_SetBBEntry_C AITask_SetBBEntry.Default__AITask_SetBBEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAITask_SetBBEntry_C* UAITask_SetBBEntry_C::GetDefaultObj()
{
	static class UAITask_SetBBEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_SetBBEntry_C*>(UAITask_SetBBEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AITask_SetBBEntry.AITask_SetBBEntry_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAITask_SetBBEntry_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_SetBBEntry_C", "ReceiveExecuteAI");

	Params::UAITask_SetBBEntry_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AITask_SetBBEntry.AITask_SetBBEntry_C.ExecuteUbergraph_AITask_SetBBEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAITask_SetBBEntry_C::ExecuteUbergraph_AITask_SetBBEntry(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_SetBBEntry_C", "ExecuteUbergraph_AITask_SetBBEntry");

	Params::UAITask_SetBBEntry_C_ExecuteUbergraph_AITask_SetBBEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


