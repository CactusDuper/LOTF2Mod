#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x458 - 0x450)
// BlueprintGeneratedClass GA_ForcedTranscendRealm_BP.GA_ForcedTranscendRealm_BP_C
class UGA_ForcedTranscendRealm_BP_C : public UGA_ForcedTranscendRealm
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_ForcedTranscendRealm_BP_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ForcedTranscendRealm_BP(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1);
};

}


