#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4B8 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbiltiy_Syphoning_GainManaWithMojo.BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C
class UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       MojoToManaRatio;                                   // 0x4B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C* GetDefaultObj();

	void EventReceived_8988C7854FFBBB099C23A78E1C3E75A7(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_BattleEffectAbiltiy_Syphoning_GainManaWithMojo(int32 EntryPoint, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USyphoningExtractionTickData* K2Node_DynamicCast_AsSyphoning_Extraction_Tick_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
};

}


