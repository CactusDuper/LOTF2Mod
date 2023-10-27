#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_PROTO_CheckMovementMode.BTDecorator_PROTO_CheckMovementMode_C
// (None)

class UClass* UBTDecorator_PROTO_CheckMovementMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_PROTO_CheckMovementMode_C");

	return Clss;
}


// BTDecorator_PROTO_CheckMovementMode_C BTDecorator_PROTO_CheckMovementMode.Default__BTDecorator_PROTO_CheckMovementMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_PROTO_CheckMovementMode_C* UBTDecorator_PROTO_CheckMovementMode_C::GetDefaultObj()
{
	static class UBTDecorator_PROTO_CheckMovementMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_PROTO_CheckMovementMode_C*>(UBTDecorator_PROTO_CheckMovementMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTDecorator_PROTO_CheckMovementMode.BTDecorator_PROTO_CheckMovementMode_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTDecorator_PROTO_CheckMovementMode_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_PROTO_CheckMovementMode_C", "PerformConditionCheckAI");

	Params::UBTDecorator_PROTO_CheckMovementMode_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


