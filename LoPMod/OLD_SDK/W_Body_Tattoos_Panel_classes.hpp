#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x6C8 - 0x610)
// WidgetBlueprintGeneratedClass W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C
class UW_Body_Tattoos_Panel_C : public UBodyCustomizationScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Tattoo_Selector_C*                  Back_Selector;                                     // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  Back_Tattoos;                                      // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  Body_Selector;                                     // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_96;                                         // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  Chest_Tattoos;                                     // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Container_BodyCustomization;                       // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Container_ShapeCustomization;                      // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_90;                                          // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  LeftArm_Selector;                                  // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  LeftArm_Tattoos;                                   // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  LeftLeg_Selector;                                  // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  LeftLeg_Tattoos;                                   // 0x680(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  RightArm_Selector;                                 // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  RightArm_Tattoos;                                  // 0x690(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tattoo_Selector_C*                  RightLeg_Selector;                                 // 0x698(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Tattoos_C*                  RightLeg_Tattoos;                                  // 0x6A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Shape_Empty_C*                    Shape_Empty;                                       // 0x6A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BottomBarButton_C*                  W_BottomBarButton;                                 // 0x6B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CameraWidget_C*                   WBP_CameraWidget;                                  // 0x6B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           ShapeWidget;                                       // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Body_Tattoos_Panel_C* GetDefaultObj();

	void Enable_Shape_Customization(class UOptionSelectorBaseWidget* Selector, class UTattooPanel* Tattoo_Panel);
	void Set_Shape_Visibility(enum class ESlateVisibility Visibility);
	class UWidget* Select_Right_Leg(enum class EUINavigation Navigation);
	class UWidget* Select_Left_Leg(enum class EUINavigation Navigation);
	class UWidget* Select_Right_Arm(enum class EUINavigation Navigation);
	class UWidget* Select_Body(enum class EUINavigation Navigation);
	class UWidget* Select_Left_Arm(enum class EUINavigation Navigation);
	class UWidget* Select_Back(enum class EUINavigation Navigation);
	class UWidget* GetDesiredFocusTarget();
	void BP_PanelActivated();
	void BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature();
	void BP_PanelDeactivated();
	void BP_StopShapeCustomization();
	void BndEvt__W_Body_Tattoos_Panel_Body_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Body_Tattoos_Panel_Back_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Body_Tattoos_Panel_LeftArm_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Body_Tattoos_Panel_RightArm_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Body_Tattoos_Panel_LeftLeg_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void BndEvt__W_Body_Tattoos_Panel_RightLeg_Selector_K2Node_ComponentBoundEvent_6_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
	void ExecuteUbergraph_W_Body_Tattoos_Panel(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_5, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_4, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_3, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_2, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_1, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category);
};

}


