#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x588 - 0x578)
// WidgetBlueprintGeneratedClass W_LegendaryEdition_Panel.W_LegendaryEdition_Panel_C
class UW_LegendaryEdition_Panel_C : public ULegendaryEditionPanel
{
public:
	class UImage*                                Image_65;                                          // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_MainOptions;                           // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LegendaryEdition_Panel_C* GetDefaultObj();

	class UWidget* GetDesiredFocusTarget();
};

}


