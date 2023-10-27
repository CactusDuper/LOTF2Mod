#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2E8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CommonButtonTab.WBP_CommonButtonTab_C
class UWBP_CommonButtonTab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        TabToOpen;                                         // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_414D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PhotoModeWidget_C*                PhotoModeWidgetRef;                                // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               TabIcon;                                           // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ButtonSize;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ButtonSizeWhenSelected;                            // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           SelectedTabColor;                                  // 0x2C0(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           UnselectedTabColor;                                // 0x2D4(0x14)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWBP_CommonButtonTab_C* GetDefaultObj();

	void Initialize(class UWBP_PhotoModeWidget_C* PhotoModeWidgetRef);
	void SetSelectedTabStyle();
	void SetUnselectedTabStyle();
	void BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CommonButtonTab(int32 EntryPoint, class UWBP_PhotoModeWidget_C* K2Node_CustomEvent_PhotoModeWidgetRef, TScriptInterface<class IBPI_PhotoModeDataInterface_C> K2Node_DynamicCast_AsBPI_Photo_Mode_Data_Interface, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, bool K2Node_Event_IsDesignTime);
};

}


