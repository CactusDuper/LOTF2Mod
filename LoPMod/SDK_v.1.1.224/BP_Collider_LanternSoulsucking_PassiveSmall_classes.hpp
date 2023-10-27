#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2E0 - 0x2A0)
// BlueprintGeneratedClass BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C
class ABP_Collider_LanternSoulsucking_PassiveSmall_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  OuterSphereDebugVisuals;                           // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      OuterAttractorSphere;                              // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CoreSphereDebugVisuals;                            // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      CorePickupSphere;                                  // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABaseAbsorbablePickup_BP_C*>    PreAbsorbDrops;                                    // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Collider_LanternSoulsucking_PassiveSmall_C* GetDefaultObj();

	void BndEvt__LanternSyphoning_VigorCollider_BP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__LanternSyphoning_VigorCollider_BP_OuterAttractorSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void UpdateDebugSphereSizes();
	void StopAllTriggeredPreAbsorbingDrops();
	void ReceiveBeginPlay();
	void StartPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup);
	void DoAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup);
	void BndEvt__BP_Collider_LanternSoulsucking_PassiveSmall_OuterAttractorSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void StopPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup);
	void ExecuteUbergraph_BP_Collider_LanternSoulsucking_PassiveSmall(int32 EntryPoint, class AActor* CallFunc_GetParentActor_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, uint8 CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetUnscaledSphereRadius_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_2, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue_1, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup, bool CallFunc_IsDead_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetUnscaledSphereRadius_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, class ABaseAbsorbablePickup_BP_C* K2Node_DynamicCast_AsBase_Absorbable_Pickup_BP, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasBeenAbsorbed_bValue, bool CallFunc_Array_Contains_ReturnValue, uint8 CallFunc_GetMultiplayerVisibilityMask_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast_1);
};

}


