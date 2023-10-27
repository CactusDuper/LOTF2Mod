#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass ANS_TemporalMagicCasting.ANS_TemporalMagicCasting_C
class UANS_TemporalMagicCasting_C : public UAnimNotifyState_BaseConditionalTag
{
public:
	struct FGameplayTag                          StartMagicTag;                                     // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          StopMagicTag;                                      // 0xA8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_TemporalMagicCasting_C* GetDefaultObj();

	void BP_NotifyEndImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class UObject* CustomData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BP_NotifyBeginImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, float TotalDuration, int32 MontageInstanceID, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


