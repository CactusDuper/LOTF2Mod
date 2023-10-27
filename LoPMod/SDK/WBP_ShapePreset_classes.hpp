#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x338 - 0x318)
// WidgetBlueprintGeneratedClass WBP_ShapePreset.WBP_ShapePreset_C
class UWBP_ShapePreset_C : public UShapePresetWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Background;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Focused;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selected;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ShapePreset_C* GetDefaultObj();

	void SetSelected(bool bSelected);
	void SetFocused(bool bSelected);
	void Destruct();
	void ExecuteUbergraph_WBP_ShapePreset(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool K2Node_Event_bSelected_1, bool K2Node_Event_bSelected);
};

}


