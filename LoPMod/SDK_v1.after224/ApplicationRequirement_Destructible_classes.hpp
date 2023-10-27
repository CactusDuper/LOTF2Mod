#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ApplicationRequirement_Destructible.ApplicationRequirement_Destructible_C
class UApplicationRequirement_Destructible_C : public UGameplayEffectCustomApplicationRequirement
{
public:

	static class UClass* StaticClass();
	static class UApplicationRequirement_Destructible_C* GetDefaultObj();

	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC, class AActor* CallFunc_GetOwner_ReturnValue, class ADestructible* K2Node_DynamicCast_AsDestructible, bool K2Node_DynamicCast_bSuccess);
};

}


