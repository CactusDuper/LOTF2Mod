#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x300 - 0x2A8)
// BlueprintGeneratedClass LVL_World_Sound.LVL_World_Sound_C
class ALVL_World_Sound_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAkAnathemaEvent                      Ak_Anathema_Event;                                 // 0x2B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ALVL_World_Sound_C* GetDefaultObj();

	void ExecuteUbergraph_LVL_World_Sound(int32 EntryPoint);
};

}


