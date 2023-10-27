#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x98 - 0x98)
// BlueprintGeneratedClass ANS_ClearEquipAnimations.ANS_ClearEquipAnimations_C
class UANS_ClearEquipAnimations_C : public UAnimNotify_BaseConditionalTag
{
public:

	static class UClass* StaticClass();
	static class UANS_ClearEquipAnimations_C* GetDefaultObj();

	void BP_NotifyImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UBasePlayerAnimInstance* CallFunc_GetPlayerAnimInstance_ReturnValue);
};

}


