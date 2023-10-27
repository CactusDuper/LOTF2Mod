#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4E8 - 0x4E0)
// BlueprintGeneratedClass VigorDropPickup_BP.VigorDropPickup_BP_C
class AVigorDropPickup_BP_C : public ABaseAbsorbablePickup_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AVigorDropPickup_BP_C* GetDefaultObj();

	void RandomizeLocation(const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult);
	void GetItemAmount(int32* Quantity, class UInventoryItem* CallFunc_GetInventoryItem_ReturnValue, class UVigorDrop_InventoryItem_BP_C* K2Node_DynamicCast_AsVigor_Drop_Inventory_Item_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetVigorQuantity_ReturnValue);
	void Completed_497E5909410246192564AFB7C86F7AF0(int32 PlayingID);
	void SpawnVFXTrail(class ALOTF2Character* Target_Character);
	void OnParticleReach(int32 Data);
	void ExecuteUbergraph_VigorDropPickup_BP(int32 EntryPoint, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, int32 K2Node_CustomEvent_PlayingID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, class ALOTF2Character* K2Node_Event_Target_Character, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName Temp_name_Variable_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 K2Node_CustomEvent_Data, class UPostEventAtLocationAsync* CallFunc_PostEventAtLocationAsync_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VigorProjectile_VFX_3_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


