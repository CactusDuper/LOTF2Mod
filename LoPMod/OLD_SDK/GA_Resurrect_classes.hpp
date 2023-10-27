#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x459 - 0x450)
// BlueprintGeneratedClass GA_Resurrect.GA_Resurrect_C
class UGA_Resurrect_C : public UGA_Resurrect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SkipDeathScreen;                                   // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Resurrect_C* GetDefaultObj();

	void TriggerResurrectCue();
	void ExecuteUbergraph_GA_Resurrect(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, bool CallFunc_IsWorldResetRequested_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_StartCameraFade_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


