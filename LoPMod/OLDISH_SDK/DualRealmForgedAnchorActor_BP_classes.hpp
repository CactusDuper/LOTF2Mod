#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x538 - 0x4D0)
// BlueprintGeneratedClass DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C
class ADualRealmForgedAnchorActor_BP_C : public ADualRealmAnchorActorBase_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoftRepulsionCapsuleComponent*        SoftRepulsionCapsule;                              // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CapsuleCollision;                                  // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  DecayDEBUG_TEST;                                   // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Ground_Grass_Decal;                                // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_ForgedAnchor_SkeletonMesh;                      // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_ForgedAnchor_Body;                              // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       AnimationLengthWithPlayRate;                       // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Moths;                                             // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DecalMaterialInstance;                             // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     GrowAnimation;                                     // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationLength;                                   // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        OldForgedAnchorDestroyVFX;                         // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADualRealmForgedAnchorActor_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void StateChangeHandler(enum class EForgedAnchorState State);
	void OnAnimationStart();
	void OnAnimationEnd();
	void ReceiveTick(float DeltaSeconds);
	void OnDestroyedState_BP(bool bSkipTransitionAnimation);
	void ShowDestroyTransition();
	void OnLoadingFinished_Event_2();
	void ReceiveDestroyed();
	void OnPlacingStateUpdated_BP();
	void UpdateForgedStateSideEffects();
	void OnOldForgingAnchorDestroyed_BP();
	void OnOldForgingAnchorDestroyedCosmetic();
	void ExecuteUbergraph_DualRealmForgedAnchorActor_BP(int32 EntryPoint, enum class EForgedAnchorState K2Node_CustomEvent_state, float CallFunc_GetPlayRate_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UAnimSequenceBase* K2Node_DynamicCast_AsAnim_Sequence_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool K2Node_Event_bSkipTransitionAnimation, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AProto_forgedAnchor_remains_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetLOTF2GameState_IsValid, class ALOTF2GameState* CallFunc_GetLOTF2GameState_GameState, bool CallFunc_GetLOTF2GameState_IsValid_1, class ALOTF2GameState* CallFunc_GetLOTF2GameState_GameState_1, bool CallFunc_IsLoadingLevels_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsSafeToForge_ReturnValue, enum class EForgedAnchorState CallFunc_GetForgedState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AWitherForbiddenArea_BP_C* K2Node_DynamicCast_AsWither_Forbidden_Area_BP, bool K2Node_DynamicCast_bSuccess_1, class AWitherForbiddenArea_BP_C* K2Node_DynamicCast_AsWither_Forbidden_Area_BP_1, bool K2Node_DynamicCast_bSuccess_2, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FAkAnathemaEvent& K2Node_MakeStruct_AkAnathemaEvent, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float K2Node_VariableSet_RequiredTimeToForge_ImplicitCast);
};

}


