#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x7F8 - 0x7E0)
// WidgetBlueprintGeneratedClass WBP_HexGenericSlider.WBP_HexGenericSlider_C
class UWBP_HexGenericSlider_C : public UHexGenericSlider
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            On_Value_Changed;                                  // 0x7E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_HexGenericSlider_C* GetDefaultObj();

	void BndEvt__WBP_HexGenericSlider_Slider_Feature_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_HexGenericSlider(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, double K2Node_CallDelegate_New_Value_ImplicitCast);
	void On_Value_Changed__DelegateSignature(double New_Value);
};

}


