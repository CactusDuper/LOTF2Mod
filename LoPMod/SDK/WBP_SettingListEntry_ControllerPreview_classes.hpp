#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3F0 - 0x3E0)
// WidgetBlueprintGeneratedClass WBP_SettingListEntry_ControllerPreview.WBP_SettingListEntry_ControllerPreview_C
class UWBP_SettingListEntry_ControllerPreview_C : public ULOTF2SettingListEntry_ControllerPreview
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  RichText_Description;                              // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingListEntry_ControllerPreview_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_SettingListEntry_ControllerPreview(int32 EntryPoint);
};

}


