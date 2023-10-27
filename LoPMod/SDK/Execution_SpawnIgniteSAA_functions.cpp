#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Execution_SpawnIgniteSAA.Execution_SpawnIgniteSAA_C
// (None)

class UClass* UExecution_SpawnIgniteSAA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Execution_SpawnIgniteSAA_C");

	return Clss;
}


// Execution_SpawnIgniteSAA_C Execution_SpawnIgniteSAA.Default__Execution_SpawnIgniteSAA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExecution_SpawnIgniteSAA_C* UExecution_SpawnIgniteSAA_C::GetDefaultObj()
{
	static class UExecution_SpawnIgniteSAA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExecution_SpawnIgniteSAA_C*>(UExecution_SpawnIgniteSAA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Execution_SpawnIgniteSAA.Execution_SpawnIgniteSAA_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm)
// class UAbilitySystemComponent*     CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SpawnAutonomousAbilityActor_ReturnValue                 (ReferenceParm)

void UExecution_SpawnIgniteSAA_C::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Execution_SpawnIgniteSAA_C", "Execute");

	Params::UExecution_SpawnIgniteSAA_C_Execute_Params Parms{};

	Parms.ExecutionParams = ExecutionParams;
	Parms.CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue = CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnAutonomousAbilityActor_ReturnValue = CallFunc_SpawnAutonomousAbilityActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);

}

}


