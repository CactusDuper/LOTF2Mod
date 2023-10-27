#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_DisableCollisionWithPawn.ANS_DisableCollisionWithPawn_C
class UANS_DisableCollisionWithPawn_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_DisableCollisionWithPawn_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


