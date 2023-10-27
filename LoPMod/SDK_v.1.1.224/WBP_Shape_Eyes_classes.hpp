#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x311 - 0x2E8)
// WidgetBlueprintGeneratedClass WBP_Shape_Eyes.WBP_Shape_Eyes_C
class UWBP_Shape_Eyes_C : public UColorShapeCategoryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_CheckBox_C*                         Check_SecondaryColor;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HSVColorSlider_C*                 PrimaryColor;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HSVColorSlider_C*                 SecondaryColor;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ColorTitle_C*                       W_ColorTitle;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Single_Color;                                      // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Shape_Eyes_C* GetDefaultObj();

	class UWidget* Navigate_to_Primary_Intensity(enum class EUINavigation Navigation);
	class UWidget* Navigate_to_Copy_color(enum class EUINavigation Navigation);
	void Copy_Color(class UHSVColorSliderWidget* Origin, class UHSVColorSliderWidget* Destination, float CallFunc_GetValue_ReturnValue, const struct FLinearColor& CallFunc_GetColor_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2);
	class UWidget* Navigate_to_primary_Hue(enum class EUINavigation Navigation);
	class UWidget* Navigate_To_Secondary_Value(enum class EUINavigation Navigation);
	class UWidget* Navigate_to_Primary_Brightness(enum class EUINavigation Navigation);
	class UWidget* Navigate_To_Secondary_Hue(enum class EUINavigation Navigation);
	class UWidget* BP_GetDesiredFocusTarget();
	void SelectAndFocus();
	void BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__WBP_Shape_Eyes_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_Shape_Eyes_PrimaryColor_K2Node_ComponentBoundEvent_3_OnColorChange__DelegateSignature(const struct FLinearColor& NewColor, float NewIntensity);
	void BndEvt__WBP_Shape_Eyes_Shapes_Grid_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BP_PanelActivated();
	void ExecuteUbergraph_WBP_Shape_Eyes(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, bool CallFunc_SelectAndFocus_ReturnValue, bool K2Node_ComponentBoundEvent_Checked, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& K2Node_ComponentBoundEvent_newColor, float K2Node_ComponentBoundEvent_newIntensity, class UObject* K2Node_ComponentBoundEvent_Item, class UColorListEntry* K2Node_DynamicCast_AsColor_List_Entry, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_PostEventAtLocation_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_1, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FLinearColor& CallFunc_GetColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


