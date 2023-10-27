#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x78 - 0x70)
// BlueprintGeneratedClass SoundManager_BP.SoundManager_BP_C
class USoundManager_BP_C : public UAnathemaSoundManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USoundManager_BP_C* GetDefaultObj();

	void GlobalMuteSwitch();
	void ExecuteUbergraph_SoundManager_BP(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue);
};

}


