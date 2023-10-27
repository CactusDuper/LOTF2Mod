#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x680 - 0x650)
// BlueprintGeneratedClass HexAIController_BP.HexAIController_BP_C
class AHexAIController_BP_C : public ABaseAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttackQueryComponent_C*               AttackQueryComponent;                              // 0x658(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastStimulusLocation;                              // 0x668(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHexAIController_BP_C* GetDefaultObj();

	void IsNeutralActorHostile(class AActor* Actor, bool* Result);
	void Do_Heavy_Hit_Reaction();
	void ExecuteUbergraph_HexAIController_BP(int32 EntryPoint);
};

}


