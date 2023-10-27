#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE2 (0x432 - 0x350)
// BlueprintGeneratedClass BP_SoulFlayActorSoul.BP_SoulFlayActorSoul_C
class ABP_SoulFlayActorSoul_C : public AHexSoulFlayCharacterSoul
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_SoulFlay_Teleport_Return_VFX;                  // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_SoulFlay_Teleport_Out_VFX;                     // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     FleshieSoulVFX;                                    // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SoulReturnAxiomTimeline_SoulPositionX_A2FE037A40BE341803DAFABD77CFB75F; // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SoulReturnAxiomTimeline__Direction_A2FE037A40BE341803DAFABD77CFB75F; // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SoulReturnAxiomTimeline;                           // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        SoulReturnUmbralTimeline_SoulPositionX_0C4D3F694E777D88C589C6BA51125EBF; // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SoulReturnUmbralTimeline__Direction_0C4D3F694E777D88C589C6BA51125EBF; // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SoulReturnUmbralTimeline;                          // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        SoulFlayPullTimeline_FallSpeedMultiplier_BA84B35942F5552A13E479A9D8CE6507; // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SoulFlayPullTimeline_SoulPositionX_BA84B35942F5552A13E479A9D8CE6507; // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SoulFlayPullTimeline__Direction_BA84B35942F5552A13E479A9D8CE6507; // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SoulFlayPullTimeline;                              // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialSoulPullLocation;                           // 0x3A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DesiredSoulPullLocation;                           // 0x3C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DesiredSoulActorLocation;                          // 0x3D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTargetComponent*                      PrevTargetPoint;                                   // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       SoulPositionOffsetX;                               // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SoulCurrentOffsetX;                                // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SoulPrevPosX;                                      // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PulledSoul_MaterialDesaturationParamName;          // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PulledSoul_DynamicMaterialIntance;                 // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FleshieSoulVFX_Blast_Appear;                       // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UNiagaraSystem*                        FleshieSoulVFX_Blast_Disappear;                    // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	enum class EGameRealm                        Performed_Realm;                                   // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseOriginalSoulFlayBehavior;                      // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SoulFlayActorSoul_C* GetDefaultObj();

	double CalculateSoulDesaturation_MojoFeedback(class AActor* CallFunc_GetOwner_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UMojoComponent* CallFunc_GetMojoComponent_ReturnValue, float CallFunc_GetMojo_ReturnValue, float CallFunc_GetMojoCapacity_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void UpdatePulledSoul_MojoFeedback(double CallFunc_CalculateSoulDesaturation_MojoFeedback_ReturnValue, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void SetPulledSoulMaterial(class UMaterialInterface* MaterialInstance, class FName DesaturationParamName, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ShouldPerformLogic(bool* Result, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SoulReturnUmbralTimeline__FinishedFunc();
	void SoulReturnUmbralTimeline__UpdateFunc();
	void SoulReturnAxiomTimeline__FinishedFunc();
	void SoulReturnAxiomTimeline__UpdateFunc();
	void SoulFlayPullTimeline__FinishedFunc();
	void SoulFlayPullTimeline__UpdateFunc();
	void SoulFlayPullTimeline__DisableCollision__EventFunc();
	void SoulFlayPullTimeline__EnableCollision__EventFunc();
	void SoulFlayPullTimeline__SpawnDamageArea__EventFunc();
	void Perform_SoulReturn();
	void Perform_Soul_Pull();
	void BP_PerformSoulPull(enum class EGameRealm PerformedRealm);
	void ReceiveBeginPlay();
	void SpawnSoulBlastParticles(class UNiagaraSystem* SoulBlast_NiagaraSystem);
	void InitFleshieSoulVFX();
	void Remove_Soulflay_Victims();
	void ExecuteUbergraph_BP_SoulFlayActorSoul(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_3, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, enum class EGameRealm K2Node_Event_performedRealm, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FSpawnDefinition& K2Node_MakeStruct_SpawnDefinition, bool CallFunc_ShouldPerformLogic_Result, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1, float CallFunc_GetScaledCapsuleRadius_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, class UNiagaraSystem* K2Node_CustomEvent_SoulBlast_NiagaraSystem, double CallFunc_CalculateSoulDesaturation_MojoFeedback_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, double CallFunc_Vector_Distance_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_4, class UHexSoulFlayComponent* CallFunc_GetSoulFlayComponentFromActor_ReturnValue, class UHexCharacterSoulFlayComponent* K2Node_DynamicCast_AsHex_Character_Soul_Flay_Component, bool K2Node_DynamicCast_bSuccess_1, class APlayerCharacter* CallFunc_GetInstigatorCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_BreakVector_NetQuantizeNormal_X, double CallFunc_BreakVector_NetQuantizeNormal_Y, double CallFunc_BreakVector_NetQuantizeNormal_Z, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_BreakVector_NetQuantizeNormal_X_1, double CallFunc_BreakVector_NetQuantizeNormal_Y_1, double CallFunc_BreakVector_NetQuantizeNormal_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_3, bool CallFunc_K2_SetActorLocation_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_SoulPrevPosX_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast_2, float K2Node_VariableSet_SoulFallSpeedMultiplier_ImplicitCast);
};

}


