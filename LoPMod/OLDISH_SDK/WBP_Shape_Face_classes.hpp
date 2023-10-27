#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2E8 - 0x2E0)
// WidgetBlueprintGeneratedClass WBP_Shape_Face.WBP_Shape_Face_C
class UWBP_Shape_Face_C : public UShapeCategoryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_Shape_Face_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void SelectAndFocus();
	void BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void ExecuteUbergraph_WBP_Shape_Face(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset, bool K2Node_DynamicCast_bSuccess, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset_1, bool K2Node_DynamicCast_bSuccess_1, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset_2, bool K2Node_DynamicCast_bSuccess_2);
};

}


