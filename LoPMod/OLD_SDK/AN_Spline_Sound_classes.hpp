#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3B8 - 0x2F8)
// BlueprintGeneratedClass AN_Spline_Sound.AN_Spline_Sound_C
class AAN_Spline_Sound_C : public ASplineSound
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkAnathemaComponent*                  AkAnathema;                                        // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDebug;                                         // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Ak_Audio_Event;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Occlusion_Refresh_Interval;                        // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RadiusMultiplier;                                  // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Outer_Spread_Radius;                               // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Inner_Spread_Radius;                               // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidAKEvent;                                      // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Playing_ID;                                        // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       ShowAKPath;                                        // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExternalSphereRadius;                              // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AttenuationSphereRadius;                           // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   ExternalSphere;                                    // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   AttenuationSphere;                                 // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   InnerSpreadSphere;                                 // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   OuterSpreadSphere;                                 // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Speaker;                                           // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       TickOffset;                                        // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   LODSphere;                                         // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       LOD_Radius;                                        // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAN_Spline_Sound_C* GetDefaultObj();

	void IsDebugNecessary(bool* ShowDebug, bool ShowDebugLocal, const class FString& CallFunc_GetPlatformUserName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAN_AudioAmbientVisualization_Struct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsEditor_ReturnValue);
	void SetLODRadius(double MaxDistanceToRoot, const struct FVector& SplineLocation, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void ChangeSplinePointsToLinear(int32 Temp_int_Variable, enum class ESplinePointType CallFunc_GetSplinePointType_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SetDebugSpheresRadius(float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_1, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_2, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_3, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_4);
	void CreateDebugObjects(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, const struct FTransform& Temp_struct_Variable_2, const struct FTransform& Temp_struct_Variable_3, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_2, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_3, const struct FTransform& Temp_struct_Variable_4, const struct FTransform& Temp_struct_Variable_5, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_4, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_5);
	void IsAKEventValid(bool* IsAKValid, bool CallFunc_IsValid_ReturnValue);
	void MoveAKAlongSpline(float CallFunc_GetSplineLength_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FRotator& CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast, float CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast);
	void DeleteSplineMesh(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void DestroyDebugComponents();
	void Set_Occlusion_Refresh_Interval(float K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast);
	void Show_Debug_Objects();
	void SetVisibilityDebugObjects();
	void Set_Sphere_Radius(float CallFunc_GetMaxAttenuationRadius_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_SetGameObjectRadius_in_outerRadius_ImplicitCast, float CallFunc_SetGameObjectRadius_in_innerRadius_ImplicitCast, double K2Node_VariableSet_ExternalSphereRadius_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_MaxDistance_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_Outer_Spread_Radius_ImplicitCast);
	void Show_Debug_Script(double CallFunc_Vector_Distance_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void AddMeshToSpline(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& Temp_struct_Variable, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void UserConstructionScript(bool CallFunc_isDebugNecessary_ShowDebug, bool CallFunc_isAKEventValid_isAKValid);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StopSoundReset();
	void StartSoundReset();
	void StartPlaySound();
	void StopPlaySound();
	void CustomEvent(enum class EWorldResetReason ResetReason);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_AN_Spline_Sound(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, int32 CallFunc_PostAssociatedAkEventAsync_PlayingID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_isDebugNecessary_ShowDebug, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GetLOTF2GameMode_IsValid, class ALOTF2GameMode* CallFunc_GetLOTF2GameMode_GameMode, enum class EWorldResetReason K2Node_CustomEvent_resetReason, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_TickIntervalOutOfRange_ImplicitCast);
};

}


