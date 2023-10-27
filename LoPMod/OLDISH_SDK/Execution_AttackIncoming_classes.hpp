#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass Execution_AttackIncoming.Execution_AttackIncoming_C
class UExecution_AttackIncoming_C : public UGameplayEffectExecutionCalculation
{
public:

	static class UClass* StaticClass();
	static class UExecution_AttackIncoming_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


