#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x111 (0x389 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CommonCheckbox.WBP_CommonCheckbox_C
class UWBP_CommonCheckbox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              BottomSpacer;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CheckboxName;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CheckboxValue;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               LeftMargin;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               RightMargin;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Toggle;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TopSpacer;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ToggleTitle;                                       // 0x2B8(0x18)(Edit, BlueprintVisible)
	int32                                        FontSize;                                          // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CheckboxDefaultValueTip;                           // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                         ChangeCheckboxColorWhenFocused_;                   // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeTextColorWhenFocused_;                       // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          FocusedToggleAndTextColor;                         // 0x2F4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnfocusedToggleAndTextColor;                       // 0x304(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TopMargin;                                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BottomMargin;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LeftSideMargin;                                    // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RightSideMargin;                                   // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultValue;                                      // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PhotoModeWidget_C*                PhotoModeWidget;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  OptionFalse;                                       // 0x348(0x18)(Edit, BlueprintVisible)
	class FText                                  OptionTrue;                                        // 0x360(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            CheckboxDispatcher;                                // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Focus_;                                            // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CommonCheckbox_C* GetDefaultObj();

	class UWidget* ToggleUsingArrows(enum class EUINavigation Navigation, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Focused_or_Unfocused_Color(bool ChangeCheckboxColorWhenFocused_, bool ChangeTextColorWhenFocused_, class UCheckBox* CheckBox, class UWidget* CheckboxTitle, class UWidget* CheckboxValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FCheckBoxStyle& K2Node_MakeStruct_CheckBoxStyle);
	class FText SetTxtValue(bool Temp_bool_Variable, bool CallFunc_IsChecked_ReturnValue, class FText K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Initialize(bool DefaultValue, class UWBP_PhotoModeWidget_C* PhotoModeWidget__Self_);
	void ResetCheckbox(bool Focus_);
	void ChangeValue(bool Value, bool Focus_);
	void BndEvt__ToggleDoF_1_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetToggleFocus();
	void ResetToggleFocus();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_CommonCheckbox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_DefaultValue, class UWBP_PhotoModeWidget_C* K2Node_CustomEvent_PhotoModeWidget__Self_, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Focus__1, bool K2Node_CustomEvent_value, bool K2Node_CustomEvent_Focus_, bool CallFunc_IsChecked_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1);
	void CheckboxDispatcher__DelegateSignature(bool Value);
};

}


