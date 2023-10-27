#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// BlueprintGeneratedClass GA_RhogarHound_ExplodeOnDeath.GA_RhogarHound_ExplodeOnDeath_C
class UGA_RhogarHound_ExplodeOnDeath_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_RhogarHound_ExplodeOnDeath_C* GetDefaultObj();

	void OnFinish_BF5149C24D429FA0DD65C09CEAA97467();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_RhogarHound_ExplodeOnDeath(int32 EntryPoint, const struct FSpawnDefinition& K2Node_MakeStruct_SpawnDefinition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ACharacter* CallFunc_CastToCharacter_ReturnValue, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue);
};

}


