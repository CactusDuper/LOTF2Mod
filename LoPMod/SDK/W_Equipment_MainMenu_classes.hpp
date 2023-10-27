#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x3E0 - 0x3B0)
// WidgetBlueprintGeneratedClass W_Equipment_MainMenu.W_Equipment_MainMenu_C
class UW_Equipment_MainMenu_C : public UPlayerEquipmentPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Equipment_Rows;                                    // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Items;                                        // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Items_Category;                                    // 0x3C8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_Equipment_MainMenu_C* GetDefaultObj();

	class UInventoryGridItem* GetFirstItem(class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_EquipmentGridItem_C* K2Node_DynamicCast_AsW_Equipment_Grid_Item, bool K2Node_DynamicCast_bSuccess);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_Equipment_MainMenu(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


