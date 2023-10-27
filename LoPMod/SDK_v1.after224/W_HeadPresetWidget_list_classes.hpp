#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0x3BD - 0x378)
// WidgetBlueprintGeneratedClass W_HeadPresetWidget_list.W_HeadPresetWidget_list_C
class UW_HeadPresetWidget_list_C : public UHeadPresetWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Background;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Selected;                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selected;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHeadSelected;                                    // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ID;                                                // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Is_Selected;                                       // 0x3BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_HeadPresetWidget_list_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void On_Focus_In();
	void On_Focus_Out();
	void SetSelected(bool bSelected);
	void SetFocused(bool bSelected);
	void ExecuteUbergraph_W_HeadPresetWidget_list(int32 EntryPoint, bool K2Node_Event_bSelected, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bSelected_1);
	void OnHeadSelected__DelegateSignature(const class FString& HeadName, int32 ID, class UHeadPresetWidget* Widget);
};

}


