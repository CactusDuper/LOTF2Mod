#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x468 - 0x448)
// BlueprintGeneratedClass Pickup_WipTreasure_BP.Pickup_WipTreasure_BP_C
class APickup_WipTreasure_BP_C : public ABase_Pickup_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_ItemDrop_PickUp_VFX;                           // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        Destroy_Particles;                                 // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        Spawn_Particles;                                   // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APickup_WipTreasure_BP_C* GetDefaultObj();

	void ReceiveDestroyed();
	void BndEvt__Pickup_WipTreasure_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature(class UInteractionContext* Context);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Pickup_WipTreasure_BP(int32 EntryPoint, class UInteractionContext* K2Node_ComponentBoundEvent_Context, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1);
};

}


