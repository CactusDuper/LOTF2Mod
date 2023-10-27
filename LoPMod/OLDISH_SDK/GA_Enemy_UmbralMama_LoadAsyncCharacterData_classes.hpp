#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x4C0 - 0x448)
// BlueprintGeneratedClass GA_Enemy_UmbralMama_LoadAsyncCharacterData.GA_Enemy_UmbralMama_LoadAsyncCharacterData_C
class UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UCharacterData>          CharacterData_Egg;                                 // 0x450(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                LoadedCharacterData_Egg;                           // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UCharacterData>          CharacterData_UmbralZombie;                        // 0x488(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                LoadedCharacterData_UmbralZombie;                  // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C* GetDefaultObj();

	void OnLoaded_281690F14DD6706C443F01AC2910F9BF(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A550C0D54EF015DE1C1A0AA0CC032F04(TSubclassOf<class UObject> Loaded);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Enemy_UmbralMama_LoadAsyncCharacterData(int32 EntryPoint, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


