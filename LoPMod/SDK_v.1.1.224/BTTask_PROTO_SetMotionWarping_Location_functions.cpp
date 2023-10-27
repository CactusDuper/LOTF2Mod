#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_PROTO_SetMotionWarping_Location.BTTask_PROTO_SetMotionWarping_Location_C
// (None)

class UClass* UBTTask_PROTO_SetMotionWarping_Location_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PROTO_SetMotionWarping_Location_C");

	return Clss;
}


// BTTask_PROTO_SetMotionWarping_Location_C BTTask_PROTO_SetMotionWarping_Location.Default__BTTask_PROTO_SetMotionWarping_Location_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_PROTO_SetMotionWarping_Location_C* UBTTask_PROTO_SetMotionWarping_Location_C::GetDefaultObj()
{
	static class UBTTask_PROTO_SetMotionWarping_Location_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PROTO_SetMotionWarping_Location_C*>(UBTTask_PROTO_SetMotionWarping_Location_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_PROTO_SetMotionWarping_Location.BTTask_PROTO_SetMotionWarping_Location_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_PROTO_SetMotionWarping_Location_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PROTO_SetMotionWarping_Location_C", "ReceiveExecuteAI");

	Params::UBTTask_PROTO_SetMotionWarping_Location_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PROTO_SetMotionWarping_Location.BTTask_PROTO_SetMotionWarping_Location_C.ExecuteUbergraph_BTTask_PROTO_SetMotionWarping_Location
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMotionWarping_Location_SetWarpTarget                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PROTO_SetMotionWarping_Location_C::ExecuteUbergraph_BTTask_PROTO_SetMotionWarping_Location(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_SetMotionWarping_Location_SetWarpTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PROTO_SetMotionWarping_Location_C", "ExecuteUbergraph_BTTask_PROTO_SetMotionWarping_Location");

	Params::UBTTask_PROTO_SetMotionWarping_Location_C_ExecuteUbergraph_BTTask_PROTO_SetMotionWarping_Location_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_SetMotionWarping_Location_SetWarpTarget = CallFunc_SetMotionWarping_Location_SetWarpTarget;

	UObject::ProcessEvent(Func, &Parms);

}

}


