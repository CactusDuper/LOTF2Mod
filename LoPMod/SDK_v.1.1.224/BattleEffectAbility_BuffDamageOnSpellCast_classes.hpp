#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B0 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_BuffDamageOnSpellCast.BattleEffectAbility_BuffDamageOnSpellCast_C
class UBattleEffectAbility_BuffDamageOnSpellCast_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_BuffDamageOnSpellCast_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BattleEffectAbility_BuffDamageOnSpellCast(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UMagicItemData* K2Node_DynamicCast_AsMagic_Item_Data, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, enum class EMagicFamily CallFunc_GetMagicFamily_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier, class FName CallFunc_GetBattleEffectStringParam_outValue_1, bool CallFunc_GetBattleEffectStringParam_ReturnValue_1, class FName CallFunc_GetBattleEffectStringParam_outValue_2, bool CallFunc_GetBattleEffectStringParam_ReturnValue_2, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier_1, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier_2, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue_2);
};

}


