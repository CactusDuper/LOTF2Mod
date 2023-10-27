#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C
// (None)

class UClass* UW_Head_Tattoos_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Head_Tattoos_Panel_C");

	return Clss;
}


// W_Head_Tattoos_Panel_C W_Head_Tattoos_Panel.Default__W_Head_Tattoos_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Head_Tattoos_Panel_C* UW_Head_Tattoos_Panel_C::GetDefaultObj()
{
	static class UW_Head_Tattoos_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Head_Tattoos_Panel_C*>(UW_Head_Tattoos_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Enable Shape Customization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionSelectorBaseWidget*   Selector                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTattooPanel*                Tattoo_Panel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::Enable_Shape_Customization(class UOptionSelectorBaseWidget* Selector, class UTattooPanel* Tattoo_Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "Enable Shape Customization");

	Params::UW_Head_Tattoos_Panel_C_Enable_Shape_Customization_Params Parms{};

	Parms.Selector = Selector;
	Parms.Tattoo_Panel = Tattoo_Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Set Shape Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::Set_Shape_Visibility(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "Set Shape Visibility");

	Params::UW_Head_Tattoos_Panel_C_Set_Shape_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Left Eye
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Tattoos_Panel_C::Select_Left_Eye(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "Select Left Eye");

	Params::UW_Head_Tattoos_Panel_C_Select_Left_Eye_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Right Eye
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Tattoos_Panel_C::Select_Right_Eye(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "Select Right Eye");

	Params::UW_Head_Tattoos_Panel_C_Select_Right_Eye_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Forehead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Tattoos_Panel_C::Select_Forehead(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "Select Forehead");

	Params::UW_Head_Tattoos_Panel_C_Select_Forehead_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Nose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Tattoos_Panel_C::Select_Nose(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "Select Nose");

	Params::UW_Head_Tattoos_Panel_C_Select_Nose_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Mouth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Tattoos_Panel_C::Select_Mouth(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "Select Mouth");

	Params::UW_Head_Tattoos_Panel_C_Select_Mouth_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Tattoos_Panel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "GetDesiredFocusTarget");

	Params::UW_Head_Tattoos_Panel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Tattoos_Panel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Head_Tattoos_Panel_C::BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BndEvt__W_Tattoos_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Tattoos_Panel_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BP_StopShapeCustomization
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Head_Tattoos_Panel_C::BP_StopShapeCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BP_StopShapeCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_Forehead_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::BndEvt__W_Head_Tattoos_Panel_Forehead_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BndEvt__W_Head_Tattoos_Panel_Forehead_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature");

	Params::UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_Forehead_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_Nose_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::BndEvt__W_Head_Tattoos_Panel_Nose_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BndEvt__W_Head_Tattoos_Panel_Nose_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature");

	Params::UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_Nose_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_RightEye_Selector_K2Node_ComponentBoundEvent_2_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::BndEvt__W_Head_Tattoos_Panel_RightEye_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BndEvt__W_Head_Tattoos_Panel_RightEye_Selector_K2Node_ComponentBoundEvent_2_On Customize Feature__DelegateSignature");

	Params::UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_RightEye_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_LeftEye_Selector_K2Node_ComponentBoundEvent_3_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::BndEvt__W_Head_Tattoos_Panel_LeftEye_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BndEvt__W_Head_Tattoos_Panel_LeftEye_Selector_K2Node_ComponentBoundEvent_3_On Customize Feature__DelegateSignature");

	Params::UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_LeftEye_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_Mouth_Selector_K2Node_ComponentBoundEvent_5_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::BndEvt__W_Head_Tattoos_Panel_Mouth_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "BndEvt__W_Head_Tattoos_Panel_Mouth_Selector_K2Node_ComponentBoundEvent_5_On Customize Feature__DelegateSignature");

	Params::UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_Mouth_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.ExecuteUbergraph_W_Head_Tattoos_Panel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Tattoos_Panel_C::ExecuteUbergraph_W_Head_Tattoos_Panel(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_4, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_3, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_2, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_1, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Tattoos_Panel_C", "ExecuteUbergraph_W_Head_Tattoos_Panel");

	Params::UW_Head_Tattoos_Panel_C_ExecuteUbergraph_W_Head_Tattoos_Panel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_4 = K2Node_ComponentBoundEvent_Customization_Category_4;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_3 = K2Node_ComponentBoundEvent_Customization_Category_3;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_2 = K2Node_ComponentBoundEvent_Customization_Category_2;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_1 = K2Node_ComponentBoundEvent_Customization_Category_1;
	Parms.K2Node_ComponentBoundEvent_Customization_Category = K2Node_ComponentBoundEvent_Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}

}


