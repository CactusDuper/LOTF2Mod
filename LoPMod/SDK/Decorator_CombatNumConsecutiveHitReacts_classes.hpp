#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xB4 - 0xB0)
// BlueprintGeneratedClass Decorator_CombatNumConsecutiveHitReacts.Decorator_CombatNumConsecutiveHitReacts_C
class UDecorator_CombatNumConsecutiveHitReacts_C : public UDecorator_HasGameplayEffectStackCountBase_C
{
public:
	int32                                        NumConsecutiveHits;                                // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDecorator_CombatNumConsecutiveHitReacts_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_PerformConditionCheckAI_ReturnValue);
};

}


