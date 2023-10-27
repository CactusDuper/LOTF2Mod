#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x398 - 0x350)
// BlueprintGeneratedClass AoE_killingArea_Fire_Buffer.AoE_killingArea_Fire_Buffer_C
class AAoE_killingArea_Fire_Buffer_C : public AGameplayEffectsAreaActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnchorForbiddenAreaComponent*         AnchorForbiddenArea;                               // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UItemDropForbiddenAreaComponent*       ItemDropForbiddenArea;                             // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Forbidden_areas;                                   // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VisualHelper;                                      // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAoE_killingArea_Fire_Buffer_C* GetDefaultObj();

	void BPI_Close_Portculis();
	void BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer);
	void ExecuteUbergraph_AoE_killingArea_Fire_Buffer(int32 EntryPoint, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer);
};

}


