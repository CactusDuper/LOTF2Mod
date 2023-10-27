#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x340 - 0x2F0)
// WidgetBlueprintGeneratedClass W_InventoryStatRow.W_InventoryStatRow_C
class UW_InventoryStatRow_C : public UInventoryStatRow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         Border_Background;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Requirements_KO_style;                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Requirements_OK_style;                             // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Requirements_Ignored_style;                        // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Border_style;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Empty_border_style;                                // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Stat_name;                                         // 0x328(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_InventoryStatRow_C* GetDefaultObj();

	void ShowBackground(bool bShowBackground);
	void PreConstruct(bool IsDesignTime);
	void SetStatRequirementsStatus(bool bPlayerHasStats, bool bRequirementsIgnored);
	void ExecuteUbergraph_W_InventoryStatRow(int32 EntryPoint, bool K2Node_Event_bShowBackground, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bPlayerHasStats, bool K2Node_Event_bRequirementsIgnored);
};

}


