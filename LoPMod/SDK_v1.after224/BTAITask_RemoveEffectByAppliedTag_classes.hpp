#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xD0 - 0xA8)
// BlueprintGeneratedClass BTAITask_RemoveEffectByAppliedTag.BTAITask_RemoveEffectByAppliedTag_C
class UBTAITask_RemoveEffectByAppliedTag_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 GameplayTag;                                       // 0xB0(0x20)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTAITask_RemoveEffectByAppliedTag_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTAITask_RemoveEffectByAppliedTag(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


