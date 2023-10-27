#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x6C8 - 0x610)
// WidgetBlueprintGeneratedClass W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C
class UW_Head_Tattoos_Panel_C : public UBodyCustomizationScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button;                                            // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_96;                                         // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Container_BodyCustomization;                       // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Container_ShapeCustomization;                      // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  Forehead_Selector;                                 // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  Forehead_Tattoos;                                  // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_90;                                          // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  LeftEye_Selector;                                  // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  LeftEye_Tattoos;                                   // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  Mouth_Selector;                                    // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  Mouth_Tattoos;                                     // 0x680(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  Nose_Selector;                                     // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  Nose_Tattoos;                                      // 0x690(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  RightEye_Selector;                                 // 0x698(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  RightEye_Tattoos;                                  // 0x6A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Empty_C*                    Shape_Empty;                                       // 0x6A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BottomBarButton_C*                  W_BottomBarButton;                                 // 0x6B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CameraWidget_C*                   WBP_CameraWidget;                                  // 0x6B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           ShapeWidget;                                       // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Head_Tattoos_Panel_C* GetDefaultObj();

	void Enable_Shape_Customization(class UOptionSelectorBaseWidget* Selector, class UTattooPanel* Tattoo_Panel);
	void Set_Shape_Visibility(enum class ESlateVisibility Visibility);
	class UWidget* Select_Left_Eye(enum class EUINavigation Navigation);
	class UWidget* Select_Right_Eye(enum class EUINavigation Navigation);
	class UWidget* Select_Forehead(enum class EUINavigation Navigation);
	class UWidget* Select_Nose(enum class EUINavigation Navigation);
	class UWidget* Select_Mouth(enum class EUINavigation Navigation);
	class UWidget* GetDesiredFocusTarget();
	void BP_PanelActivated();
	void BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature();
	void BP_PanelDeactivated();
	void BP_StopShapeCustomization();
	void BndEvt__W_Head_Tattoos_Panel_Forehead_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Head_Tattoos_Panel_Nose_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Head_Tattoos_Panel_RightEye_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Head_Tattoos_Panel_LeftEye_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Head_Tattoos_Panel_Mouth_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void ExecuteUbergraph_W_Head_Tattoos_Panel(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_4, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_3, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_2, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_1, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category);
};

}


