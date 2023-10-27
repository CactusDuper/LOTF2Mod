#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0x832 - 0x7F0)
// WidgetBlueprintGeneratedClass W_TopBarButton.W_TopBarButton_C
class UW_TopBarButton_C : public UTopBarButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Background_Image;                                  // 0x7F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x800(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Selected_Image;                                    // 0x808(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            Category_Image;                                    // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Category_Name;                                     // 0x818(0x18)(Edit, BlueprintVisible)
	bool                                         Is_Selected;                                       // 0x830(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Category;                                          // 0x831(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TopBarButton_C* GetDefaultObj();

	void Refresh_Visibility(bool Visible);
	void PreConstruct(bool IsDesignTime);
	void On_Focus_In();
	void On_Focus_Out();
	void SetSelected(bool bSelected);
	void ExecuteUbergraph_W_TopBarButton(int32 EntryPoint, bool K2Node_Event_bSelected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime);
};

}


