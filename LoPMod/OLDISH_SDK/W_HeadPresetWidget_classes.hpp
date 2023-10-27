#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3B8 - 0x378)
// WidgetBlueprintGeneratedClass W_HeadPresetWidget.W_HeadPresetWidget_C
class UW_HeadPresetWidget_C : public UHeadPresetWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Selected;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FocusableButton_C*                WBP_FocusableButton;                               // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ID;                                                // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Is_Selected;                                       // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EHeadPresetLocation               Head_Location;                                     // 0x3A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F9F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Head_Selected;                                  // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_HeadPresetWidget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_HeadPresetWidget_WBP_FocusableButton_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void SetSelected(bool bSelected);
	void ExecuteUbergraph_W_HeadPresetWidget(int32 EntryPoint, bool K2Node_Event_bSelected, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue);
	void On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location);
};

}


