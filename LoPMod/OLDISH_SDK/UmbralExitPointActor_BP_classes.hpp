#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x520 - 0x490)
// BlueprintGeneratedClass UmbralExitPointActor_BP.UmbralExitPointActor_BP_C
class AUmbralExitPointActor_BP_C : public AUmbralExitPointActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_UmbralExitPointInteract_VFX;                   // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_UmbralExitPoint_HairTendrils;                  // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BedOfFlowers_Axiom;                                // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BedOfFlowers_Umbral;                               // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoxAreaPrevention;                                 // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  AxiomLight;                                        // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  UmbralLight;                                       // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Lights;                                            // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Moths;                                             // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  S_EffigyofReincarnation_flowers_UT_Flower_004;     // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  UmbralVisuals;                                     // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CreatedPNS;                                        // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       ReverseDissolveDelay;                              // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DissolveDelay;                                     // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_436D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAnathemaPlayerCharacter_BP_C*         SoulDestinationGetSet;                             // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    Spawned_VFX;                                       // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    Spawned_VFX_0;                                     // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUmbralExitPointActor_BP_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__UmbralExitPointActor_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature(class UInteractionContext* Context);
	void OnVisualFXSpawned(class UFXSystemComponent* SpawnedVFX);
	void ExecuteUbergraph_UmbralExitPointActor_BP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCharacterDead_ReturnValue, bool CallFunc_IsSpawningEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UInteractionContext* K2Node_ComponentBoundEvent_Context, TArray<class AAnathemaPlayerCharacter_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AAnathemaPlayerCharacter_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, float K2Node_Event_DeltaSeconds, class UFXSystemComponent* K2Node_Event_spawnedVFX);
};

}


