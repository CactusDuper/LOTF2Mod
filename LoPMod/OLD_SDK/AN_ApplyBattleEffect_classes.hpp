#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass AN_ApplyBattleEffect.AN_ApplyBattleEffect_C
class UAN_ApplyBattleEffect_C : public UAnimNotify_BaseConditionalTag
{
public:
	struct FHexBattleEffectIdentifier            BattleEffectIdentifier;                            // 0x98(0x8)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UAN_ApplyBattleEffect_C* GetDefaultObj();

	void BP_NotifyImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue);
};

}


