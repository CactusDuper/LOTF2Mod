#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B0 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting.BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C
class UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting(int32 EntryPoint, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue);
};

}


