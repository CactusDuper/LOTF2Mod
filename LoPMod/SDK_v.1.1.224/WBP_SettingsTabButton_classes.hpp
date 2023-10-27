#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7F0 - 0x7E0)
// WidgetBlueprintGeneratedClass WBP_SettingsTabButton.WBP_SettingsTabButton_C
class UWBP_SettingsTabButton_C : public USettingsTabButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Selected;                                    // 0x7E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingsTabButton_C* GetDefaultObj();

	void OnRefreshVisibility();
	void ExecuteUbergraph_WBP_SettingsTabButton(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue);
};

}


