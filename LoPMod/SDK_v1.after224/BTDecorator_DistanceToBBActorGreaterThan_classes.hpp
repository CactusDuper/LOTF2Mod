#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x148 - 0xA0)
// BlueprintGeneratedClass BTDecorator_DistanceToBBActorGreaterThan.BTDecorator_DistanceToBBActorGreaterThan_C
class UBTDecorator_DistanceToBBActorGreaterThan_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                BBValue_Target;                                    // 0xA0(0x28)(Edit, BlueprintVisible)
	double                                       Distance;                                          // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBBForDistanceValue;                             // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BBValue_Distance;                                  // 0xD8(0x28)(Edit, BlueprintVisible)
	bool                                         bIsLocation;                                       // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDebug;                                         // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TwoD_Check;                                        // 0x102(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseOtherBBAsInstigator;                            // 0x103(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3810[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BBValue_Instigator;                                // 0x108(0x28)(Edit, BlueprintVisible)
	struct FVector                               InstigatorLocation;                                // 0x130(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTDecorator_DistanceToBBActorGreaterThan_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, double LocalDistance, class ALOTF2Character* LocalInstigatorCharacter, const struct FVector& TargetLocation, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetNavAgentLocation_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetNavAgentLocation_ReturnValue_1, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Vector_Distance_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_Vector_IsZero_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_2, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_2, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetNavAgentLocation_ReturnValue_2, double K2Node_VariableSet_LocalDistance_ImplicitCast);
};

}


