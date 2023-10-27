#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x478 - 0x470)
// BlueprintGeneratedClass GA_JumpAbility_BP.GA_JumpAbility_BP_C
class UGA_JumpAbility_BP_C : public UGA_JumpAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_JumpAbility_BP_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_JumpAbility_BP(int32 EntryPoint);
};

}


