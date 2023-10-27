#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x480 - 0x3B0)
// BlueprintGeneratedClass Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C
class ABase_AnathemaItemContainer_BP_C : public AAnathemaItemContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_Item_Shine_VFX;                                // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       InteractionReferenceComponent;                     // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnchorForbiddenAreaComponent*         AnchorForbiddenArea;                               // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UItemDropForbiddenAreaComponent*       ItemDropForbiddenArea;                             // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Sound_on_Open_Chest;                               // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MothActor;                                         // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DelayOnPlaySound;                                  // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4372[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAnathemaPlayerCharacter_BP_C*         Interactor;                                        // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FXToPlay;                                          // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXOffsetPosition;                                  // 0x408(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            T;                                                 // 0x420(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABase_AnathemaItemContainer_BP_C* GetDefaultObj();

	void UserConstructionScript();
	void BPI_PauseMothActor();
	void BPI_KillMothAtractor();
	void BPI_MothActorRegister(class AActor* MothActor);
	void BPI_ResumeMothActor();
	void BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer);
	void BPI_Close_Portculis();
	void MCPlaySound();
	void OnInteraction(class UInteractionContext* InteractionContext);
	void DisableFX();
	void ReceiveBeginPlay();
	void SilentDestroyFX();
	void ExecuteUbergraph_Base_AnathemaItemContainer_BP(int32 EntryPoint, bool CallFunc_TryOpenInteraction_ReturnValue, class AActor* K2Node_Event_MothActor, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, TScriptInterface<class IBPI_MothInteractions_C> K2Node_DynamicCast_AsBPI_Moth_Interactions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInteractionContext* K2Node_Event_interactionContext, class AActor* CallFunc_GetInteractor_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FInteractableCurrentState& CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}


