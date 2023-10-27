#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass ANS_FallOnKnockDown.ANS_FallOnKnockDown_C
class UANS_FallOnKnockDown_C : public UAnimNotifyState_BaseConditionalTag
{
public:

	static class UClass* StaticClass();
	static class UANS_FallOnKnockDown_C* GetDefaultObj();

	void BP_NotifyEndImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class UObject* CustomData, class ALOTF2Character* LOTF2Character, bool OnGround, enum class EMovementMode Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EMovementMode Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_SetLooseGameplayTagCount_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, enum class EMovementMode K2Node_Select_Default, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, const struct FFindFloorResult& CallFunc_K2_ComputeFloorDist_FloorResult, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FVector& CallFunc_Vector_Up_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_SetLooseGameplayTagCount_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_SetLooseGameplayTagCount_ReturnValue_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void BP_NotifyBeginImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, float TotalDuration, int32 MontageInstanceID, class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess);
};

}


