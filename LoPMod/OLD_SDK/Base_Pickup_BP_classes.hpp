#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x448 - 0x418)
// BlueprintGeneratedClass Base_Pickup_BP.Base_Pickup_BP_C
class ABase_Pickup_BP_C : public APickup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_Item_Shine_VFX;                                // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         SimulatePhysicsOnBeginPlay;                        // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Moth_Actor;                                        // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABase_Pickup_BP_C* GetDefaultObj();

	void BPI_PauseMothActor();
	void BPI_KillMothAtractor();
	void BPI_MothActorRegister(class AActor* MothActor);
	void BPI_ResumeMothActor();
	void BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer);
	void BPI_Close_Portculis();
	void BndEvt__Base_Pickup_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature(class UInteractionContext* Context);
	void ReceiveBeginPlay();
	void BPI_RegisterMothActor(class AActor* NewParam);
	void ExecuteUbergraph_Base_Pickup_BP(int32 EntryPoint, TScriptInterface<class IBPI_MothInteractions_C> K2Node_DynamicCast_AsBPI_Moth_Interactions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MothActor, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, class UInteractionContext* K2Node_ComponentBoundEvent_Context, class AActor* K2Node_Event_NewParam);
};

}


