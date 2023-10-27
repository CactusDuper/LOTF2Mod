#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_ClearBBEntry.BTTask_ClearBBEntry_C
// (None)

class UClass* UBTTask_ClearBBEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_ClearBBEntry_C");

	return Clss;
}


// BTTask_ClearBBEntry_C BTTask_ClearBBEntry.Default__BTTask_ClearBBEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_ClearBBEntry_C* UBTTask_ClearBBEntry_C::GetDefaultObj()
{
	static class UBTTask_ClearBBEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_ClearBBEntry_C*>(UBTTask_ClearBBEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_ClearBBEntry.BTTask_ClearBBEntry_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearBBEntry_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ClearBBEntry_C", "ReceiveExecuteAI");

	Params::UBTTask_ClearBBEntry_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_ClearBBEntry.BTTask_ClearBBEntry_C.ExecuteUbergraph_BTTask_ClearBBEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_ClearBBEntry_C::ExecuteUbergraph_BTTask_ClearBBEntry(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_ClearBBEntry_C", "ExecuteUbergraph_BTTask_ClearBBEntry");

	Params::UBTTask_ClearBBEntry_C_ExecuteUbergraph_BTTask_ClearBBEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


