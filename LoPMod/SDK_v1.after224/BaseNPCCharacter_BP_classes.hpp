#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC3 (0xD33 - 0xC70)
// BlueprintGeneratedClass BaseNPCCharacter_BP.BaseNPCCharacter_BP_C
class ABaseNPCCharacter_BP_C : public ABaseNPCCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHiddenInCinematicsComponent*          HiddenInCinematics;                                // 0xC78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0xC80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0xC88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Comp_EnvInteraction_C*             BP_Comp_EnvInteraction;                            // 0xC90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetComponent*                      Target1;                                           // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  DamageProxyDetector;                               // 0xCA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     UmbralAppearance;                                  // 0xCA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorWidgetComponent*                 StatusBar1;                                        // 0xCB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPropManagerComponent*                 PropManager;                                       // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_DoubleBlink_34192C8140002EBF3D00788D0C4A8EA7; // 0xCC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_SingleBlink_34192C8140002EBF3D00788D0C4A8EA7; // 0xCC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_34192C8140002EBF3D00788D0C4A8EA7; // 0xCC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UEnemyStatusUIWidget_BP_C*             StatusBarWidget;                                   // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTargetComponent*                      TargetComponent;                                   // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ADismemberedBleed_StatusEffect_BP_C*   BleedOutStatusEffectActor;                         // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         UmbralAppearanceVFX;                               // 0xCF0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bLogDebugInfo;                                     // 0xD20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetComponent*                      DebugAttributes;                                   // 0xD28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bPickSingleBlink;                                  // 0xD30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInvisibleNPC;                                   // 0xD31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldBlink;                                      // 0xD32(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaseNPCCharacter_BP_C* GetDefaultObj();

	void CreateDebugAttributes(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UWidgetComponent* CallFunc_AddComponentByClass_ReturnValue, class UWBP_DebugAttributes3DContainer_C* CallFunc_Create_ReturnValue);
	void Print_Debug_End_Play_Info(enum class EEndPlayReason EndPlayReason, const class FString& CallFunc_GetActorCoordinatesString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void PrintDebugDeathInfo(class UObject* DeathInstigator, const class FString& CallFunc_GetActorCoordinatesString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsFallingIntoTheVoid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void PrintDebugBeginPlayInfo(const class FString& CallFunc_GetActorCoordinatesString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	class FString GetActorCoordinatesString(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_JoinStringArray_ReturnValue);
	void HandleRagdoll();
	void UserConstructionScript(class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_3_HealthComponentOnTakeDamageDelegate__DelegateSignature(class AActor* DamagedActor, float Damage, const struct FGameplayTagContainer& AllAssetTags, class AActor* InstigatedBy, class AActor* DamageCauser, enum class EHexAttackTypeEffectivenes AttackTypeEffectiveness);
	void Show_Status_Bar();
	void Hide_Status_Bar();
	void On_Targeted(class UTargetComponent* Target, class AActor* Targeter);
	void On_Untargeted(class UTargetComponent* Target, class AActor* Targeter);
	void OnDeath(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnDebugAttributes(bool bEnabled);
	void BndEvt__BaseNPCCharacter_BP_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BaseNPCCharacter_BP_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BaseNPCCharacter_BP(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsDead_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_ComponentBoundEvent_DamagedActor, float K2Node_ComponentBoundEvent_Damage, const struct FGameplayTagContainer& K2Node_ComponentBoundEvent_AllAssetTags, class AActor* K2Node_ComponentBoundEvent_InstigatedBy, class AActor* K2Node_ComponentBoundEvent_DamageCauser, enum class EHexAttackTypeEffectivenes K2Node_ComponentBoundEvent_attackTypeEffectiveness, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDead_ReturnValue_2, bool Temp_bool_IsClosed_Variable_1, class UTargetComponent* K2Node_CustomEvent_Target_1, class AActor* K2Node_CustomEvent_Targeter_1, bool CallFunc_IsValid_ReturnValue, class UTargetComponent* K2Node_CustomEvent_Target, class AActor* K2Node_CustomEvent_Targeter, class AActor* K2Node_Event_instigatorActor, const struct FGameplayTagContainer& K2Node_Event_instigatorTags, bool K2Node_Event_bDeathWasObserved, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsBeingTargeted_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, class ABaseAIController* K2Node_DynamicCast_AsBase_AIController, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_bEnabled, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_NotEqual_BoolBool_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_EnemyBase_C* K2Node_DynamicCast_AsABP_Enemy_Base, bool K2Node_DynamicCast_bSuccess_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UABP_EnemyBase_C* K2Node_DynamicCast_AsABP_Enemy_Base_1, bool K2Node_DynamicCast_bSuccess_4, class UABP_EnemyBase_C* K2Node_DynamicCast_AsABP_Enemy_Base_2, bool K2Node_DynamicCast_bSuccess_5, double CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_RandomBool_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, float K2Node_VariableSet_FacialExpression_Blinking_Value_ImplicitCast);
};

}


