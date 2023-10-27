#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x4F8 - 0x448)
// BlueprintGeneratedClass GA_BaseTranscendView.GA_BaseTranscendView_C
class UGA_BaseTranscendView_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EGameRealm                        OldRealm;                                          // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameRealm                        NewRealm;                                          // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkAnathemaEvent                      Ak_Anathema_Event_AxiomToUmbral;                   // 0x458(0x50)(Edit, BlueprintVisible)
	struct FAkAnathemaEvent                      Ak_Anathema_Event_UmbralToAxiom;                   // 0x4A8(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UGA_BaseTranscendView_C* GetDefaultObj();

	void GetSoulsLanternActorAbilitySystem(class UAbilitySystemComponent** SoulsLantern_AbilitySystem, class UObject* CallFunc_GetOuterObject_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue);
	void SetLanternParameters(double Cone_Half_Angle, double Cone_Length, double Sphere_Radius, float Init_Radius, float End_Radius, float Cone_PostPro_Master, class UAbilitySystemComponent* CallFunc_GetSoulsLanternActorAbilitySystem_SoulsLantern_AbilitySystem, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_4, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_5, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_2);
	void Set_Dual_Realm__Mask_Parameters(double Inner_Axiom_Mask, double Inner_Umbral_Mask, double Outer_Axiom_Mask, double Outer_Umbral_Mask, class UAbilitySystemComponent* CallFunc_GetSoulsLanternActorAbilitySystem_SoulsLantern_AbilitySystem, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_2, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_3);
	void OnTimelineEnd_98677D9D4F3A200487EE3C8A1F9F241B();
	void OnTimelineTick_98677D9D4F3A200487EE3C8A1F9F241B(float CurveValue, float Curve2Value, float Curve3Value, float Curve4Value);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void Setup_New_Realm_Environmental_Effects();
	void Trigger_Transcend_Audio_Events();
	void InitTranscendTimelineEffects();
	void RunTranscendTimelineEffects();
	void OnTranscendTimelineEffectsFinished();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_BaseTranscendView(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_Timeline* CallFunc_AbilityTask_Timeline_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, float Temp_real_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float Temp_real_Variable_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, float Temp_real_Variable_2, TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue, float Temp_real_Variable_3, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FVector& CallFunc_Vector_Zero_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UNiagaraComponent* CallFunc_AddComponentByClass_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, float K2Node_CustomEvent_curveValue, float K2Node_CustomEvent_curve2Value, float K2Node_CustomEvent_curve3Value, float K2Node_CustomEvent_curve4Value, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, class UDualRealmLookController_BP_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_Event_bWasCancelled, int32 Temp_int_Array_Index_Variable, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, int32 CallFunc_PostAkAnathemaEvent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, int32 CallFunc_PostAkAnathemaEvent_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue);
};

}


