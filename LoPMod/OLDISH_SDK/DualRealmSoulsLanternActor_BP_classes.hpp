#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x314 (0x5EC - 0x2D8)
// BlueprintGeneratedClass DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C
class ADualRealmSoulsLanternActor_BP_C : public ASoulsLanternActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialBillboardComponent*           TranscendFlare;                                    // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Flame_Detection_Burst;                             // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Flame_Umbral;                                      // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Flame_Axiom;                                       // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Flame_Shining;                                     // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       FlamesRoot;                                        // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ShiningAndSyphoningCollider;                       // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  BP_Collider_LanternSoulsucking;                    // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NPS_LanternTendrils_01;                            // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_ShiningDust;                                   // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 ShiningPostProcess;                                // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   ShiningLight;                                      // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Compass;                                           // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Radar;                                             // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  LanternLight;                                      // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ShiningEffect;                                     // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Lantern;                                        // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  BP_Collider_LanternSoulsucking_PassiveSmall;       // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         LanternInSpot;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinValue;                                          // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxValue;                                          // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Half_Angle_Tangent;                           // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Length;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Sphere_Radius;                                     // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LanternLightIntensity;                             // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShiningLightIntensity;                             // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LanternLightAttenuantionRadius;                    // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShiningLightAttenuationRadius;                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShiningLightOuterConeAngle;                        // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              TendrilsMaterial;                                  // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UABP_LanternCompass_C*                 TendrilsAnimBP;                                    // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RadarMaterial;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoulsLanternHotSpotComponent*         CurrentHotSpot;                                    // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      CompassAudioEvent;                                 // 0x3F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      RadarAudioEvent;                                   // 0x448(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsPlayingRadarAudio;                               // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkAnathemaEvent                      StopRadarAudioEvent;                               // 0x4A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      StopCompassAudioEvent;                             // 0x4F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsPlayingCompassAudio;                             // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DiegeticIntensity;                                 // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHexBattleEffectIdentifier            SoulsConeBattleEffect;                             // 0x550(0x8)(Edit, BlueprintVisible, NoDestructor)
	TMap<class AActor*, struct FActiveGameplayEffectHandle> SoulConeAppliedEffectsMap;                         // 0x558(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       InitRadius;                                        // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndRadius;                                         // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   LanternHotspotShakeFeedbackRow;                    // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bSoulsConeActive;                                  // 0x5C8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F79[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LightAxiomColor;                                   // 0x5CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LightUmbralColor;                                  // 0x5DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADualRealmSoulsLanternActor_BP_C* GetDefaultObj();

	void UpdatePlayerLightColour(enum class EGameRealm Realm, class UNiagaraComponent* FlameOppositeRealm, class UNiagaraComponent* FlameCurrentRealm, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void OnRep_bSoulsConeActive(bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, enum class ECollisionEnabled K2Node_Select_Default);
	void DeactivateSyphoningCollider(class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider);
	void ActivateSyphoningCollider(class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider);
	void GetSyphoningCollider(class ABP_Collider_LanternSyphoning_C** LanternSyphoningCollider, class ABP_Collider_LanternSyphoning_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning, bool K2Node_DynamicCast_bSuccess);
	void ActivateLanternSoulsucking(bool ShouldActivate, class ABP_Collider_LanternSoulsucking_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking, bool K2Node_DynamicCast_bSuccess);
	void ActivateFlame_Hotspot_DEPRECATED(bool CallFunc_IsActive_ReturnValue);
	void ActivateFlame_Umbral();
	void ActivateFlame_Axiom();
	void ActivateFlame_CurrentRealm(class UNiagaraComponent* FlameOppositeRealm, class UNiagaraComponent* FlameCurrentRealm, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ActivateFlame_Shining();
	void Deactivate_Souls_Lantern_Cone(int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
	void ActivateSoulsLanternCone(bool CallFunc_HasAuthority_ReturnValue, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider);
	void Set_Dual_Realm__Mask_Parameters(double InnerAxiomMask, double InnerUmbralMask, double OuterAxiomMask, double OuterUmbralMask, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3);
	void SetLanternParameters(double Cone_Length, float InitRadius, float EndRadius, float Cone_PostPro_Master, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
	void Update_Diegetic_Lantern_DEPRECATED(double Intensity, bool IsInUmbral, double SoundIntensity, const struct FAkAnathemaEvent& Ak_Anathema_RTPC, const struct FLinearColor& ParticlesSpotColor, const struct FLinearColor& ParticlesAxiomColor, const struct FLinearColor& ParticlesUmbralColor, const struct FLinearColor& LightSpotColor, const struct FLinearColor& LightAxiomColor_DEPRECATED, const struct FLinearColor& LightUmbralColor_DEPRECATED, double UmbralSpeed, double MaxUmbralSize, double MinUmbralSize, double MaxAxiomSpeed, double MinAxiomSpeed, double MaxAxiomSize, double MinAxiomSize, double CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_3, const struct FLinearColor& CallFunc_LinearColorLerpUsingHSV_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerpUsingHSV_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, float CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast, float CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_5_OnUpdateVisuals__DelegateSignature();
	void BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_7_OnUpdateVisuals__DelegateSignature();
	void BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_9_OnLanternHotspotStateChange__DelegateSignature(class USoulsLanternHotSpotComponent* HotSpot);
	void BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_11_OnLanternHotspotStateChange__DelegateSignature(class USoulsLanternHotSpotComponent* HotSpot);
	void BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_13_OnLanternStateChanged__DelegateSignature(float Intensity, bool IsInUmbral);
	void UpdateShiningLookAt(double TickDeltaSeconds);
	void OnComponentBeginOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnComponentEndOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Init_Shining_Overlaps();
	void OnCurrentRealmChanged_Event(enum class EGameRealm CurrentRealm, enum class EGameRealm PrevRealm);
	void ExecuteUbergraph_DualRealmSoulsLanternActor_BP(int32 EntryPoint, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_2, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_3, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class ATranscendLookController_C* K2Node_DynamicCast_AsTranscend_Look_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_3, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_3, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_4, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_4, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_5, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_5, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_6, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_6, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_7, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_7, class USoulsLanternHotSpotComponent* K2Node_ComponentBoundEvent_hotSpot_1, class USoulsLanternHotSpotComponent* K2Node_ComponentBoundEvent_hotSpot, float K2Node_ComponentBoundEvent_Intensity, bool K2Node_ComponentBoundEvent_IsInUmbral, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UABP_LanternCompass_C* K2Node_DynamicCast_AsABP_Lantern_Compass, bool K2Node_DynamicCast_bSuccess_2, double K2Node_CustomEvent_TickDeltaSeconds, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue_2, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_3, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_5, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_3, bool K2Node_DynamicCast_bSuccess_5, class ANaturalLighting* CallFunc_GetNaturalLighting_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_6, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_4, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_8, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, class ABP_Collider_LanternSoulsucking_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_8, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_7, class APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_8, class APawn* K2Node_DynamicCast_AsPawn_2, bool K2Node_DynamicCast_bSuccess_9, class APawn* K2Node_DynamicCast_AsPawn_3, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn_4, bool K2Node_DynamicCast_bSuccess_11, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_6, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_4, bool K2Node_DynamicCast_bSuccess_12, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, class AActor* K2Node_CustomEvent_OtherActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class USoulsLanternComponent* CallFunc_GetSoulsLanternComponent_ReturnValue, float CallFunc_GetIntensityForLantern_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeBetweenActors_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeBetweenActors_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_7, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_5, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, const struct FNaturalLightingPlayerLightData& CallFunc_GetPlayerLightData_ReturnValue, bool CallFunc_GetLOTF2GameState_IsValid, class ALOTF2GameState* CallFunc_GetLOTF2GameState_GameState, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, enum class EGameRealm K2Node_CustomEvent_CurrentRealm, enum class EGameRealm K2Node_CustomEvent_PrevRealm, bool CallFunc_HasAuthority_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_9, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_10, bool CallFunc_HasAuthority_ReturnValue_1, double CallFunc_SetLanternParameters_Cone_Length_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_OuterUmbralMask_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_OuterAxiomMask_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_InnerUmbralMask_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_InnerAxiomMask_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, double K2Node_VariableSet_ShiningLightOuterConeAngle_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, double K2Node_VariableSet_ShiningLightAttenuationRadius_ImplicitCast, double K2Node_VariableSet_LanternLightAttenuantionRadius_ImplicitCast, double K2Node_VariableSet_LanternLightIntensity_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_ShiningLightIntensity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetRtpcOnPlayer_val_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_UpdateShiningLookAt_TickDeltaSeconds_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, double CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_Lerp_A_ImplicitCast_3, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_2, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast);
};

}


