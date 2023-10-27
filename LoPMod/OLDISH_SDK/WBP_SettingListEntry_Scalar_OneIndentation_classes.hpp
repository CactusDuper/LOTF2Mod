#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x350 - 0x344)
// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Scalar_OneIndentation.WBP_SettingListEntry_Scalar_OneIndentation_C
class UWBP_SettingListEntry_Scalar_OneIndentation_C : public UWBP_SettingListEntry_Scalar_C
{
public:
	uint8                                        Pad_3C27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_SettingListEntry_Scalar_OneIndentation_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_SettingListEntry_Scalar_OneIndentation(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


