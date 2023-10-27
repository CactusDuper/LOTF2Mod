#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_UpdateWeaponVerticalOffset.ANS_UpdateWeaponVerticalOffset_C
class UANS_UpdateWeaponVerticalOffset_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_UpdateWeaponVerticalOffset_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference);
};

}


