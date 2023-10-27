#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_CombatNumConsecutiveHitReacts.Decorator_CombatNumConsecutiveHitReacts_C
// (None)

class UClass* UDecorator_CombatNumConsecutiveHitReacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_CombatNumConsecutiveHitReacts_C");

	return Clss;
}


// Decorator_CombatNumConsecutiveHitReacts_C Decorator_CombatNumConsecutiveHitReacts.Default__Decorator_CombatNumConsecutiveHitReacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_CombatNumConsecutiveHitReacts_C* UDecorator_CombatNumConsecutiveHitReacts_C::GetDefaultObj()
{
	static class UDecorator_CombatNumConsecutiveHitReacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_CombatNumConsecutiveHitReacts_C*>(UDecorator_CombatNumConsecutiveHitReacts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Decorator_CombatNumConsecutiveHitReacts.Decorator_CombatNumConsecutiveHitReacts_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PerformConditionCheckAI_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UDecorator_CombatNumConsecutiveHitReacts_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_PerformConditionCheckAI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Decorator_CombatNumConsecutiveHitReacts_C", "PerformConditionCheckAI");

	Params::UDecorator_CombatNumConsecutiveHitReacts_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_PerformConditionCheckAI_ReturnValue = CallFunc_PerformConditionCheckAI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


