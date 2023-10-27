#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C
// (None)

class UClass* UW_Body_Tattoos_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Body_Tattoos_Panel_C");

	return Clss;
}


// W_Body_Tattoos_Panel_C W_Body_Tattoos_Panel.Default__W_Body_Tattoos_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Body_Tattoos_Panel_C* UW_Body_Tattoos_Panel_C::GetDefaultObj()
{
	static class UW_Body_Tattoos_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Body_Tattoos_Panel_C*>(UW_Body_Tattoos_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Enable Shape Customization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionSelectorBaseWidget*   Selector                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTattooPanel*                Tattoo_Panel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::Enable_Shape_Customization(class UOptionSelectorBaseWidget* Selector, class UTattooPanel* Tattoo_Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Enable Shape Customization");

	Params::UW_Body_Tattoos_Panel_C_Enable_Shape_Customization_Params Parms{};

	Parms.Selector = Selector;
	Parms.Tattoo_Panel = Tattoo_Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Set Shape Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::Set_Shape_Visibility(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Set Shape Visibility");

	Params::UW_Body_Tattoos_Panel_C_Set_Shape_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Right Leg
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Body_Tattoos_Panel_C::Select_Right_Leg(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Select Right Leg");

	Params::UW_Body_Tattoos_Panel_C_Select_Right_Leg_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Left Leg
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Body_Tattoos_Panel_C::Select_Left_Leg(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Select Left Leg");

	Params::UW_Body_Tattoos_Panel_C_Select_Left_Leg_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Right Arm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Body_Tattoos_Panel_C::Select_Right_Arm(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Select Right Arm");

	Params::UW_Body_Tattoos_Panel_C_Select_Right_Arm_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Body
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Body_Tattoos_Panel_C::Select_Body(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Select Body");

	Params::UW_Body_Tattoos_Panel_C_Select_Body_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Left Arm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Body_Tattoos_Panel_C::Select_Left_Arm(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Select Left Arm");

	Params::UW_Body_Tattoos_Panel_C_Select_Left_Arm_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Body_Tattoos_Panel_C::Select_Back(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "Select Back");

	Params::UW_Body_Tattoos_Panel_C_Select_Back_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Body_Tattoos_Panel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "GetDesiredFocusTarget");

	Params::UW_Body_Tattoos_Panel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Body_Tattoos_Panel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Body_Tattoos_Panel_C::BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Body_Tattoos_Panel_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BP_StopShapeCustomization
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Body_Tattoos_Panel_C::BP_StopShapeCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BP_StopShapeCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_Body_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::BndEvt__W_Body_Tattoos_Panel_Body_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BndEvt__W_Body_Tattoos_Panel_Body_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature");

	Params::UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_Body_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_Back_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::BndEvt__W_Body_Tattoos_Panel_Back_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BndEvt__W_Body_Tattoos_Panel_Back_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature");

	Params::UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_Back_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_LeftArm_Selector_K2Node_ComponentBoundEvent_2_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::BndEvt__W_Body_Tattoos_Panel_LeftArm_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BndEvt__W_Body_Tattoos_Panel_LeftArm_Selector_K2Node_ComponentBoundEvent_2_On Customize Feature__DelegateSignature");

	Params::UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_LeftArm_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_RightArm_Selector_K2Node_ComponentBoundEvent_3_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::BndEvt__W_Body_Tattoos_Panel_RightArm_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BndEvt__W_Body_Tattoos_Panel_RightArm_Selector_K2Node_ComponentBoundEvent_3_On Customize Feature__DelegateSignature");

	Params::UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_RightArm_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_LeftLeg_Selector_K2Node_ComponentBoundEvent_5_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::BndEvt__W_Body_Tattoos_Panel_LeftLeg_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BndEvt__W_Body_Tattoos_Panel_LeftLeg_Selector_K2Node_ComponentBoundEvent_5_On Customize Feature__DelegateSignature");

	Params::UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_LeftLeg_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_RightLeg_Selector_K2Node_ComponentBoundEvent_6_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::BndEvt__W_Body_Tattoos_Panel_RightLeg_Selector_K2Node_ComponentBoundEvent_6_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "BndEvt__W_Body_Tattoos_Panel_RightLeg_Selector_K2Node_ComponentBoundEvent_6_On Customize Feature__DelegateSignature");

	Params::UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_RightLeg_Selector_K2Node_ComponentBoundEvent_6_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.ExecuteUbergraph_W_Body_Tattoos_Panel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Body_Tattoos_Panel_C::ExecuteUbergraph_W_Body_Tattoos_Panel(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_5, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_4, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_3, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_2, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_1, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Body_Tattoos_Panel_C", "ExecuteUbergraph_W_Body_Tattoos_Panel");

	Params::UW_Body_Tattoos_Panel_C_ExecuteUbergraph_W_Body_Tattoos_Panel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_5 = K2Node_ComponentBoundEvent_Customization_Category_5;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_4 = K2Node_ComponentBoundEvent_Customization_Category_4;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_3 = K2Node_ComponentBoundEvent_Customization_Category_3;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_2 = K2Node_ComponentBoundEvent_Customization_Category_2;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_1 = K2Node_ComponentBoundEvent_Customization_Category_1;
	Parms.K2Node_ComponentBoundEvent_Customization_Category = K2Node_ComponentBoundEvent_Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}

}


