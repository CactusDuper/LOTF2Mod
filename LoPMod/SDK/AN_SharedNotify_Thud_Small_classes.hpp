#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x190 - 0x190)
// BlueprintGeneratedClass AN_SharedNotify_Thud_Small.AN_SharedNotify_Thud_Small_C
class UAN_SharedNotify_Thud_Small_C : public UAnimNotify_FootstepEvent
{
public:

	static class UClass* StaticClass();
	static class UAN_SharedNotify_Thud_Small_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference);
};

}


