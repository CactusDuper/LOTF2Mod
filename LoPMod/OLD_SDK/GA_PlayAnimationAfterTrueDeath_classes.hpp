#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x468 - 0x450)
// BlueprintGeneratedClass GA_PlayAnimationAfterTrueDeath.GA_PlayAnimationAfterTrueDeath_C
class UGA_PlayAnimationAfterTrueDeath_C : public UGA_PlayAnimation_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          HostAnimationTag;                                  // 0x458(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ClientAnimationTag;                                // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_PlayAnimationAfterTrueDeath_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_PlayAnimationAfterTrueDeath(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHost_ReturnValue);
};

}


