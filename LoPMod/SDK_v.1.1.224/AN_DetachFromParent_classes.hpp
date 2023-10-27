#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AN_DetachFromParent.AN_DetachFromParent_C
class UAN_DetachFromParent_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAN_DetachFromParent_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class UHexSyncedAnimComponent* CallFunc_GetSyncAnimComponent_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, class UHexSyncedAnimComponent* CallFunc_GetSyncAnimComponent_ReturnValue_1, bool CallFunc_IsPlayingSyncedAnim_ReturnValue, bool CallFunc_IsPlayingSyncedAnim_ReturnValue_1);
};

}


