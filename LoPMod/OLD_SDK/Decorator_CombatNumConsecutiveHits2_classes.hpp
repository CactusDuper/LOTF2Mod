#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xB4 - 0xB0)
// BlueprintGeneratedClass Decorator_CombatNumConsecutiveHits2.Decorator_CombatNumConsecutiveHits2_C
class UDecorator_CombatNumConsecutiveHits2_C : public UDecorator_HasGameplayEffectStackCountBase_C
{
public:
	int32                                        NumConsecutiveHits;                                // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDecorator_CombatNumConsecutiveHits2_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_PerformConditionCheckAI_ReturnValue);
};

}


