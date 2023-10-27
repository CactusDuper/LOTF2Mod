#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x5A8 - 0x518)
// BlueprintGeneratedClass GA_BlockAbility.GA_BlockAbility_C
class UGA_BlockAbility_C : public UGA_BlockAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       LastActivationTimestamp;                           // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ParryWindowMultipier;                              // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ParryTimingByTimeSinceActivated;                   // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ParryEffect;                                       // 0x538(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ActorToGetASCFromForParryWindow;                   // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBasePlayerAnimInstance*               Base_Player_Anim_Instance;                         // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      BlockSound;                                        // 0x550(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAnathemaComponent*                  BlockSoundComponent;                               // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_BlockAbility_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_BlockAbility(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_GetForceParryDebug_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetTimeSeconds_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetBlockingWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBasePlayerAnimInstance* K2Node_DynamicCast_AsBase_Player_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool K2Node_Event_bWasCancelled, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_VariableSet_ParryWindowMultipier_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
};

}


