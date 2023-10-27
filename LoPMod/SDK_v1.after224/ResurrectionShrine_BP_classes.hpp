#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x6B8 - 0x698)
// BlueprintGeneratedClass ResurrectionShrine_BP.ResurrectionShrine_BP_C
class AResurrectionShrine_BP_C : public AResurrectionShrineActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x698(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Shrine_Body;                                       // 0x6A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoxAreaPrevention;                                 // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x6B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AResurrectionShrine_BP_C* GetDefaultObj();

	void UserConstructionScript();
	void OnDispose();
	void ExecuteUbergraph_ResurrectionShrine_BP(int32 EntryPoint);
};

}


