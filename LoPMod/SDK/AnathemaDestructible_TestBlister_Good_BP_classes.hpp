#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4B0 - 0x4A0)
// BlueprintGeneratedClass AnathemaDestructible_TestBlister_Good_BP.AnathemaDestructible_TestBlister_Good_BP_C
class AAnathemaDestructible_TestBlister_Good_BP_C : public AAnathemaDestructible_TestBlister_base_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NPS_Blisters_Vigor;                                // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAnathemaDestructible_TestBlister_Good_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_AnathemaDestructible_TestBlister_Good_BP(int32 EntryPoint);
};

}


