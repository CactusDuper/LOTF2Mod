#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass AN_ForceTrascendTarget.AN_ForceTrascendTarget_C
class UAN_ForceTrascendTarget_C : public UAnimNotify
{
public:
	bool                                         bOnlyIfTargetIsInAxtiom;                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_ForceTrascendTarget_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, class UGameplayAbility* CallFunc_FindAbilityPrimaryInstanceByClass_ReturnValue, class UGA_SyncAnim* K2Node_DynamicCast_AsGA_Sync_Anim, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOtherParticipantActor_ReturnValue, class UDualRealmStateComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


