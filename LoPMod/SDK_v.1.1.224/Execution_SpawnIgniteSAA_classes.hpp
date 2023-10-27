#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x160 - 0x40)
// BlueprintGeneratedClass Execution_SpawnIgniteSAA.Execution_SpawnIgniteSAA_C
class UExecution_SpawnIgniteSAA_C : public UGameplayEffectExecutionCalculation
{
public:
	struct FSpawnDefinition                      Spawn_Definition;                                  // 0x40(0x120)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UExecution_SpawnIgniteSAA_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponentFromExecutionParams_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue);
};

}


