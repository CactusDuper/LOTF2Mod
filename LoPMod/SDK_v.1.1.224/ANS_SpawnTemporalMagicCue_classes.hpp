#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass ANS_SpawnTemporalMagicCue.ANS_SpawnTemporalMagicCue_C
class UANS_SpawnTemporalMagicCue_C : public UAnimNotifyState
{
public:
	struct FGameplayTag                          StartEvent;                                        // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_SpawnTemporalMagicCue_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AActor* CallFunc_GetOwner_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


