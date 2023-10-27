#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4B8 - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_SpawnSAAOnIgniteApplication.BattleEffectAbility_SpawnSAAOnIgniteApplication_C
class UBattleEffectAbility_SpawnSAAOnIgniteApplication_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class USubAutonomousAbilityData> Saa_Data;                                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_SpawnSAAOnIgniteApplication_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BattleEffectAbility_SpawnSAAOnIgniteApplication(int32 EntryPoint, const struct FSpawnDefinition& K2Node_MakeStruct_SpawnDefinition, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue);
};

}


