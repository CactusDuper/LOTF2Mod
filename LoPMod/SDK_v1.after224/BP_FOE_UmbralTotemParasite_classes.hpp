#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6F (0xE68 - 0xDF9)
// BlueprintGeneratedClass BP_FOE_UmbralTotemParasite.BP_FOE_UmbralTotemParasite_C
class ABP_FOE_UmbralTotemParasite_C : public ABP_UmbrieBase_C
{
public:
	uint8                                        Pad_4386[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_Wispy_ParasyteSoul;                            // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Umbral_Base_TotemParasite;                      // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParasiteSyphoningComponent_C*         ParasiteSyphoningComponent;                        // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffectsApplierComponent*      GameplayEffectsApplier;                            // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         DefaultEffectAreaBox;                              // 0xE28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       EffectAreaCollisionsRoot;                          // 0xE30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsAffected;                                    // 0xE38(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class UNiagaraComponent*>             CreatedPNS;                                        // 0xE48(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        FoundIndex;                                        // 0xE58(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4387[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        FX_Totem_Death;                                    // 0xE60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FOE_UmbralTotemParasite_C* GetDefaultObj();

	void OverrideEffectAreaCollisions(class USceneComponent* NewEffectAreaCollisionsRoot, const TArray<class UPrimitiveComponent*>& NewEffectAreaCollisions, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumChildrenComponents_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetNumChildrenComponents_ReturnValue_1, class USceneComponent* CallFunc_GetChildComponent_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void OnDeath(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void BndEvt__BP_FOE_UmbralTotemParasite_GameplayEffectsApplier_K2Node_ComponentBoundEvent_0_OnAreaOveralpValidActor__DelegateSignature(class AActor* TargetActor, struct FHitResult& HitResult, bool bBlockedAttack);
	void BndEvt__BP_FOE_UmbralTotemParasite_GameplayEffectsApplier_K2Node_ComponentBoundEvent_1_OnAreaEndOveralpValidActor__DelegateSignature(class AActor* TargetActor);
	void ReceiveTick(float DeltaSeconds);
	void OnMojoChanged(float NewMojo, class AActor* MojoChangeInstigator);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_FOE_UmbralTotemParasite(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_instigatorActor, const struct FGameplayTagContainer& K2Node_Event_instigatorTags, bool K2Node_Event_bDeathWasObserved, class AActor* K2Node_ComponentBoundEvent_TargetActor_1, const struct FHitResult& K2Node_ComponentBoundEvent_hitResult, bool K2Node_ComponentBoundEvent_bBlockedAttack, class AActor* K2Node_ComponentBoundEvent_TargetActor, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, float K2Node_Event_DeltaSeconds, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item_2, int32 Temp_int_Array_Index_Variable_1, class UNiagaraComponent* CallFunc_Array_Get_Item_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue, float K2Node_CustomEvent_newMojo, class AActor* K2Node_CustomEvent_mojoChangeInstigator, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class FName>& K2Node_MakeArray_Array, class UMojoComponent* CallFunc_GetMojoComponent_ReturnValue, float CallFunc_GetMojoCapacity_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


