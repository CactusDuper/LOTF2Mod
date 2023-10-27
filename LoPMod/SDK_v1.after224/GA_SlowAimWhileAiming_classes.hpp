#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x470 - 0x448)
// BlueprintGeneratedClass GA_SlowAimWhileAiming.GA_SlowAimWhileAiming_C
class UGA_SlowAimWhileAiming_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       NewInputYawScale;                                  // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewInputPitchScale;                                // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PreviousInputPitchScale;                           // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PreviousInputYawScale;                             // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SlowAimWhileAiming_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_SlowAimWhileAiming(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ACharacter* CallFunc_CastToCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool K2Node_Event_bWasCancelled, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ACharacter* CallFunc_CastToCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDeprecatedInputPitchScale_ReturnValue, float CallFunc_GetDeprecatedInputYawScale_ReturnValue, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast, double K2Node_VariableSet_PreviousInputPitchScale_ImplicitCast, double K2Node_VariableSet_PreviousInputYawScale_ImplicitCast, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1);
};

}


