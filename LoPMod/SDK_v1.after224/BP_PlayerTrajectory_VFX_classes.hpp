#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x2CC - 0x2A0)
// BlueprintGeneratedClass BP_PlayerTrajectory_VFX.BP_PlayerTrajectory_VFX_C
class ABP_PlayerTrajectory_VFX_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                      SplineComponent;                                   // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>          SplineMeshComponentArray;                          // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        StartingMaxLength;                                 // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerTrajectory_VFX_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PlayerTrajectory_VFX(int32 EntryPoint, int32 Temp_int_Variable, class USplineMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetEndTangent_ReturnValue, const struct FVector& CallFunc_GetEndPosition_ReturnValue, const struct FVector& CallFunc_GetStartTangent_ReturnValue, const struct FVector& CallFunc_GetStartPosition_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Variable_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class USplineMeshComponent* CallFunc_Array_Get_Item_1);
};

}


