#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x500 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C
class UBattleEffectAbiltiy_SlowSyphonedTargets_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class ALOTF2Character*, struct FActiveGameplayEffectHandle> SlowedTargets;                                     // 0x4B0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBattleEffectAbiltiy_SlowSyphonedTargets_C* GetDefaultObj();

	void EventReceived_05AFCE8949EAB638A6EF079B16742D56(const struct FGameplayEventData& Payload);
	void EventReceived_5506521C438CD50C229B08B1368FF34E(const struct FGameplayEventData& Payload);
	void EventReceived_F375F67A42B0425BBA3B84A5A1AC933B(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void OnSyphonedTargetAdded(class UObject* SyphonedTarget);
	void OnSyphonedTargetRemoved(class UObject* SyphonedTarget);
	void ExecuteUbergraph_BattleEffectAbiltiy_SlowSyphonedTargets(int32 EntryPoint, const struct FGameplayEventData& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& Temp_struct_Variable_2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_CustomEvent_SyphonedTarget_1, class UObject* K2Node_CustomEvent_SyphonedTarget, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload_2);
};

}


