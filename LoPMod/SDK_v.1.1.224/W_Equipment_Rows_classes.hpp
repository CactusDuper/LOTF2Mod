#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3B8 - 0x3B0)
// WidgetBlueprintGeneratedClass W_Equipment_Rows.W_Equipment_Rows_C
class UW_Equipment_Rows_C : public UPlayerEquipmentPanel
{
public:
	class UVerticalBox*                          Equipment_Rows;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Equipment_Rows_C* GetDefaultObj();

	class UWidget* Select_Melee_Row(enum class EUINavigation Navigation, class UWidget* CallFunc_GetChildAt_ReturnValue);
	class UInventoryGridItem* GetFirstItem(class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_EquipmentGridItem_C* K2Node_DynamicCast_AsW_Equipment_Grid_Item, bool K2Node_DynamicCast_bSuccess);
};

}


