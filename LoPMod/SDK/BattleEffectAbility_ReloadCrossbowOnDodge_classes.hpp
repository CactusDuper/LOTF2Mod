#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4B8 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_ReloadCrossbowOnDodge.BattleEffectAbility_ReloadCrossbowOnDodge_C
class UBattleEffectAbility_ReloadCrossbowOnDodge_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class USubAutonomousAbilityData> Saa_Data;                                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_ReloadCrossbowOnDodge_C* GetDefaultObj();

	void OnActivate_AD8E128A4E04FB82B2D4178B52C8A869(class UGameplayAbility* ActivatedAbility);
	void K2_ActivateAbility();
	void ExecuteUbergraph_BattleEffectAbility_ReloadCrossbowOnDodge(int32 EntryPoint, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameplayAbility* Temp_object_Variable, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


