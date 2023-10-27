#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTAITask_RemoveEffectByAppliedTag.BTAITask_RemoveEffectByAppliedTag_C
// (None)

class UClass* UBTAITask_RemoveEffectByAppliedTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTAITask_RemoveEffectByAppliedTag_C");

	return Clss;
}


// BTAITask_RemoveEffectByAppliedTag_C BTAITask_RemoveEffectByAppliedTag.Default__BTAITask_RemoveEffectByAppliedTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTAITask_RemoveEffectByAppliedTag_C* UBTAITask_RemoveEffectByAppliedTag_C::GetDefaultObj()
{
	static class UBTAITask_RemoveEffectByAppliedTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTAITask_RemoveEffectByAppliedTag_C*>(UBTAITask_RemoveEffectByAppliedTag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTAITask_RemoveEffectByAppliedTag.BTAITask_RemoveEffectByAppliedTag_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTAITask_RemoveEffectByAppliedTag_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTAITask_RemoveEffectByAppliedTag_C", "ReceiveExecuteAI");

	Params::UBTAITask_RemoveEffectByAppliedTag_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTAITask_RemoveEffectByAppliedTag.BTAITask_RemoveEffectByAppliedTag_C.ExecuteUbergraph_BTAITask_RemoveEffectByAppliedTag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTAITask_RemoveEffectByAppliedTag_C::ExecuteUbergraph_BTAITask_RemoveEffectByAppliedTag(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTAITask_RemoveEffectByAppliedTag_C", "ExecuteUbergraph_BTAITask_RemoveEffectByAppliedTag");

	Params::UBTAITask_RemoveEffectByAppliedTag_C_ExecuteUbergraph_BTAITask_RemoveEffectByAppliedTag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


