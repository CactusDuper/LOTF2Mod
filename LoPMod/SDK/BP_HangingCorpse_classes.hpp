#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x3C8 - 0x2A8)
// BlueprintGeneratedClass BP_HangingCorpse.BP_HangingCorpse_C
class ABP_HangingCorpse_C : public ALOTF2BlueprintSerializableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   ItemSpawnLocation;                                 // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetComponent*                      TargetHUD;                                         // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_Item_Shine_VFX;                                // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Damage_Detector;                                   // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Corpse;                                            // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealthComponent*                      Health;                                            // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HXMove_Item_Drop_System_TransferAnimation_03EC201E4B479FF211466795777C5582; // 0x2F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HXMove_Item_Drop_System_Transfer_03EC201E4B479FF211466795777C5582; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                HXMove_Item_Drop_System__Direction_03EC201E4B479FF211466795777C5582; // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    HXMove_Item_Drop_System;                           // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Loot_Table;                                        // 0x318(0x10)(Edit, BlueprintVisible, NoDestructor)
	TArray<class FName>                          Item_Tags_To_Add;                                  // 0x328(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          WorkingArray;                                      // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               Spawn_offset;                                      // 0x348(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyDestroyed;                                  // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAnathemaPlayerCharacter_BP_C*         HostPlayerCharacter;                               // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     MovingItemDrop;                                    // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               UmbralContainerLocation;                           // 0x378(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ItemSpawnLocationInWorld;                          // 0x390(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MovingItemDropDuration;                            // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXworldLocation;                                   // 0x3B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HangingCorpse_C* GetDefaultObj();

	void SerializeAndSave(class ULOTF2SaveGameManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_SaveGameAsync_ReturnValue);
	void CloneServerTransform(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void AddItemTags(class ACorpseOnly_Treasure_BP_C* CorpseTreasureCast, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast, double CallFunc_MakeVector4_X_ImplicitCast, double CallFunc_MakeVector4_Y_ImplicitCast, double CallFunc_MakeVector4_Z_ImplicitCast);
	void HXMove_Item_Drop_System__FinishedFunc();
	void HXMove_Item_Drop_System__UpdateFunc();
	void Completed_FD39F22F49C1A9E22D1D819EECAC70FE(int32 PlayingID);
	void Completed_1643D7314F22CF9253F42DB644EA9F55(int32 PlayingID);
	void BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer);
	void BPI_Close_Portculis();
	void BndEvt__HangingCorpse_BP_Health_K2Node_ComponentBoundEvent_8_HealthComponentOnTakeDamageDelegate__DelegateSignature(class AActor* DamagedActor, float Damage, const struct FGameplayTagContainer& AllAssetTags, class AActor* InstigatedBy, class AActor* DamageCauser, enum class EHexAttackTypeEffectivenes AttackTypeEffectiveness);
	void ReceiveBeginPlay();
	void BndEvt__BP_HangingCorpse_DissolveFXComponent_K2Node_ComponentBoundEvent_0_OnDissolveEnd__DelegateSignature();
	void SpawnPickup();
	void ExecuteUbergraph_BP_HangingCorpse(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 K2Node_CustomEvent_PlayingID_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_PlayingID, int32 Temp_int_Variable_1, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, class AActor* K2Node_ComponentBoundEvent_DamagedActor, float K2Node_ComponentBoundEvent_Damage, const struct FGameplayTagContainer& K2Node_ComponentBoundEvent_AllAssetTags, class AActor* K2Node_ComponentBoundEvent_InstigatedBy, class AActor* K2Node_ComponentBoundEvent_DamageCauser, enum class EHexAttackTypeEffectivenes K2Node_ComponentBoundEvent_attackTypeEffectiveness, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UPostEventAtLocationAsync* CallFunc_PostEventAtLocationAsync_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, bool CallFunc_IsHost_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APickup_WipTreasure_BP_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, class UPostEventAtLocationAsync* CallFunc_PostEventAtLocationAsync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast);
};

}


