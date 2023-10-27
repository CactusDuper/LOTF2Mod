#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B0 - 0x2A0)
// BlueprintGeneratedClass BP_CinematicTendrils.BP_CinematicTendrils_C
class ABP_CinematicTendrils_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CinematicTendrils_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CinematicTendrils(int32 EntryPoint, class ACharacter* CallFunc_GetLocalPlayer_LocalPlayerCharacter, class UEquipmentManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


