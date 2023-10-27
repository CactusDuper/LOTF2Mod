#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x5D8 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill.BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C
class UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class USubAutonomousAbilityData> Saa_Data;                                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSpawnDefinition                      Spawn_Definition;                                  // 0x4B8(0x120)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C* GetDefaultObj();

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, const struct FGameplayAttribute& Temp_struct_Variable, class UHexDamageExecutionResult* K2Node_DynamicCast_AsHex_Damage_Execution_Result, bool K2Node_DynamicCast_bSuccess, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue);
};

}


