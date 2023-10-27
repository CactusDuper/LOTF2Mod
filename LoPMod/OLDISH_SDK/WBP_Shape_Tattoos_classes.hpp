#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x324 - 0x308)
// WidgetBlueprintGeneratedClass WBP_Shape_Tattoos.WBP_Shape_Tattoos_C
class UWBP_Shape_Tattoos_C : public UTattooPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_CheckBox_C*                         Check_CopyFromMainColor;                           // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ShapeTitle_C*                       W_ShapeTitle;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Show_copy_color;                                   // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyShapeAttributeType           Color_Attribute_to_copy;                           // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyShapeAttributeType           Intensity_Attribute_to_copy;                       // 0x322(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Copy_from_main;                                    // 0x323(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Shape_Tattoos_C* GetDefaultObj();

	class UWidget* Navigate_Up(enum class EUINavigation Navigation, bool CallFunc_IsVisible_ReturnValue);
	class UWidget* Navigate_Down(enum class EUINavigation Navigation, class UWidget* CallFunc_Navigate_to_Primary_Hue_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	class UWidget* Navigate_to_primary_Hue(enum class EUINavigation Navigation);
	class UWidget* Navigate_To_Secondary_Value(enum class EUINavigation Navigation);
	class UWidget* Navigate_to_Primary_Brightness(enum class EUINavigation Navigation);
	class UWidget* Navigate_To_Secondary_Hue(enum class EUINavigation Navigation);
	class UWidget* BP_GetDesiredFocusTarget();
	void SelectAndFocus();
	void BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_Shape_Tattoos_Check_SecondaryColor_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool Checked);
	void ExecuteUbergraph_WBP_Shape_Tattoos(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset, bool K2Node_DynamicCast_bSuccess, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset_1, bool K2Node_DynamicCast_bSuccess_1, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_Checked, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_3);
};

}


