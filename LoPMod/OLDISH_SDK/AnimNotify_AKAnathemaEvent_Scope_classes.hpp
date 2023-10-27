#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass AnimNotify_AKAnathemaEvent_Scope.AnimNotify_AKAnathemaEvent_Scope_C
class UAnimNotify_AKAnathemaEvent_Scope_C : public UAnimNotify_AkAnathemaEvent
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_AKAnathemaEvent_Scope_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference);
};

}


