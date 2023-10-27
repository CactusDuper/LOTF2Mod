#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x418 - 0x318)
// BlueprintGeneratedClass DualRealmWhisper_BP.DualRealmWhisper_BP_C
class ADualRealmWhisper_BP_C : public ADualRealmWhisper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoulflayableHintWidgetComponent*      SoulflayableHintWidget;                            // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_Stigma_Activation_VFX;                         // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_WispySoulSmoke_SM_VFX;                         // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_Soul;                                   // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     MothsVFX;                                          // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_Whisper_Shine_proto_VFX;                       // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_Whisper_Shine_proto_COMPLETED_VFX;             // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          Ak;                                                // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnchorForbiddenAreaComponent*         AnchorForbiddenArea;                               // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UItemDropForbiddenAreaComponent*       ItemDropForbiddenArea;                             // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_MasterOpacity_8E33FB8541D8D72D7C7BB381CD0BC676; // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_8E33FB8541D8D72D7C7BB381CD0BC676; // 0x394(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      Ak_Anathema_Event_Sequence_Whisper;                // 0x3A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                    WhisperMaterial;                                   // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               WhisperStatuesDistanceArray;                       // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        WhisperStatues;                                    // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class ADualRealmWhisper_BP_C* GetDefaultObj();

	void HideWhisperStatues(bool ShouldHide, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetWhisperMaterial(class AActor* WhisperStatue, class AStaticMeshActor* K2Node_DynamicCast_AsStatic_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class ASkeletalMeshActor* K2Node_DynamicCast_AsSkeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void UpdateStateVisuals(enum class EDualRealmWhisperState WhisperState, bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript(const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, float CallFunc_BreakVector3f_X_1, float CallFunc_BreakVector3f_Y_1, float CallFunc_BreakVector3f_Z_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_2, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_3, double CallFunc_MakeVector_Z_ImplicitCast_1);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void BPI_PauseMothActor();
	void BPI_KillMothAtractor();
	void BPI_MothActorRegister(class AActor* MothActor);
	void BPI_ResumeMothActor();
	void BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer);
	void BPI_Close_Portculis();
	void OnWhisperPlay();
	void UpdateStateVisibility(enum class EDualRealmWhisperState NewState);
	void ReceiveBeginPlay();
	void BndEvt__DualRealmWhisper_BP_SoulflayComp_K2Node_ComponentBoundEvent_5_SoulPullStartedDelegate__DelegateSignature(class AActor* Instigator, const struct FVector& PullDirectionWS);
	void MulticastOnUpdateStateVisibility(enum class EDualRealmWhisperState NewState);
	void MulticastOnWhisperPlay();
	void MulticastOnSoulPullStarted();
	void ExecuteUbergraph_DualRealmWhisper_BP(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* K2Node_Event_MothActor, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, enum class EDualRealmWhisperState K2Node_Event_newState, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetComponentBounds_Origin_1, const struct FVector& CallFunc_GetComponentBounds_BoxExtent_1, float CallFunc_GetComponentBounds_SphereRadius_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, class AStaticMeshActor* K2Node_DynamicCast_AsStatic_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class ASkeletalMeshActor* K2Node_DynamicCast_AsSkeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue, class AActor* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_PullDirectionWS, enum class EDualRealmWhisperState K2Node_CustomEvent_NewState, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, double CallFunc_VSize_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
};

}


