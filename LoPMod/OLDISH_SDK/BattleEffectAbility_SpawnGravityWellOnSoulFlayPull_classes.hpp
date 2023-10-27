#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x5D8 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_SpawnGravityWellOnSoulFlayPull.BattleEffectAbility_SpawnGravityWellOnSoulFlayPull_C
class UBattleEffectAbility_SpawnGravityWellOnSoulFlayPull_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class USubAutonomousAbilityData> Saa_Data;                                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSpawnDefinition                      Spawn_Definition;                                  // 0x4B8(0x120)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_SpawnGravityWellOnSoulFlayPull_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BattleEffectAbility_SpawnGravityWellOnSoulFlayPull(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue);
};

}


