#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x4BC - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused.BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C
class UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        OriginalBuildup;                                   // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BuildupMultiplier;                                 // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewBuildup;                                        // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C* GetDefaultObj();

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class UHexDamageExecutionResult* K2Node_DynamicCast_AsHex_Damage_Execution_Result, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused(int32 EntryPoint, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_1, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_1, float CallFunc_GetBattleEffectNumericParam_outValue, bool CallFunc_GetBattleEffectNumericParam_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UHexDamageExecutionResult* K2Node_DynamicCast_AsHex_Damage_Execution_Result, bool K2Node_DynamicCast_bSuccess, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_NewBuildup_ImplicitCast);
};

}


