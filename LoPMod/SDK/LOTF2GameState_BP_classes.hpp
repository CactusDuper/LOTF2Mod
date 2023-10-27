#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x400 - 0x3F0)
// BlueprintGeneratedClass LOTF2GameState_BP.LOTF2GameState_BP_C
class ALOTF2GameState_BP_C : public ALOTF2GameState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALOTF2GameState_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_LOTF2GameState_BP(int32 EntryPoint);
};

}


