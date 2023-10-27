#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x309 - 0x2D0)
// WidgetBlueprintGeneratedClass W_ShapeTitle.W_ShapeTitle_C
class UW_ShapeTitle_C : public UTitleShapePreviewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_FeatureName;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Customize_Feature;                              // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  FeatureName;                                       // 0x2F0(0x18)(Edit, BlueprintVisible)
	bool                                         Show_Preview;                                      // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ShapeTitle_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Set_Title(class FText Title);
	void ExecuteUbergraph_W_ShapeTitle(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Title);
	void On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
};

}


