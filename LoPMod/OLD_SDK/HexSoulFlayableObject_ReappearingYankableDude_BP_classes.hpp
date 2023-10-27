#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3C0 - 0x3B0)
// BlueprintGeneratedClass HexSoulFlayableObject_ReappearingYankableDude_BP.HexSoulFlayableObject_ReappearingYankableDude_BP_C
class AHexSoulFlayableObject_ReappearingYankableDude_BP_C : public AHexSoulFlayableObject_DissolvingYankableDude_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          ReappearAnimMontage;                               // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHexSoulFlayableObject_ReappearingYankableDude_BP_C* GetDefaultObj();

	void ResetForSoulFlay();
	void ExecuteUbergraph_HexSoulFlayableObject_ReappearingYankableDude_BP(int32 EntryPoint);
};

}


