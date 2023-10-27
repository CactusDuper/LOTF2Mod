#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x610 - 0x550)
// BlueprintGeneratedClass GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C
class UGA_LanternSyphoning_PlayerAbsorb_C : public UGA_LanternSyphoning_PlayerAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  CurrentFeedbackVFXStateName;                       // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      AkAnathemaEvent_SyphonStartPlay;                   // 0x560(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      AkAnathemaEvent_SyphonStop;                        // 0x5B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          LanternSyphoningAbsorb_GameplayCueTag;             // 0x600(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LanternSyphoningNoTargets_GameplayCueTag;          // 0x608(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_LanternSyphoning_PlayerAbsorb_C* GetDefaultObj();

	void RemoveLanternFeedbackGameplayCue(const struct FGameplayTag& GameplayCueTag, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue);
	void AddLanternFeedbackGameplayCue(const struct FGameplayTag& GameplayCueTag, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue);
	void RemoveGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void AddGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	class ASoulsLanternActor* GetOwningPlayerSoulsLanternActor(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnStateInterrupted_8F2110454D4E91002E0638B0A5B8672D();
	void OnStateEnded_8F2110454D4E91002E0638B0A5B8672D();
	void OnStateInterrupted_DB2933834D3BAD8F1DD66D85DD20369A();
	void OnStateEnded_DB2933834D3BAD8F1DD66D85DD20369A();
	void SetCollisionConeLengthForSyphoning();
	void ResetCollisionConeLengthAfterSyphoning();
	void OnBeginSyphoning_BP();
	void K2_ActivateAbility();
	void OnUpdateActiveSyphoningTargets_BP();
	void OnEndSyphoning_BP();
	void ExecuteUbergraph_GA_LanternSyphoning_PlayerAbsorb(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName CallFunc_MakeLiteralName_ReturnValue, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, bool CallFunc_Set_IsNotEmpty_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_Collider_LanternSyphoning_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning, bool K2Node_DynamicCast_bSuccess_3, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_1, class ABP_Collider_LanternSyphoning_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_UpdateConeLength_NewScaleMultiplier_ImplicitCast);
};

}


