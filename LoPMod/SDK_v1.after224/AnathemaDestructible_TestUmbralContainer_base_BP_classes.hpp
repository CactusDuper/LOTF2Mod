#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x141 (0x5A9 - 0x468)
// BlueprintGeneratedClass AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C
class AAnathemaDestructible_TestUmbralContainer_base_BP_C : public ABase_AnathemaDestructible_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       SuperLootFXScene;                                  // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SuperLootFXComponent;                              // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_WispySoulSmoke_Umbral_Chest_VFX;               // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SoulflayCollider;                                  // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_UmbralContainer_SoulFlayTendrils_VFX;          // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_UmbralContainer_Socket;                         // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoulflayableHintWidgetComponent*      SoulflayableHintWidget;                            // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_UmbralContainer_light;                          // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_UC_Tendrils;                                   // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetComponent*                      Target;                                            // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHexSoulFlayComponent*                 HexSoulFlayComponent;                              // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDualRealmStateComponent*              DualRealmState;                                    // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMojoComponent*                        Mojo;                                              // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVigorComponent*                       Vigor;                                             // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   ItemSpawnLocation;                                 // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveItemDropSystem_TransferAnimation_94C2A8884BA8610B9AEA928F42A45838; // 0x500(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveItemDropSystem_Transfer_94C2A8884BA8610B9AEA928F42A45838; // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveItemDropSystem__Direction_94C2A8884BA8610B9AEA928F42A45838; // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_132[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MoveItemDropSystem;                                // 0x520(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        New_Mojo;                                          // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_133[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   LootTable;                                         // 0x530(0x10)(Edit, BlueprintVisible, NoDestructor)
	class AAnathemaPlayerCharacter_BP_C*         HostPlayerCharacter;                               // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_134[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     MovingItemDrop;                                    // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               UmbralContainerLocation;                           // 0x558(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ItemSpawnLocationInWorld;                          // 0x570(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MovingItemDropDuration;                            // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FX_ContainerDestruction;                           // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DisplaySuperLootVFX;                               // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_135[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        SuperLootVFXVar;                                   // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class ESuperLootVFX                     SuperLootVFX;                                      // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAnathemaDestructible_TestUmbralContainer_base_BP_C* GetDefaultObj();

	void MoveItemDropSystem__FinishedFunc();
	void MoveItemDropSystem__UpdateFunc();
	void Completed_E680C11F47E4F60CB1344C9863A3D64B(int32 PlayingID);
	void ReceiveBeginPlay();
	void OnDestructibleDestroyed_BP();
	void OnDestructibleReset_BP();
	void BndEvt__AnathemaDestructible_TestUmbralContainer_base_BP_HexSoulFlayComponent_K2Node_ComponentBoundEvent_2_SoulPullStartedDelegate__DelegateSignature(class AActor* Instigator, const struct FVector& PullDirectionWS);
	void SpawnPickup();
	void DestroySuperLootFX();
	void ExecuteUbergraph_AnathemaDestructible_TestUmbralContainer_base_BP(int32 EntryPoint, int32 K2Node_CustomEvent_PlayingID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayAbilitySpecHandle& CallFunc_K2_GiveAbility_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UPostEventAtLocationAsync* CallFunc_PostEventAtLocationAsync_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, class AActor* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_PullDirectionWS, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_IsHost_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, const struct FGameplayAbilityTargetDataHandle& CallFunc_MakeSpawnPickupTargetDataHandle_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetPlayRate_NewRate_ImplicitCast);
};

}


