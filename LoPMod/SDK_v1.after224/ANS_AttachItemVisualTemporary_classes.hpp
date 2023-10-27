#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass ANS_AttachItemVisualTemporary.ANS_AttachItemVisualTemporary_C
class UANS_AttachItemVisualTemporary_C : public UAnimNotifyState
{
public:
	class UClass*                                ItemVisual;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachSocket;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_AttachItemVisualTemporary_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class UTemporalAttachmentsComponent_C* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UTemporalAttachmentsComponent_C* TemporalAttachmentComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UTemporalAttachmentsComponent_C* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UTemporalAttachmentsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
};

}


