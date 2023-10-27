#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4F8 - 0x4E0)
// BlueprintGeneratedClass GA_ReincarnateTransitionBP.GA_ReincarnateTransitionBP_C
class UGA_ReincarnateTransitionBP_C : public UGA_ReincarnateTransition
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DissolveDelay;                                     // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DC6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ReverseDissolveDelay;                              // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ReincarnateTransitionBP_C* GetDefaultObj();

	void K2_CommitExecute();
	void ExecuteUbergraph_GA_ReincarnateTransitionBP(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, class ATranscendLookController_C* K2Node_DynamicCast_AsTranscend_Look_Controller, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, enum class EHexMultiplayerRole CallFunc_GetMultiplayerRole_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}


