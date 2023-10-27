#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4F0 - 0x4E0)
// BlueprintGeneratedClass MojoDropPickup_BP.MojoDropPickup_BP_C
class AMojoDropPickup_BP_C : public ABaseAbsorbablePickup_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       SecondsBeforeDisappearing;                         // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMojoDropPickup_BP_C* GetDefaultObj();

	void UpdateVisualSize();
	void SpawnVFXTrail(class ALOTF2Character* Target_Character);
	void OnParticleReach(int32 Data);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MojoDropPickup_BP(int32 EntryPoint, class UStaticMeshComponent* CallFunc_GetItemVisual_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, class ALOTF2Character* K2Node_Event_Target_Character, class FName Temp_name_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, int32 K2Node_CustomEvent_Data, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MojoSyphoning_Trail_VFX_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class FName Temp_name_Variable_1);
};

}


