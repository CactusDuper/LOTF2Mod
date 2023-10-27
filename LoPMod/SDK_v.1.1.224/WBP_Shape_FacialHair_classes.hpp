#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A (0x30A - 0x2E0)
// WidgetBlueprintGeneratedClass WBP_Shape_FacialHair.WBP_Shape_FacialHair_C
class UWBP_Shape_FacialHair_C : public UShapeCategoryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_CheckBox_C*                         Check_CopyFromMainColor;                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CheckBox_C*                         Check_SecondaryColor;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HSVColorSlider_C*                 PrimaryColor;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HSVColorSlider_C*                 SecondaryColor;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Single_Color;                                      // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Copy_From_Hair;                                    // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Shape_FacialHair_C* GetDefaultObj();

	void Copy_Color(class UHSVColorSliderWidget* Origin, class UHSVColorSliderWidget* Destination, float CallFunc_GetValue_ReturnValue, const struct FLinearColor& CallFunc_GetColor_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2);
	class UWidget* Select_copy_primary_color(enum class EUINavigation Navigation);
	class UWidget* Select_Secondary_brightness(enum class EUINavigation Navigation);
	class UWidget* Select_primary_brightness(enum class EUINavigation Navigation);
	class UWidget* Select_Copy_secondary_color(enum class EUINavigation Navigation);
	class UWidget* Select_Copy_hair_color(enum class EUINavigation Navigation);
	class UWidget* Select_Primary_color(enum class EUINavigation Navigation, bool CallFunc_GetIsEnabled_ReturnValue);
	class UWidget* Select_Secondary_from_Top(enum class EUINavigation Navigation, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1);
	class UWidget* Select_Copy_Main_Color(enum class EUINavigation Navigation);
	class UWidget* BP_GetDesiredFocusTarget(class UUserWidget* CallFunc_Get_Focus_Target_Focus_Target);
	void SelectAndFocus();
	void BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__WBP_Shape_Hair_Check_SecondaryColor_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_Shape_Eyes_PrimaryColor_K2Node_ComponentBoundEvent_3_OnColorChange__DelegateSignature(const struct FLinearColor& NewColor, float NewIntensity);
	void BP_PanelActivated();
	void BndEvt__WBP_Shape_FacialHair_Check_CopyFromMainColor_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool Checked);
	void ExecuteUbergraph_WBP_Shape_FacialHair(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset, bool K2Node_DynamicCast_bSuccess, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset_1, bool K2Node_DynamicCast_bSuccess_1, class UWBP_ShapePreset_C* K2Node_DynamicCast_AsWBP_Shape_Preset_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_ComponentBoundEvent_Checked_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& K2Node_ComponentBoundEvent_newColor, float K2Node_ComponentBoundEvent_newIntensity, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_ComponentBoundEvent_Checked, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_3);
};

}


