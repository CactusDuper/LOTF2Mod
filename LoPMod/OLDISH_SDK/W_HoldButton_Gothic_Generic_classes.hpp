#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x429 - 0x418)
// WidgetBlueprintGeneratedClass W_HoldButton_Gothic_Generic.W_HoldButton_Gothic_Generic_C
class UW_HoldButton_Gothic_Generic_C : public UHoldButton
{
public:
	uint8                                        Pad_3117[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNamedSlot*                            Container;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Hide_Keyboard_Input;                               // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_HoldButton_Gothic_Generic_C* GetDefaultObj();

	void Update_Controller_Icon(class UInputActionImage* Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue);
};

}


