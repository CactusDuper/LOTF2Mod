#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x300 - 0x2E8)
// WidgetBlueprintGeneratedClass WBP_Shape_SkinColor.WBP_Shape_SkinColor_C
class UWBP_Shape_SkinColor_C : public UColorShapeCategoryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_HSVColorSlider_C*                 Skin_Color;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ColorTitle_C*                       W_ColorTitle;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Shape_SkinColor_C* GetDefaultObj();

	class UWidget* Select_Brightness(enum class EUINavigation Navigation);
	class UWidget* Select_Hue(enum class EUINavigation Navigation);
	class UWidget* BP_GetDesiredFocusTarget();
	void SelectAndFocus();
	void BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_WBP_Shape_SkinColor(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_ComponentBoundEvent_Item, int32 CallFunc_PostEventAtLocation_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_GetColor_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


