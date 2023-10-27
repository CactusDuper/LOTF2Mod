#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3A0 - 0x350)
// BlueprintGeneratedClass AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C
class AAoE_wadingArea_Buffer_C : public AGameplayEffectsAreaActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LanternKillerVisuals;                              // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnchorForbiddenAreaComponent*         AnchorForbiddenArea;                               // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Forbidden_areas;                                   // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VisualHelper;                                      // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FX;                                                // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAoE_wadingArea_Buffer_C* GetDefaultObj();

	void BPI_Close_Portculis();
	void BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer);
	void BndEvt__AoE_killingArea_Drowning_Proto_Lantern_DualRealmBehaviour_K2Node_ComponentBoundEvent_0_OnUpdateRealmVisuals__DelegateSignature(enum class EGameRealm NewRealm);
	void ExecuteUbergraph_AoE_wadingArea_Buffer(int32 EntryPoint, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, enum class EGameRealm K2Node_ComponentBoundEvent_newRealm, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


