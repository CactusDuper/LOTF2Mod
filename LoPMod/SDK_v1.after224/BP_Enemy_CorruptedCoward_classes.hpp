#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6F (0xE18 - 0xDA9)
// BlueprintGeneratedClass BP_Enemy_CorruptedCoward.BP_Enemy_CorruptedCoward_C
class ABP_Enemy_CorruptedCoward_C : public ABaseAICharacter_BP_C
{
public:
	uint8                                        Pad_3BAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDissolveFXComponent_C*                DissolveFXComponent;                               // 0xDB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PLACEHOLDER_FIRE;                                  // 0xDC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      Ak_Anathema_Event;                                 // 0xDC8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Enemy_CorruptedCoward_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Enemy_CorruptedCoward(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


