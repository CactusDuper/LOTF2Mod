#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x550 - 0x540)
// BlueprintGeneratedClass GA_GonnaDie_Player.GA_GonnaDie_Player_C
class UGA_GonnaDie_Player_C : public UGA_DyingBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          DeathReasonTag;                                    // 0x548(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_GonnaDie_Player_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, bool CallFunc_ShouldRunDeathTransitionForClient_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess_1, enum class EHexMultiplayerRole CallFunc_GetMultiplayerRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PauseLastValidLocationUpdate(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess);
	void SendDeathGameplayEvent();
	void RemoveCollisionsWithPawn();
	void StartRagdollState();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_GonnaDie_Player(int32 EntryPoint, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEvent_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayTag& CallFunc_GetFirstGameplayTagMatching_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class ULOTF2SaveGameManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_SaveGameAsync_ReturnValue, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess_1);
};

}


