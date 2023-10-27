#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x135 (0x3DD - 0x2A8)
// BlueprintGeneratedClass BP_SoulFlay_Chain_Blocker.BP_SoulFlay_Chain_Blocker_C
class ABP_SoulFlay_Chain_Blocker_C : public ALOTF2BlueprintSerializableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAnathemaComponent*                  AkAnathema;                                        // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Umbral_Eye_02;                                  // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         InteractionVolume;                                 // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavModifierComponent*                 NavModifier;                                       // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Blocker_Visuals;                                   // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeFlower_DissolveAmount_BBD8C2B94F921EF9D51FDA9983B48353; // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeFlower__Direction_BBD8C2B94F921EF9D51FDA9983B48353; // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4334[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeFlower;                                        // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SoulFlay_Chain_C*>          Chains_to_unlock;                                  // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Number_of_Flays;                                   // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4335[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               Children_Static_Meshes;                            // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UAkAudioEvent*                         Sound_to_Play_on_Break;                            // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FX_to_Play_on_Break;                               // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Unlocked;                                          // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Seconds_before_blocker_destroyed;                  // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  InteractMessage;                                   // 0x348(0x18)(Edit, BlueprintVisible)
	double                                       Init_Radius;                                       // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       End_Radius;                                        // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Lenght;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Fade_In;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cone_Fade_Out_Distance;                            // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Lantern_Position;                                  // 0x388(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Lantern_Forward;                                   // 0x3A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkUmbralFlowerSound;                               // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        AkEventID;                                         // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4337[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_TotemParasite_Base_Spawner_NotPlaceable_C*> ParasiteTotemsToKill;                              // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                        Seconds_before_collisions_disabled;                // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBeingSilentlyDestroyed;                          // 0x3DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SoulFlay_Chain_Blocker_C* GetDefaultObj();

	void UmbralFlowerSound(float CallFunc_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_ComputeShiningMask_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue_2, float CallFunc_GetScalarParameterValue_ReturnValue_3, float CallFunc_GetScalarParameterValue_ReturnValue_4, float CallFunc_GetScalarParameterValue_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_ComputeShiningMask_initRadius_ImplicitCast, float CallFunc_ComputeShiningMask_radiusFadeIn_ImplicitCast, float CallFunc_ComputeShiningMask_fadeOutDistance_ImplicitCast, float CallFunc_ComputeShiningMask_endRadius_ImplicitCast, float CallFunc_ComputeShiningMask_coneLength_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, double K2Node_VariableSet_Cone_Lenght_ImplicitCast, double K2Node_VariableSet_Cone_Fade_Out_Distance_ImplicitCast, double K2Node_VariableSet_Cone_Fade_In_ImplicitCast, double K2Node_VariableSet_End_Radius_ImplicitCast, double K2Node_VariableSet_Init_Radius_ImplicitCast);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_SoulFlay_Chain_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void FadeFlower__FinishedFunc();
	void FadeFlower__UpdateFunc();
	void ReceiveBeginPlay();
	void Bind_SoulFlay();
	void Destroy_Blockers();
	void Silent_DestroyBlockers();
	void BndEvt__BP_SoulFlay_Chain_Blocker_InteractionVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void OnParasiteTotemSpawned(class ASimpleCharacterSpawner* Spawner, class ALOTF2Character* Character);
	void TryToUnlock();
	void StartDestroyFXAudio();
	void OnRequestComponentVisuals_Event(enum class EGameRealm GameRealm);
	void ExecuteUbergraph_BP_SoulFlay_Chain_Blocker(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, class ABP_SoulFlay_Chain_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_4, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_DeltaSeconds, int32 Temp_int_Array_Index_Variable_5, class USceneComponent* CallFunc_Array_Get_Item_2, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, class ABP_TotemParasite_Base_Spawner_NotPlaceable_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class ASimpleCharacterSpawner* K2Node_CustomEvent_spawner, class ALOTF2Character* K2Node_CustomEvent_Character, class ABP_TotemParasite_Base_Spawner_NotPlaceable_C* CallFunc_Array_Get_Item_4, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue_1, enum class ESpawnerSpawningState CallFunc_GetSpawnerSpawningState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_3, class USceneComponent* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_6, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_7, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AWBP_LOTF2HUD_C* K2Node_DynamicCast_AsWBP_LOTF2HUD, bool K2Node_DynamicCast_bSuccess_3, class ULOTF2SaveGameManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_SaveGameAsync_ReturnValue, enum class EGameRealm K2Node_CustomEvent_gameRealm, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}

