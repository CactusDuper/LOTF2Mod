#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x5A8 - 0x458)
// BlueprintGeneratedClass GA_SoulsLanternShining.GA_SoulsLanternShining_C
class UGA_SoulsLanternShining_C : public UGA_SoulsLanternShining
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAkAnathemaEvent                      PlayLanternOff;                                    // 0x460(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      PlayLanternOn;                                     // 0x4B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimInstance*                         AnimInstance;                                      // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      AkAnathemaEvent_LampLoop;                          // 0x508(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      AkAnathemaEvent_LampLoopStop;                      // 0x558(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_SoulsLanternShining_C* GetDefaultObj();

	void GetSoulsLanternActor(class ADualRealmSoulsLanternActor_BP_C** AsDual_Realm_Souls_Lantern_Actor_BP, class UObject* CallFunc_GetOuterObject_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess_1);
	void OnTimelineEnd_50D99A954F907F40DC1945BED0D104D3();
	void OnTimelineTick_50D99A954F907F40DC1945BED0D104D3(float CurveValue, float Curve2Value, float Curve3Value, float Curve4Value);
	void OnTick_AFCA4AE3439F731505120EBE6A516A68(float DeltaTime);
	void OnFinish_A7340A50490D2C3A75DA4C82D1413001();
	void Removed_DF070E8F479C827A6AD99892D863C6D8();
	void Added_79E474BB4354B5FF36E1D48141F59BFB();
	void RunShiningTimeline();
	void OnStartShiningVisuals();
	void OnStopShiningVisuals();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnShiningInhibited();
	void OnShiningActivated();
	void AudioSFX_LanternON();
	void AudioSFX_LanternOFF();
	void ExecuteUbergraph_GA_SoulsLanternShining(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, TArray<class UPointLightComponent*>& CallFunc_GetComponentsByTag_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, class UPointLightComponent* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_4, class UObject* CallFunc_GetOuterObject_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, TArray<class UPointLightComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, class UPointLightComponent* CallFunc_Array_Get_Item_1, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_5, class UAbilityTask_Timeline* CallFunc_AbilityTask_Timeline_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_1, bool CallFunc_IsValid_ReturnValue_7, float Temp_real_Variable, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, class UObject* CallFunc_GetOuterObject_ReturnValue_2, class ANaturalLighting* CallFunc_GetNaturalLighting_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_8, const struct FNaturalLightingPlayerLightData& CallFunc_GetPlayerLightData_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float Temp_real_Variable_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class ANaturalLighting* CallFunc_GetNaturalLighting_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, const struct FNaturalLightingPlayerLightData& CallFunc_GetPlayerLightData_ReturnValue_1, class UAbilityTask_Tick* CallFunc_CreateTickTask_ReturnValue, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_12, float Temp_real_Variable_2, float Temp_real_Variable_3, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_3, float Temp_real_Variable_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float K2Node_CustomEvent_DeltaTime, float K2Node_CustomEvent_curveValue, float K2Node_CustomEvent_curve2Value, float K2Node_CustomEvent_curve3Value, float K2Node_CustomEvent_curve4Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_4, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsLocallyControlled_ReturnValue_1, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetOuterConeAngle_NewOuterConeAngle_ImplicitCast, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_4, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1);
};

}


