#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Execution_AttackIncoming.Execution_AttackIncoming_C
// (None)

class UClass* UExecution_AttackIncoming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Execution_AttackIncoming_C");

	return Clss;
}


// Execution_AttackIncoming_C Execution_AttackIncoming.Default__Execution_AttackIncoming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExecution_AttackIncoming_C* UExecution_AttackIncoming_C::GetDefaultObj()
{
	static class UExecution_AttackIncoming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExecution_AttackIncoming_C*>(UExecution_AttackIncoming_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Execution_AttackIncoming.Execution_AttackIncoming_C.Execute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm)
// class UAbilitySystemComponent*     CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UExecution_AttackIncoming_C::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Execution_AttackIncoming_C", "Execute");

	Params::UExecution_AttackIncoming_C_Execute_Params Parms{};

	Parms.ExecutionParams = ExecutionParams;
	Parms.CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue = CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);

}

}


