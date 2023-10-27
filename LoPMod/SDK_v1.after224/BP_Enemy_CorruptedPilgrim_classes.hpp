#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xDC0 - 0xDA9)
// BlueprintGeneratedClass BP_Enemy_CorruptedPilgrim.BP_Enemy_CorruptedPilgrim_C
class ABP_Enemy_CorruptedPilgrim_C : public ABaseAICharacter_BP_C
{
public:
	uint8                                        Pad_445D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0xDB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Enemy_CorruptedPilgrim_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Enemy_CorruptedPilgrim(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


