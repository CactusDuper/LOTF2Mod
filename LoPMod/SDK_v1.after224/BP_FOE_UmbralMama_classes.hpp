#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE08 - 0xDF9)
// BlueprintGeneratedClass BP_FOE_UmbralMama.BP_FOE_UmbralMama_C
class ABP_FOE_UmbralMama_C : public ABP_UmbrieBase_C
{
public:
	uint8                                        Pad_430C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE00(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_FOE_UmbralMama_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FOE_UmbralMama(int32 EntryPoint);
};

}


