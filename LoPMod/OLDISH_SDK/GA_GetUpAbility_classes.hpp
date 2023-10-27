#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x460 - 0x448)
// BlueprintGeneratedClass GA_GetUpAbility.GA_GetUpAbility_C
class UGA_GetUpAbility_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_WaitDelay*                WaitTimeAsyncTask;                                 // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NewVar_0;                                          // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_GetUpAbility_C* GetDefaultObj();

	void OnCancelled_E1EADB8E4A7FB63FC3E4FCA1AEF3849E();
	void OnInterrupted_E1EADB8E4A7FB63FC3E4FCA1AEF3849E();
	void OnBlendOut_E1EADB8E4A7FB63FC3E4FCA1AEF3849E();
	void OnCompleted_E1EADB8E4A7FB63FC3E4FCA1AEF3849E();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_GetUpAbility(int32 EntryPoint, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AAIController* CallFunc_GetAIController_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDead_ReturnValue, class UAnimMontage* CallFunc_GetAnimMontageByTag_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABaseAIController* K2Node_DynamicCast_AsBase_AIController, bool K2Node_DynamicCast_bSuccess_1, class ABaseAICharacter* CallFunc_GetAICharacter_ReturnValue, class UAILogicManagerComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2);
};

}


