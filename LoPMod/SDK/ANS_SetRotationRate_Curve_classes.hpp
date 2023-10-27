#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xB9 - 0xB0)
// BlueprintGeneratedClass ANS_SetRotationRate_Curve.ANS_SetRotationRate_Curve_C
class UANS_SetRotationRate_Curve_C : public UANS_HexSetRotationRate
{
public:
	class UCurveFloat*                           RotationRateCurve;                                 // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         PrintDebug;                                        // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_SetRotationRate_Curve_C* GetDefaultObj();

	void BP_NotifyEndImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class UObject* CustomData, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess);
	void BP_NotifyTickImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, float FrameDeltaTime, class UObject* CustomData, double RotationRateValue, bool ShouldApplyModifier, bool IsModifierApplied, class FName RotationRateId, class ALOTF2Character* LOTF2Character, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetTargetedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_ContainsRotationRateOverride_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_AddRotationRateOverride_value_ImplicitCast, float CallFunc_SetRotationRateOverrideValue_value_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double K2Node_VariableSet_RotationRateValue_ImplicitCast);
};

}


