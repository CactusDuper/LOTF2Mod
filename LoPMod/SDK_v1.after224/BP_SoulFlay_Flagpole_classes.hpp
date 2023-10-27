#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2F0 - 0x2A0)
// BlueprintGeneratedClass BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C
class ABP_SoulFlay_Flagpole_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard1;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Linked_Location;                                   // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_SoulFlay_Raft_C*                   OwningRaft;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SpeedMultiplier;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HexSoulflayableActor;                              // 0x2E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SoulFlay_Flagpole_C* GetDefaultObj();

	void OnActorSpawned_539FC3ED458ACA8D5ED8228DF18DA30B(class AActor* SpawnedActor);
	void OnApplySoulFlay(struct FVector& PullDirection);
	void SetOwningRaft(class ABP_SoulFlay_Raft_C* OwningRaft);
	void GetLinkedLocation();
	void MulticastSoulFlayReact();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_SoulFlay_Flagpole(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class AActor* K2Node_CustomEvent_spawnedActor, const struct FVector& K2Node_Event_pullDirection, class ABP_SoulFlay_Raft_C* K2Node_CustomEvent_OwningRaft, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHexReplaceChildActorForMultiplayerLatent* CallFunc_ReplaceChildActorForMultiplayer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_RemoveGameplayEffectByHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AHexSoulFlayableObject_SimpleYankableDude_BP_C* K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Simple_Yankable_Dude_BP, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


