#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B0 - 0x2A0)
// WidgetBlueprintGeneratedClass W_Preset_Name.W_Preset_Name_C
class UW_Preset_Name_C : public UPresetNameWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_Name;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Preset_Name_C* GetDefaultObj();

	void SetPresetName(class FText& PresetName);
	void ExecuteUbergraph_W_Preset_Name(int32 EntryPoint, class FText K2Node_Event_presetName);
};

}


