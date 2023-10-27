#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x458 - 0x450)
// BlueprintGeneratedClass GA_BaseTranscend.GA_BaseTranscend_C
class UGA_BaseTranscend_C : public UGA_BaseTranscend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_BaseTranscend_C* GetDefaultObj();

	void TriggerTranscendCue(enum class EActivateRealmReason Reason);
	void ExecuteUbergraph_GA_BaseTranscend(int32 EntryPoint, enum class EActivateRealmReason K2Node_Event_reason, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_SendGameplayEvent_ReturnValue, int32 CallFunc_SendGameplayEvent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


