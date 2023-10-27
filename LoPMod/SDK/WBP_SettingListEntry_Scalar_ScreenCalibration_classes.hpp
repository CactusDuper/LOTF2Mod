#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x330 - 0x318)
// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Scalar_ScreenCalibration.WBP_SettingListEntry_Scalar_ScreenCalibration_C
class UWBP_SettingListEntry_Scalar_ScreenCalibration_C : public ULOTF2SettingListEntry_Scalar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Decrement_Button;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Increment_Button;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingListEntry_Scalar_ScreenCalibration_C* GetDefaultObj();

	class UWidget* GetPrimaryGamepadFocusWidget();
	void BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Decrement_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_SettingListEntry_Scalar_ScreenCalibration_Increment_Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_SettingListEntry_Scalar_ScreenCalibration(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue);
};

}


