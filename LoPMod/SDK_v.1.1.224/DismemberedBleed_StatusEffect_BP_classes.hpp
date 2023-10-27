#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x328 - 0x308)
// BlueprintGeneratedClass DismemberedBleed_StatusEffect_BP.DismemberedBleed_StatusEffect_BP_C
class ADismemberedBleed_StatusEffect_BP_C : public AStatusEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       DamagePerTick;                                     // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Damage_Tick_Delay;                                 // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADismemberedBleed_StatusEffect_BP_C* GetDefaultObj();

	void StartEffect(class UStatusEffectComponent* StatusEffectComponent);
	void EndEffect();
	void ExecuteUbergraph_DismemberedBleed_StatusEffect_BP(int32 EntryPoint, class UStatusEffectComponent* K2Node_Event_StatusEffectComponent, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


