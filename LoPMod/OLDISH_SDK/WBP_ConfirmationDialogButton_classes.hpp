#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E8 - 0x2D8)
// WidgetBlueprintGeneratedClass WBP_ConfirmationDialogButton.WBP_ConfirmationDialogButton_C
class UWBP_ConfirmationDialogButton_C : public UHexConfirmationDialogButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_FocusableButton_C*                Root_Button;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ConfirmationDialogButton_C* GetDefaultObj();

	void BndEvt__WBP_ConfirmationDialogButton_Root_Button_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void ExecuteUbergraph_WBP_ConfirmationDialogButton(int32 EntryPoint);
};

}


