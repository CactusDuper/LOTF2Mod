#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xB8 - 0x98)
// BlueprintGeneratedClass AN_RemoveEffectsByTag.AN_RemoveEffectsByTag_C
class UAN_RemoveEffectsByTag_C : public UAnimNotify_BaseConditionalTag
{
public:
	struct FGameplayTagContainer                 EffectTag;                                         // 0x98(0x20)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UAN_RemoveEffectsByTag_C* GetDefaultObj();

	void BP_NotifyImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue);
};

}


