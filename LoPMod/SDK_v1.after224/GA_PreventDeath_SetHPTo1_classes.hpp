#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_PreventDeath_SetHPTo1.GA_PreventDeath_SetHPTo1_C
class UGA_PreventDeath_SetHPTo1_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_PreventDeath_SetHPTo1_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_PreventDeath_SetHPTo1(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}


