#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x548 - 0x540)
// BlueprintGeneratedClass GA_Dying_Player.GA_Dying_Player_C
class UGA_Dying_Player_C : public UGA_DyingBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Dying_Player_C* GetDefaultObj();

	void StartRagdollState();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void DyingWithoutAnimMontage();
	void ExecuteUbergraph_GA_Dying_Player(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_HasTag_ReturnValue);
};

}


