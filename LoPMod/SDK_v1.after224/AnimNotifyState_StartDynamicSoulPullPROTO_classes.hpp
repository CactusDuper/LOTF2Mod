#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_StartDynamicSoulPullPROTO.AnimNotifyState_StartDynamicSoulPullPROTO_C
class UAnimNotifyState_StartDynamicSoulPullPROTO_C : public UAnimNotifyState
{
public:
	double                                       SoulPullDistance;                                  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotifyState_StartDynamicSoulPullPROTO_C* GetDefaultObj();

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* TargetActor, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseAICharacter_BP_C* K2Node_DynamicCast_AsBase_AICharacter_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class UHexSoulFlayComponent* CallFunc_GetSoulFlayComponentFromActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetTargetedActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UGameplayAbility* CallFunc_FindFirstPrimaryInstanceFromParentClass_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UGA_SyncAnim* K2Node_DynamicCast_AsGA_Sync_Anim, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Normal_ReturnValue, class AActor* CallFunc_GetOtherParticipantActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_StartDynamicSoulPull_maxDistance_ImplicitCast);
};

}


