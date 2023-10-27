#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA20 - 0xA10)
// WidgetBlueprintGeneratedClass W_HeadCustomizationSocket.W_HeadCustomizationSocket_C
class UW_HeadCustomizationSocket_C : public UHeadFeatureSlider
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_100;                                        // 0xA18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_HeadCustomizationSocket_C* GetDefaultObj();

	void BndEvt__W_HeadCustomizationSocket_Button_100_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnInputCaptureEnd_Event();
	void ShowSlider(bool bShow);
	void SetSliderFocus();
	void ExecuteUbergraph_W_HeadCustomizationSocket(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bShow);
};

}


