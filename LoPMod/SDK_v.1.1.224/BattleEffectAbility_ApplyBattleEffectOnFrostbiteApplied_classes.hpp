#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B0 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied.BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C
class UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue);
};

}


