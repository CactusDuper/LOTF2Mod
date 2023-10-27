#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B0 - 0x4A8)
// BlueprintGeneratedClass GA_StatusEffectBleed_DamageOnAction.GA_StatusEffectBleed_DamageOnAction_C
class UGA_StatusEffectBleed_DamageOnAction_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_StatusEffectBleed_DamageOnAction_C* GetDefaultObj();

	void OnActivate_977DAD844CA27BF664F12EBA1D385537(class UGameplayAbility* ActivatedAbility);
	void EventReceived_6D4F0B504BF425B278E3B7936BF3A815(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ApplyActionDamage();
	void ExecuteUbergraph_GA_StatusEffectBleed_DamageOnAction(int32 EntryPoint, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue, class UGameplayAbility* Temp_object_Variable, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivate_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UDamageWindow* K2Node_DynamicCast_AsDamage_Window, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


