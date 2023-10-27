#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x450 - 0x450)
// BlueprintGeneratedClass GA_ChangeToRelaxedBehavior.GA_ChangeToRelaxedBehavior_C
class UGA_ChangeToRelaxedBehavior_C : public UGA_PlayMontageByTag
{
public:

	static class UClass* StaticClass();
	static class UGA_ChangeToRelaxedBehavior_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, const struct FGameplayTag& CallFunc_GetAnimationTag_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UAnimSequence* CallFunc_GetAnimationByTag_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


