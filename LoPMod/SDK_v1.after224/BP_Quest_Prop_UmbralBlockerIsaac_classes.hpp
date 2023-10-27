#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0xD40 - 0xD33)
// BlueprintGeneratedClass BP_Quest_Prop_UmbralBlockerIsaac.BP_Quest_Prop_UmbralBlockerIsaac_C
class ABP_Quest_Prop_UmbralBlockerIsaac_C : public ABaseNPCCharacter_BP_C
{
public:
	uint8                                        Pad_35FB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Quest_Prop_UmbralBlockerIsaac_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Quest_Prop_UmbralBlockerIsaac(int32 EntryPoint);
};

}


