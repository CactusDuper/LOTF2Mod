#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2F8 - 0x2D8)
// WidgetBlueprintGeneratedClass WBP_ConfirmationDialogButton_Hold.WBP_ConfirmationDialogButton_Hold_C
class UWBP_ConfirmationDialogButton_Hold_C : public UHexConfirmationDialogButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_HoldButton_Gothic_Generic_C*        Hold_Button;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputActionImage*                     Image_Input;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                          Action;                                            // 0x2F0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ConfirmationDialogButton_Hold_C* GetDefaultObj();

	void Update_Icon(const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue);
	void BndEvt__WBP_ConfirmationDialogButton_Hold_Root_Button_K2Node_ComponentBoundEvent_1_OnHoldActionComplete__DelegateSignature();
	void Construct();
	void On_Input_Method_Changed(enum class ECommonInputType bNewInputType);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void ExecuteUbergraph_WBP_ConfirmationDialogButton_Hold(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue);
};

}


