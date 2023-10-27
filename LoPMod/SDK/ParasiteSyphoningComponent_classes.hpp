#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// BlueprintGeneratedClass ParasiteSyphoningComponent.ParasiteSyphoningComponent_C
class UParasiteSyphoningComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UParasiteSyphoningComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void On_Mojo_Change(float NewMojo, class AActor* MojoChangeInstigator);
	void ExecuteUbergraph_ParasiteSyphoningComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayAbilitySpecHandle& CallFunc_K2_GiveAbility_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FGameplayAbilitySpecHandle>& CallFunc_GetAllAbilities_OutAbilityHandles, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FGameplayAbilitySpecHandle& CallFunc_Array_Get_Item, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, class UMojoComponent* CallFunc_GetMojoComponent_ReturnValue, bool CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance, class UGameplayAbility* CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue, class UGA_LanternSyphoningTarget_ExtractFromEnemy_C* K2Node_DynamicCast_AsGA_Lantern_Syphoning_Target_Extract_from_Enemy, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_CustomEvent_newMojo, class AActor* K2Node_CustomEvent_mojoChangeInstigator, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}


