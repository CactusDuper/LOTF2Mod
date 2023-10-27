#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass AN_SharedNotify_NPC.AN_SharedNotify_NPC_C
class UAN_SharedNotify_NPC_C : public UAnimNotify_AkAnathemaEvent
{
public:

	static class UClass* StaticClass();
	static class UAN_SharedNotify_NPC_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference);
};

}


