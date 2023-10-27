#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0xD48 - 0xD33)
// BlueprintGeneratedClass BP_NPC_Harkyn_Quest.BP_NPC_Harkyn_Quest_C
class ABP_NPC_Harkyn_Quest_C : public ABaseNPCCharacter_BP_C
{
public:
	uint8                                        Pad_42CB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCOMP_CharacterTendrils_C*             COMP_CharacterTendrils;                            // 0xD40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPC_Harkyn_Quest_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPC_Harkyn_Quest(int32 EntryPoint);
};

}


