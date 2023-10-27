#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3A0 - 0x2A0)
// BlueprintGeneratedClass BP_SplineMeshRoad.BP_SplineMeshRoad_C
class ABP_SplineMeshRoad_C : public AActor
{
public:
	class USceneComponent*                       Root;                                              // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       MeshDrawDistance;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           SplineMesh;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           SplineMeshVar1;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           SplineMeshVar2;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Variation1List;                                    // 0x2D8(0x10)(Edit, BlueprintVisible)
	class UStaticMesh*                           EndMesh;                                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           StartMesh;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndMeshOffset;                                     // 0x2F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartMeshOffset;                                   // 0x310(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasEndMesh;                                        // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasStartMesh;                                      // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D84[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       UnionOffset;                                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                  Mesh;                                              // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material_0;                                        // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material_1;                                        // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material_2;                                        // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       InvertFloat;                                       // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInvertMesh;                                       // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USplineMeshComponent*                  MeshVar1;                                          // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                MainList;                                          // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USplineMeshComponent*                  MeshVar2;                                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Variation2List;                                    // 0x388(0x10)(Edit, BlueprintVisible)
	class UMaterialInterface*                    Material_3;                                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SplineMeshRoad_C* GetDefaultObj();

	void Collision_Material(class UPrimitiveComponent* Target, int32 Num_Materials, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3);
	struct FVector SetUnionOffset(const struct FVector& InVec, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_2, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_2, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_3, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_3, const struct FVector& CallFunc_GetEndPosition_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_Array_Get_Item_4, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_8, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_4, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_4, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, const struct FTransform& Temp_struct_Variable_2, bool CallFunc_SetStaticMesh_ReturnValue_3, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_4, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_5, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_5, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_6, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_6, const struct FVector& CallFunc_SetUnionOffset_ReturnValue, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2);
};

}


