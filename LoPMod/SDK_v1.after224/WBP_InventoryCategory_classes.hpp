#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x2E1 - 0x2C8)
// WidgetBlueprintGeneratedClass WBP_InventoryCategory.WBP_InventoryCategory_C
class UWBP_InventoryCategory_C : public UInventoryCategoryIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Background_Image;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Selected_Image;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InventoryCategory_C* GetDefaultObj();

	void SetSelected(bool bSelected);
	void BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_0_OnFocusIn__DelegateSignature();
	void BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_1_OnFocusOut__DelegateSignature();
	void ExecuteUbergraph_WBP_InventoryCategory(int32 EntryPoint, bool K2Node_Event_bSelected);
};

}


