#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x190 - 0x190)
// BlueprintGeneratedClass AN_UmbralSparrow_FS_R.AN_UmbralSparrow_FS_R_C
class UAN_UmbralSparrow_FS_R_C : public UAnimNotify_FootstepEvent
{
public:

	static class UClass* StaticClass();
	static class UAN_UmbralSparrow_FS_R_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, bool CallFunc_IsWithEditor_ReturnValue);
};

}


