#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_NPC_CombatNumConsecutiveHits.Decorator_NPC_CombatNumConsecutiveHits_C
// (None)

class UClass* UDecorator_NPC_CombatNumConsecutiveHits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_NPC_CombatNumConsecutiveHits_C");

	return Clss;
}


// Decorator_NPC_CombatNumConsecutiveHits_C Decorator_NPC_CombatNumConsecutiveHits.Default__Decorator_NPC_CombatNumConsecutiveHits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_NPC_CombatNumConsecutiveHits_C* UDecorator_NPC_CombatNumConsecutiveHits_C::GetDefaultObj()
{
	static class UDecorator_NPC_CombatNumConsecutiveHits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_NPC_CombatNumConsecutiveHits_C*>(UDecorator_NPC_CombatNumConsecutiveHits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Decorator_NPC_CombatNumConsecutiveHits.Decorator_NPC_CombatNumConsecutiveHits_C.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDecorator_NPC_CombatNumConsecutiveHits_C::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Decorator_NPC_CombatNumConsecutiveHits_C", "ReceiveExecutionStartAI");

	Params::UDecorator_NPC_CombatNumConsecutiveHits_C_ReceiveExecutionStartAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Decorator_NPC_CombatNumConsecutiveHits.Decorator_NPC_CombatNumConsecutiveHits_C.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDecorator_NPC_CombatNumConsecutiveHits_C::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Decorator_NPC_CombatNumConsecutiveHits_C", "ReceiveObserverActivatedAI");

	Params::UDecorator_NPC_CombatNumConsecutiveHits_C_ReceiveObserverActivatedAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Decorator_NPC_CombatNumConsecutiveHits.Decorator_NPC_CombatNumConsecutiveHits_C.ExecuteUbergraph_Decorator_NPC_CombatNumConsecutiveHits
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBlackboardValueAsInt_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDecorator_NPC_CombatNumConsecutiveHits_C::ExecuteUbergraph_Decorator_NPC_CombatNumConsecutiveHits(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Decorator_NPC_CombatNumConsecutiveHits_C", "ExecuteUbergraph_Decorator_NPC_CombatNumConsecutiveHits");

	Params::UDecorator_NPC_CombatNumConsecutiveHits_C_ExecuteUbergraph_Decorator_NPC_CombatNumConsecutiveHits_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_GetBlackboardValueAsInt_ReturnValue = CallFunc_GetBlackboardValueAsInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


