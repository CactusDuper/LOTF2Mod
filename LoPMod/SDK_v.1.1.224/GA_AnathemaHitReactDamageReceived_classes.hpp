#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x520 - 0x518)
// BlueprintGeneratedClass GA_AnathemaHitReactDamageReceived.GA_AnathemaHitReactDamageReceived_C
class UGA_AnathemaHitReactDamageReceived_C : public UAnathemaHitReactAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_AnathemaHitReactDamageReceived_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_AnathemaHitReactDamageReceived(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


