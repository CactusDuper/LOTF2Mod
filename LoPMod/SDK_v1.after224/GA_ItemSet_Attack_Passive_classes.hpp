#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E2 (0x62A - 0x448)
// BlueprintGeneratedClass GA_ItemSet_Attack_Passive.GA_ItemSet_Attack_Passive_C
class UGA_ItemSet_Attack_Passive_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSpawnDefinition                      Spawn_Definition;                                  // 0x450(0x120)(Edit, BlueprintVisible, NoDestructor)
	TSubclassOf<class USubAutonomousAbilityData> FinisherSAAToSpawn;                                // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<enum class EStanceType>               StanceRequirements;                                // 0x578(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class UClass*>     SAAToSpawnByTriggerEvent;                          // 0x588(0x50)(Edit, BlueprintVisible)
	TMap<struct FGameplayTag, struct FSpawnDefinition> SpawnDefinitionByTriggerEvent;                     // 0x5D8(0x50)(Edit, BlueprintVisible)
	enum class EFEquipmentSlot                   SAASpawnerSlot;                                    // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSAASpawnerSlot;                                 // 0x629(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ItemSet_Attack_Passive_C* GetDefaultObj();

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_Array_IsEmpty_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EStanceType CallFunc_GetStance_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ItemSet_Attack_Passive(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_K2_CommitAbility_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSpawnDefinition& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TSubclassOf<class USubAutonomousAbilityData> K2Node_Select_Default, const struct FSpawnDefinition& K2Node_Select_Default_1, class UEquipableInventoryItem* CallFunc_GetEquippedGear_ReturnValue, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, class AActor* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Select_Default_3, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue);
};

}


