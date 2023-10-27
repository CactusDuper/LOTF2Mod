#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE8 - 0xB0)
// BlueprintGeneratedClass Decorator_NPC_CombatNumConsecutiveHits.Decorator_NPC_CombatNumConsecutiveHits_C
class UDecorator_NPC_CombatNumConsecutiveHits_C : public UDecorator_HasGameplayEffectStackCountBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        NumConsecutiveHits;                                // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseBBValue;                                       // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BBValue;                                           // 0xC0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UDecorator_NPC_CombatNumConsecutiveHits_C* GetDefaultObj();

	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Decorator_NPC_CombatNumConsecutiveHits(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue);
};

}


