#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x368 - 0x340)
// WidgetBlueprintGeneratedClass W_ClassUnlocked_Panel.W_ClassUnlocked_Panel_C
class UW_ClassUnlocked_Panel_C : public UUnlockedClassEquipmentPanel
{
public:
	class UVerticalBox*                          Equipment_Rows;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Items;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Items_Category;                                    // 0x350(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_ClassUnlocked_Panel_C* GetDefaultObj();

};

}


