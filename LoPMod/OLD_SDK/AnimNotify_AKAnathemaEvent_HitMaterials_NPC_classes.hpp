#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x190 - 0x190)
// BlueprintGeneratedClass AnimNotify_AKAnathemaEvent_HitMaterials_NPC.AnimNotify_AKAnathemaEvent_HitMaterials_NPC_C
class UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C : public UAnimNotify_FootstepEvent
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference);
};

}


