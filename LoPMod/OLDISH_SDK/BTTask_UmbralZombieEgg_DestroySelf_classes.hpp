#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass BTTask_UmbralZombieEgg_DestroySelf.BTTask_UmbralZombieEgg_DestroySelf_C
class UBTTask_UmbralZombieEgg_DestroySelf_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTTask_UmbralZombieEgg_DestroySelf_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_UmbralZombieEgg_DestroySelf(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_FOE_UmbralZombieEgg_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Zombie_Egg, bool K2Node_DynamicCast_bSuccess);
};

}


