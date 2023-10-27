#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1620 (0x1C20 - 0x600)
// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
class UWBP_SettingsMenu_C : public ULOTF2GameSettingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HideAnimation;                                     // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowInAnimation;                                   // 0x610(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Container;                             // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBg;                                          // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_299;                                         // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_453;                                         // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Left_Half;                        // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Right_Half;                       // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Separator;                                         // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_3E1B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        HoveredCheckBoxStyle;                              // 0x660(0xAD0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FCheckBoxStyle                        NormalCheckboxStyle;                               // 0x1130(0xAD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          SettingsToMoveDetailsPanelToBottom;                // 0x1C00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          SettingsToHideDetailsPanel;                        // 0x1C10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_SettingsMenu_C* GetDefaultObj();

	class UWidget* GetDesiredFocusTarget();
	void OnNavigated(class UGameSetting* Setting);
	void SetDetailsPanelPosition(enum class ESettingScreenDetailsPanelPosition Position);
	void ExecuteUbergraph_WBP_SettingsMenu(int32 EntryPoint, bool Temp_bool_Variable, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable_1, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable_3, class UGameSetting* K2Node_Event_setting, class FName CallFunc_GetDevName_ReturnValue, enum class ESettingScreenDetailsPanelPosition K2Node_Event_position, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue_1, class UWBP_GameSettingPanel_C* K2Node_DynamicCast_AsWBP_Game_Setting_Panel, bool K2Node_DynamicCast_bSuccess, enum class ESettingScreenDetailsPanelPosition K2Node_Select_Default_1, enum class ESettingScreenDetailsPanelPosition K2Node_Select_Default_2);
};

}


