#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x318 - 0x2F8)
// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Action_SubCollection.WBP_SettingListEntry_Action_SubCollection_C
class UWBP_SettingListEntry_Action_SubCollection_C : public ULOTF2SettingListEntry_Action
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      ButtonTextBlock;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_142;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_252;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingListEntry_Action_SubCollection_C* GetDefaultObj();

	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnSettingAssigned(class FText& ActionText);
	void ExecuteUbergraph_WBP_SettingListEntry_Action_SubCollection(int32 EntryPoint, class FText K2Node_Event_actionText);
};

}


