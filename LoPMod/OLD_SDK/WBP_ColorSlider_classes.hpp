#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAF0 (0xDE0 - 0x2F0)
// WidgetBlueprintGeneratedClass WBP_ColorSlider.WBP_ColorSlider_C
class UWBP_ColorSlider_C : public UColorBarWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Background;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSliderStyle                          UnfocusedStyle;                                    // 0x300(0x500)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSliderStyle                          FocusedStyle;                                      // 0x800(0x500)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            SliderImageTexture;                                // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SliderValueChanged;                                // 0xD08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FStyle_DGGUI                          Style;                                             // 0xD18(0xC4)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_36AF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWBP_ColorSlider_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_ColorSlider(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, double K2Node_CallDelegate_NewValue_ImplicitCast);
	void SliderValueChanged__DelegateSignature(double NewValue);
};

}


