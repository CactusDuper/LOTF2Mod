#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4D0 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_ReflectDamageOnReceiveHit.BattleEffectAbility_ReflectDamageOnReceiveHit_C
class UBattleEffectAbility_ReflectDamageOnReceiveHit_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 BlockingTags;                                      // 0x4B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_ReflectDamageOnReceiveHit_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BattleEffectAbility_ReflectDamageOnReceiveHit(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue_1, bool CallFunc_GetBattleEffectStringParam_ReturnValue_1, class FName CallFunc_GetBattleEffectStringParam_outValue_2, bool CallFunc_GetBattleEffectStringParam_ReturnValue_2, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1);
};

}


