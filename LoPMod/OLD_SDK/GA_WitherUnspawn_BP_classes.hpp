#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x460 - 0x450)
// BlueprintGeneratedClass GA_WitherUnspawn_BP.GA_WitherUnspawn_BP_C
class UGA_WitherUnspawn_BP_C : public UGA_WitherUnspawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_UmbrieBase_C*                      Character;                                         // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_WitherUnspawn_BP_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_WitherUnspawn_BP(int32 EntryPoint);
};

}


