#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x470 - 0x448)
// BlueprintGeneratedClass GA_Enemy_OnTakeDamage_AddTagCooldown.GA_Enemy_OnTakeDamage_AddTagCooldown_C
class UGA_Enemy_OnTakeDamage_AddTagCooldown_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Cooldown_Tag;                                      // 0x450(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                        Cooldown_Duration;                                 // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Add_to_Existing_Duration;                          // 0x45C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Ability_Cooldown;                                  // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ability_Cooldown_Min_Buffer;                       // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Enemy_OnTakeDamage_AddTagCooldown_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Enemy_OnTakeDamage_AddTagCooldown(int32 EntryPoint, bool Temp_bool_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AHexAIController_BP_C* K2Node_DynamicCast_AsHex_AIController_BP, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class UBehaviorTreeComponent* K2Node_DynamicCast_AsBehavior_Tree_Component, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
};

}


