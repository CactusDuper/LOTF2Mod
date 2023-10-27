#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_SoulOverkill_PROTO.GA_SoulOverkill_PROTO_C
class UGA_SoulOverkill_PROTO_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_SoulOverkill_PROTO_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_SoulOverkill_PROTO(int32 EntryPoint);
};

}


