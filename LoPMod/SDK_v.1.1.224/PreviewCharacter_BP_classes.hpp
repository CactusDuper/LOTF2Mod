#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xEF0 - 0xEE8)
// BlueprintGeneratedClass PreviewCharacter_BP.PreviewCharacter_BP_C
class APreviewCharacter_BP_C : public AAnathemaPlayerCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class APreviewCharacter_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_PreviewCharacter_BP(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}


