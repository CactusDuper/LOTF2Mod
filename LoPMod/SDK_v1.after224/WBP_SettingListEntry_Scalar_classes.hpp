#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x344 - 0x318)
// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Scalar.WBP_SettingListEntry_Scalar_C
class UWBP_SettingListEntry_Scalar_C : public ULOTF2SettingListEntry_Scalar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Decrement;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Increment;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Indentation;                                       // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingListEntry_Background_C*    WBP_SettingListEntry_Background_33;                // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        IndentationLevel;                                  // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingListEntry_Scalar_C* GetDefaultObj();

	void SetIndentation(int32 IndentationLevel, double IndentationSize, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_SettingListEntry_Scalar_Button_104_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_SettingListEntry_Scalar_Button_266_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_SettingListEntry_Scalar(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


