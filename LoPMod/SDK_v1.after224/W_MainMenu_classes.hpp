#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x718 - 0x710)
// WidgetBlueprintGeneratedClass W_MainMenu.W_MainMenu_C
class UW_MainMenu_C : public UW_InGameMenuBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x710(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_MainMenu_C* GetDefaultObj();

	void InitForFirstPlayIfRequired(class UInGameMenuPanel* CallFunc_GetCurrentPanel_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UHexGameUserSettings* K2Node_DynamicCast_AsHex_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDisplayBrightnessCalibrationAtStart_ReturnValue);
	void BP_OnDeactivated();
	void BP_OnActivated();
	void ExecuteUbergraph_W_MainMenu(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
};

}


