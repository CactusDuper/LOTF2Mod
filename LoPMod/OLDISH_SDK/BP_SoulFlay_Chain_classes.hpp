#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x121 (0x3C9 - 0x2A8)
// BlueprintGeneratedClass BP_SoulFlay_Chain.BP_SoulFlay_Chain_C
class ABP_SoulFlay_Chain_C : public ALOTF2BlueprintSerializableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkAnathemaComponent*                  AkAnathema;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor;                                        // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Chain_Visuals;                                     // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Fade_FadeMask_97D769A9413BED5C9A841CB3B49B97FD;    // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fade__Direction_97D769A9413BED5C9A841CB3B49B97FD;  // 0x2E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_438F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fade;                                              // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_SoulFlay_Chain_Blocker_C*          _ReadMinusonly__Owning_SoulFlay_Blocker;           // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Soul_Flay_success;                                 // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Can_Be_Flayed;                                     // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4390[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               Children_StaticMeshes;                             // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UAkAudioEvent*                         Sound_to_Play_on_Break;                            // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FX_to_Play_on_Break;                               // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Attatched_Actors;                                  // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         AlreadyFlayed;                                     // 0x340(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4391[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeDuration_sec_;                                 // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CollisionDisabling_sec_;                           // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fx_fade_delay;                                     // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4392[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Init_Radius;                                       // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       End_Radius;                                        // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Lenght;                                       // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Fade_In;                                      // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Fade_Out_Distance;                            // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Lantern_Position;                                  // 0x380(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Lantern_Forward;                                   // 0x398(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkUmbralSpotSound;                                 // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        AkEventID;                                         // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4393[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HexSoulflayableActor;                              // 0x3C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGoingToDestroyChains;                            // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SoulFlay_Chain_C* GetDefaultObj();

	void OnRep_AlreadyFlayed();
	void UmbralSpotSound(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_ComputeShiningMask_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue_2, float CallFunc_GetScalarParameterValue_ReturnValue_3, float CallFunc_GetScalarParameterValue_ReturnValue_4, float CallFunc_GetScalarParameterValue_ReturnValue_5, float CallFunc_ComputeShiningMask_initRadius_ImplicitCast, float CallFunc_ComputeShiningMask_radiusFadeIn_ImplicitCast, float CallFunc_ComputeShiningMask_fadeOutDistance_ImplicitCast, float CallFunc_ComputeShiningMask_endRadius_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_ComputeShiningMask_coneLength_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, double K2Node_VariableSet_Cone_Lenght_ImplicitCast, double K2Node_VariableSet_Cone_Fade_Out_Distance_ImplicitCast, double K2Node_VariableSet_Cone_Fade_In_ImplicitCast, double K2Node_VariableSet_End_Radius_ImplicitCast, double K2Node_VariableSet_Init_Radius_ImplicitCast);
	void Fade__FinishedFunc();
	void Fade__UpdateFunc();
	void OnActorSpawned_B29E33A3459F7E54039BCCB0A0CF0D34(class AActor* SpawnedActor);
	void ReceiveBeginPlay();
	void Set_link(class ABP_SoulFlay_Chain_Blocker_C* _ReadMinusonly__Owning_SoulFlay_Blocker);
	void Destroy_Chains();
	void OnApplySoulFlay(struct FVector& PullDirection);
	void Silent_DestroyChains();
	void Kill_soulflayTarget();
	void ReceiveTick(float DeltaSeconds);
	void Destroy_Attached();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnRequestComponentVisuals_Event(enum class EGameRealm GameRealm);
	void ExecuteUbergraph_BP_SoulFlay_Chain(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class ULOTF2SaveGameManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, class ABP_SoulFlay_Chain_Blocker_C* K2Node_CustomEvent__Read_only__Owning_SoulFlay_Blocker, const struct FVector& K2Node_Event_pullDirection, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Array_Index_Variable_1, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_SaveGameAsync_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_DoubleDouble_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class AActor* Temp_object_Variable, class UHexReplaceChildActorForMultiplayerLatent* CallFunc_ReplaceChildActorForMultiplayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, class AHexSoulFlayableObject_SimpleYankableDude_BP_C* K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Simple_Yankable_Dude_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class AActor* K2Node_CustomEvent_spawnedActor, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_5, enum class EGameRealm K2Node_CustomEvent_gameRealm, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable_3, class AActor* CallFunc_Array_Get_Item_3, class ABP_UmbralChain_C* K2Node_DynamicCast_AsBP_Umbral_Chain, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue, double CallFunc_SetMask_New_Mask_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
	void Soul_Flay_success__DelegateSignature();
};

}


