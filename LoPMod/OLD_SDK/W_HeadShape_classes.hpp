#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xA49 - 0xA40)
// WidgetBlueprintGeneratedClass W_HeadShape.W_HeadShape_C
class UW_HeadShape_C : public UHeadShapeSliderWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Edit_Enabled;                                      // 0xA48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_HeadShape_C* GetDefaultObj();

	void Deselect_All();
	void OnShown_533C054F48598C1BC59B4BAC717A5E8C(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_533C054F48598C1BC59B4BAC717A5E8C(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_533C054F48598C1BC59B4BAC717A5E8C(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void BndEvt__W_HeadShape_Top_Head_K2Node_ComponentBoundEvent_3_On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location);
	void BndEvt__W_HeadShape_Left_Head_K2Node_ComponentBoundEvent_0_On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location);
	void BndEvt__W_HeadShape_Right_Head_K2Node_ComponentBoundEvent_1_On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location);
	void PreConstruct(bool IsDesignTime);
	void BP_ShowWarningPopup();
	void ExecuteUbergraph_W_HeadShape(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EHeadPresetLocation K2Node_ComponentBoundEvent_Head_Location_2, enum class EHeadPresetLocation K2Node_ComponentBoundEvent_Head_Location_1, enum class EHeadPresetLocation K2Node_ComponentBoundEvent_Head_Location, bool K2Node_Event_IsDesignTime);
};

}


