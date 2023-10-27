#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0xEE8 - 0xD10)
// BlueprintGeneratedClass AnathemaPlayerCharacter_BP.AnathemaPlayerCharacter_BP_C
class AAnathemaPlayerCharacter_BP_C : public APlayerCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Umbral_EyeTrail_R;                                 // 0xD18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Umbral_EyeTrail_L;                                 // 0xD20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCOMP_CharacterTendrils_C*             COMP_CharacterTendrils;                            // 0xD28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0xD30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorWidgetComponent*                 StatusBar1;                                        // 0xD38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoftRepulsionCapsuleComponent*        SoftRepulsionCapsule;                              // 0xD40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionWarpingComponent*               MotionWarping;                                     // 0xD48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Comp_EnvInteraction_C*             BP_Comp_EnvInteraction;                            // 0xD50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  TranscendLookController;                           // 0xD58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 UmbralLookPP;                                      // 0xD60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0xD68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDualRealmLookController_BP_C*         DualRealmLookController_BP;                        // 0xD70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Limbo;                                             // 0xD78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  CameraBlockingActor;                               // 0xD80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      InteractionWidget;                                 // 0xD88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      TargetingWidget;                                   // 0xD90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultWalkSpeed;                                  // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RootMotionEnabled;                                 // 0xDA0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                FakeDeathSM_Placeholder;                           // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     MaculatorIdentifier;                               // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            AxiomMaterials;                                    // 0xDB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      Ak_Anathema_Event_Death;                           // 0xDC8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidgetComponent*                      DebugAttributes;                                   // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PlayerMeshRelative_Location;                       // 0xE20(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionComponent*                 CurrentInteraction;                                // 0xE38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     Movement_Mode;                                     // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkAnathemaEvent                      OnMeleeChangeSound;                                // 0xE48(0x50)(Edit, BlueprintVisible)
	struct FAkAnathemaEvent                      OnMeleeChangeSoundDelay;                           // 0xE98(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AAnathemaPlayerCharacter_BP_C* GetDefaultObj();

	void DestroyComponentByParam(class UActorComponent* ComponentToDestroy);
	void PrepareForExitingCinematic(bool CallFunc_IsLocallyControlled_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void PrepareForCinematic(bool CallFunc_IsLocallyControlled_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void CreateDebugAttributes(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UWidgetComponent* CallFunc_AddComponentByClass_ReturnValue, class UWBP_DebugAttributes3DContainer_C* CallFunc_Create_ReturnValue);
	void SetPawnDualRealmMaterial(bool IsInUmbral, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	class UWidgetComponent* GetNewBlockedInteractionWidget(const struct FTransform& Temp_struct_Variable, class UWidgetComponent* CallFunc_AddComponent_ReturnValue);
	void OnRep_RootMotionEnabled(bool Temp_bool_Variable, enum class ERootMotionMode Temp_byte_Variable, enum class ERootMotionMode Temp_byte_Variable_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, enum class ERootMotionMode K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void GetTargetingWidgetBP(class UEnemyStatusUIWidget_BP_C** Targeting_Widget, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UEnemyStatusUIWidget_BP_C* K2Node_DynamicCast_AsEnemy_Status_UIWidget_BP, bool K2Node_DynamicCast_bSuccess);
	void GetInteractionWidgetBP(class UInteractionUIWidget_BP_C** Interaction_Widget, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UInteractionUIWidget_BP_C* K2Node_DynamicCast_AsInteraction_UIWidget_BP, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void OnTargetChanged(class APlayerCharacterController* PlayerController, class UTargetComponent* PrevTarget, class UTargetComponent* NewTarget);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_7_HealthComponentOnDeathDelegate__DelegateSignature(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void SetTextToWidget(class UWidgetComponent* Widget, class FText& Text);
	void BndEvt__DualRealmStateComponent_K2Node_ComponentBoundEvent_2_OnRealmChanged__DelegateSignature(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm);
	void OnDebugAttributes(bool bEnabled);
	void LookAt_Target(bool LookAt_Enabled, const struct FVector& LookAt_Target, class USkeletalMeshComponent* TargetMesh);
	void BndEvt__AnathemaPlayerCharacter_BP_InteractionSystem_K2Node_ComponentBoundEvent_0_OnAvailableInteractionActivationProgressChanged__DelegateSignature(class UInteractionComponent* Interaction, float ActivationProgress);
	void BndEvt__AnathemaPlayerCharacter_BP_InteractionSystem_K2Node_ComponentBoundEvent_1_OnCurrentInteractionChanged__DelegateSignature(class UInteractionComponent* PrevInteraction, class UInteractionComponent* NewInteraction, class UInteractionContext* NewInteractionContext);
	void OnInteractionOccupiedChanged_Event_0(bool bOccupied);
	void OnDissolveStart(bool IsReverse);
	void SetLanternCastShadows(bool bEnable);
	void HandleCharacterBodyType(enum class ECharacterBodyType CharacterBodyType);
	void BndEvt__AnathemaPlayerCharacter_BP_AirStateComponent_K2Node_ComponentBoundEvent_3_OnFallingStart__DelegateSignature();
	void BndEvt__AnathemaPlayerCharacter_BP_AirStateComponent_K2Node_ComponentBoundEvent_4_OnFallingEnd__DelegateSignature();
	void CameraOcclusionOff();
	void CameraOcclusionOn();
	void ReceiveRestarted();
	void ReceiveControllerChanged(class AController* OldController, class AController* NewController);
	void BndEvt__AnathemaPlayerCharacter_BP_StanceComponent_K2Node_ComponentBoundEvent_5_OnMeleeOptionChanged__DelegateSignature(enum class EMeleeOption OldMeleeOption, enum class EMeleeOption NewMeleeOption);
	void BndEvt__AnathemaPlayerCharacter_BP_StanceComponent_K2Node_ComponentBoundEvent_8_OnStanceTypeChanged__DelegateSignature(enum class EStanceType OldStance, enum class EStanceType NewStance);
	void ExecuteUbergraph_AnathemaPlayerCharacter_BP(int32 EntryPoint, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UInteractionUIWidget_BP_C* CallFunc_GetInteractionWidgetBP_Interaction_Widget, bool CallFunc_IsValid_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UEnemyStatusUIWidget_BP_C* CallFunc_GetTargetingWidgetBP_Targeting_Widget, bool CallFunc_IsValid_ReturnValue_1, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_1, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_2, class APlayerCharacterController* K2Node_CustomEvent_PlayerController, class UTargetComponent* K2Node_CustomEvent_PrevTarget, class UTargetComponent* K2Node_CustomEvent_NewTarget, class UAkAnathemaComponent* CallFunc_GetAkComponentLHand_ReturnValue, class UAkAnathemaComponent* CallFunc_GetAkComponentRHand_ReturnValue, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_3, class AActor* K2Node_ComponentBoundEvent_InstigatorActor, const struct FGameplayTagContainer& K2Node_ComponentBoundEvent_InstigatorTags, bool K2Node_ComponentBoundEvent_bDeathWasObserved, bool Temp_bool_Variable, class UWidgetComponent* K2Node_Event_widget, class FText K2Node_Event_text, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UInteractionUIWidget_BP_C* CallFunc_GetInteractionWidgetBP_Interaction_Widget_1, class UInteractionUIWidget_BP_C* K2Node_DynamicCast_AsInteraction_UIWidget_BP, bool K2Node_DynamicCast_bSuccess, class UAkAnathemaComponent* CallFunc_GetAkComponentLHand_ReturnValue_1, bool Temp_bool_Variable_1, enum class EGameRealm K2Node_ComponentBoundEvent_oldRealm, enum class EGameRealm K2Node_ComponentBoundEvent_newRealm, class FName CallFunc_Conv_StringToName_ReturnValue, bool Temp_bool_Variable_2, class UAkAnathemaComponent* CallFunc_GetAkComponentRHand_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, enum class EGameRealm Temp_byte_Variable, bool K2Node_Event_bEnabled, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_LookAt_Enabled, const struct FVector& K2Node_CustomEvent_LookAt_Target, class USkeletalMeshComponent* K2Node_CustomEvent_TargetMesh, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UInteractionComponent* K2Node_ComponentBoundEvent_interaction, float K2Node_ComponentBoundEvent_activationProgress, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UInteractionUIWidget_BP_C* K2Node_DynamicCast_AsInteraction_UIWidget_BP_1, bool K2Node_DynamicCast_bSuccess_2, class UInteractionUIWidget_BP_C* K2Node_DynamicCast_AsInteraction_UIWidget_BP_2, bool K2Node_DynamicCast_bSuccess_3, class UInteractionComponent* K2Node_ComponentBoundEvent_prevInteraction, class UInteractionComponent* K2Node_ComponentBoundEvent_newInteraction, class UInteractionContext* K2Node_ComponentBoundEvent_newInteractionContext, class FName CallFunc_GetSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_bOccupied, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ Temp_delegate_Variable, class USceneComponent* CallFunc_GetInteractionUIRootComponent_ReturnValue, class FText CallFunc_GetOccupiedText_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsOccupied_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetActionText_ReturnValue, bool CallFunc_IsInvisibleUI_ReturnValue, bool K2Node_CustomEvent_IsReverse, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_SetLooseGameplayTagCount_ReturnValue, bool CallFunc_SetLooseGameplayTagCount_ReturnValue_1, bool K2Node_Event_bEnable, enum class ECharacterBodyType K2Node_Event_characterBodyType, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_K2_AttachToComponent_ReturnValue, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_4, FDelegateProperty_ Temp_delegate_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_5, int32 CallFunc_PostAkEvent_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue_6, class FText K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AController* K2Node_Event_OldController, class AController* K2Node_Event_NewController, class APlayerCharacterController* K2Node_DynamicCast_AsPlayer_Character_Controller, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsLocallyControlled_ReturnValue_3, enum class EMeleeOption K2Node_ComponentBoundEvent_oldMeleeOption, enum class EMeleeOption K2Node_ComponentBoundEvent_newMeleeOption, enum class EStanceType K2Node_ComponentBoundEvent_oldStance, enum class EStanceType K2Node_ComponentBoundEvent_newStance, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, bool Temp_bool_Variable_4, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool K2Node_Select_Default_1, double CallFunc_Set_Activation_Progress_Progress_ImplicitCast);
};

}


