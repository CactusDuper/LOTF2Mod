#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x4E0 - 0x418)
// BlueprintGeneratedClass BaseAbsorbablePickup_BP.BaseAbsorbablePickup_BP_C
class ABaseAbsorbablePickup_BP_C : public APickup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PickupItemPNSVisuals;                              // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ItemPNSVisuals;                                    // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       VisualsRoot;                                       // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SphereCollision;                                   // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PreAbsorbFeedbackTimeline_NewTrack_1_034D00C5401234520626F0A945B3A5C9; // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PreAbsorbFeedbackTimeline__Direction_034D00C5401234520626F0A945B3A5C9; // 0x444(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PreAbsorbFeedbackTimeline;                         // 0x448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TrailEffectGameplayCueTag;                         // 0x450(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ScalingValue;                                      // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAbsorbed;                                         // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALOTF2Character*                       TargetCharacter;                                   // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               GroundLocation;                                    // 0x470(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      Ak_Anathema_Event_Absorb_Vigor;                    // 0x488(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                VFXTrailClass;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaseAbsorbablePickup_BP_C* GetDefaultObj();

	void SetToGround(const struct FVector& CallFunc_GetGroundLocation_GroudLocation, class UStaticMeshComponent* CallFunc_GetItemVisual_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult);
	void GetGroundLocation(struct FVector* GroudLocation, TArray<class AActor*>& Temp_object_Variable, class UStaticMeshComponent* CallFunc_GetItemVisual_ReturnValue, class UStaticMeshComponent* CallFunc_GetItemVisual_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, class UStaticMeshComponent* CallFunc_GetItemVisual_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1);
	void RandomizeLocation();
	void StartDelayedPickup(class AActor* Interactor);
	void IsShowingPreAbsorbFeedback(bool* bValue, bool CallFunc_IsActive_ReturnValue);
	void HasBeenAbsorbed(bool* bValue);
	void GetItemAmount(int32* Quantity);
	void StopPreAbsorbFeedback();
	void TriggerPreAbsorbFeedback();
	void UpdateVisualSize(int32 CallFunc_GetItemAmount_Quantity, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast);
	void PreAbsorbFeedbackTimeline__FinishedFunc();
	void PreAbsorbFeedbackTimeline__UpdateFunc();
	void TriggerAbsorbEffect();
	void ReceiveBeginPlay();
	void OnPreAbsorbFeedback();
	void OnStopPreAbsorbFeedback();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnStartDelayedPickup(class AActor* Interactor);
	void HandleVisuals();
	void SpawnVFXTrail(class ALOTF2Character* Target_Character);
	void PickupSetupFinished();
	void ExecuteUbergraph_BaseAbsorbablePickup_BP(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, class UAnathemaGameSystems* CallFunc_GetWorldSubsystem_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class USpawnDirector* CallFunc_GetSpawnDirector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* K2Node_CustomEvent_Interactor, bool CallFunc_IsValid_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TakePickup_ReturnValue, bool CallFunc_IsDead_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class ALOTF2Character* K2Node_CustomEvent_Target_Character, bool CallFunc_HasAuthority_ReturnValue_2);
};

}


