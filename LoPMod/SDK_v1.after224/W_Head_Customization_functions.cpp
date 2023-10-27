#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Head_Customization.W_Head_Customization_C
// (None)

class UClass* UW_Head_Customization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Head_Customization_C");

	return Clss;
}


// W_Head_Customization_C W_Head_Customization.Default__W_Head_Customization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Head_Customization_C* UW_Head_Customization_C::GetDefaultObj()
{
	static class UW_Head_Customization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Head_Customization_C*>(UW_Head_Customization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Head_Customization.W_Head_Customization_C.Select Left from Right
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_OnSwitchHeadColumn_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Left_from_Right(enum class EUINavigation Navigation, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUserWidget* CallFunc_OnSwitchHeadColumn_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Left from Right");

	Params::UW_Head_Customization_C_Select_Left_from_Right_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_OnSwitchHeadColumn_ReturnValue = CallFunc_OnSwitchHeadColumn_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Center From Right
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_OnSwitchHeadColumn_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Center_From_Right(enum class EUINavigation Navigation, class UUserWidget* CallFunc_OnSwitchHeadColumn_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Center From Right");

	Params::UW_Head_Customization_C_Select_Center_From_Right_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_OnSwitchHeadColumn_ReturnValue = CallFunc_OnSwitchHeadColumn_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Right from Center
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_OnSwitchHeadColumn_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Right_from_Center(enum class EUINavigation Navigation, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUserWidget* CallFunc_OnSwitchHeadColumn_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Right from Center");

	Params::UW_Head_Customization_C_Select_Right_from_Center_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_OnSwitchHeadColumn_ReturnValue = CallFunc_OnSwitchHeadColumn_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Left From Center
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_OnSwitchHeadColumn_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Left_From_Center(enum class EUINavigation Navigation, class UUserWidget* CallFunc_OnSwitchHeadColumn_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Left From Center");

	Params::UW_Head_Customization_C_Select_Left_From_Center_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_OnSwitchHeadColumn_ReturnValue = CallFunc_OnSwitchHeadColumn_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Right From Left
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_OnSwitchHeadColumn_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Right_From_Left(enum class EUINavigation Navigation, class UUserWidget* CallFunc_OnSwitchHeadColumn_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Right From Left");

	Params::UW_Head_Customization_C_Select_Right_From_Left_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_OnSwitchHeadColumn_ReturnValue = CallFunc_OnSwitchHeadColumn_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Center From Left
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_OnSwitchHeadColumn_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Center_From_Left(enum class EUINavigation Navigation, class UUserWidget* CallFunc_OnSwitchHeadColumn_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Center From Left");

	Params::UW_Head_Customization_C_Select_Center_From_Left_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_OnSwitchHeadColumn_ReturnValue = CallFunc_OnSwitchHeadColumn_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Age
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Age(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Age");

	Params::UW_Head_Customization_C_Select_Age_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Skin Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Skin_Color(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Skin Color");

	Params::UW_Head_Customization_C_Select_Skin_Color_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Facial Hair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Facial_Hair(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Facial Hair");

	Params::UW_Head_Customization_C_Select_Facial_Hair_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Select Hair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::Select_Hair(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Select Hair");

	Params::UW_Head_Customization_C_Select_Hair_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.Show Details Panel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Selector_Button                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UShapeCategoryWidget*        Panel_Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::Show_Details_Panel(class UUserWidget* Selector_Button, class UShapeCategoryWidget* Panel_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Show Details Panel");

	Params::UW_Head_Customization_C_Show_Details_Panel_Params Parms{};

	Parms.Selector_Button = Selector_Button;
	Parms.Panel_Widget = Panel_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.Set Shape Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::Set_Shape_Visibility(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Set Shape Visibility");

	Params::UW_Head_Customization_C_Set_Shape_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.Update Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Input_Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::Update_Icon(class UInputActionImage* Input_Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "Update Icon");

	Params::UW_Head_Customization_C_Update_Icon_Params Parms{};

	Parms.Input_Image = Input_Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Customization_C::GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "GetDesiredFocusTarget");

	Params::UW_Head_Customization_C_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Customization.W_Head_Customization_C.OnCinematicEnd
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::OnCinematicEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "OnCinematicEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.OnRequestEditHead
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowPanel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::OnRequestEditHead(enum class ECustomizationCategory Category, bool bShowPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "OnRequestEditHead");

	Params::UW_Head_Customization_C_OnRequestEditHead_Params Parms{};

	Parms.Category = Category;
	Parms.bShowPanel = bShowPanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__WBP_Head_Customization_General_HeadShape_K2Node_ComponentBoundEvent_2_OnRequestEditHead__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BndEvt__WBP_Head_Customization_General_HeadShape_K2Node_ComponentBoundEvent_2_OnRequestEditHead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__WBP_Head_Customization_General_HeadShape_K2Node_ComponentBoundEvent_2_OnRequestEditHead__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__WBP_Head_Customization_Root_Button_K2Node_ComponentBoundEvent_18_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BndEvt__WBP_Head_Customization_Root_Button_K2Node_ComponentBoundEvent_18_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__WBP_Head_Customization_Root_Button_K2Node_ComponentBoundEvent_18_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__WBP_Head_Customization_W_BottomBarButton_K2Node_ComponentBoundEvent_19_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BndEvt__WBP_Head_Customization_W_BottomBarButton_K2Node_ComponentBoundEvent_19_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__WBP_Head_Customization_W_BottomBarButton_K2Node_ComponentBoundEvent_19_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.BP_RandomizeCharacter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BP_RandomizeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BP_RandomizeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_FacialHair_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_FacialHair_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_FacialHair_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_FacialHair_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_21_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_21_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_21_On Customize Feature__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_21_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BP_StopShapeCustomization
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BP_StopShapeCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BP_StopShapeCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_General_HeadShape_K2Node_ComponentBoundEvent_3_OnRequestChangeHeadPreset__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EHeadPresetLocation     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_General_HeadShape_K2Node_ComponentBoundEvent_3_OnRequestChangeHeadPreset__DelegateSignature(enum class EHeadPresetLocation Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_General_HeadShape_K2Node_ComponentBoundEvent_3_OnRequestChangeHeadPreset__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_General_HeadShape_K2Node_ComponentBoundEvent_3_OnRequestChangeHeadPreset__DelegateSignature_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Button_Face_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Button_Face_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Button_Face_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Customization.W_Head_Customization_C.On HeadPreset Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexListView*                List                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::On_HeadPreset_Clicked(class UObject* Item, class UHexListView* List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "On HeadPreset Clicked");

	Params::UW_Head_Customization_C_On_HeadPreset_Clicked_Params Parms{};

	Parms.Item = Item;
	Parms.List = List;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.On HeadPreset Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Hovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexListView*                List                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::On_HeadPreset_Hovered(class UObject* Item, bool Is_Hovered, class UHexListView* List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "On HeadPreset Hovered");

	Params::UW_Head_Customization_C_On_HeadPreset_Hovered_Params Parms{};

	Parms.Item = Item;
	Parms.Is_Hovered = Is_Hovered;
	Parms.List = List;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_6_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_6_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_6_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_6_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_8_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_8_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_8_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_8_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_9_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_9_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_9_SimpleListItemEventDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_9_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Left_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.On ItemSelection Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexListView*                List                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::On_ItemSelection_Change(class UObject* Item, bool Is_Selected, class UHexListView* List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "On ItemSelection Change");

	Params::UW_Head_Customization_C_On_ItemSelection_Change_Params Parms{};

	Parms.Item = Item;
	Parms.Is_Selected = Is_Selected;
	Parms.List = List;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_11_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_11_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_11_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Top_K2Node_ComponentBoundEvent_11_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_Presets_Head_Right_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.BndEvt__W_Head_Customization_SkinColor_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::BndEvt__W_Head_Customization_SkinColor_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "BndEvt__W_Head_Customization_SkinColor_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature");

	Params::UW_Head_Customization_C_BndEvt__W_Head_Customization_SkinColor_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Customization.W_Head_Customization_C.ExecuteUbergraph_W_Head_Customization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorSlotVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_Event_category                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowPanel                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHeadPresetLocation     K2Node_ComponentBoundEvent_location                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexListView*                K2Node_CustomEvent_List_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_HeadPresetWidget_list_C*  K2Node_DynamicCast_AsW_Head_Preset_Widget_List                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_HeadPresetWidget_list_C*  K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Hovered                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexListView*                K2Node_CustomEvent_List_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_8                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HeadPresetWidget_list_C*  K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Selected                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexListView*                K2Node_CustomEvent_List                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_3                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_HeadPresetWidget_list_C*  K2Node_DynamicCast_AsW_Head_Preset_Widget_List_3                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Customization_C::ExecuteUbergraph_W_Head_Customization(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsArmorSlotVisible_ReturnValue, enum class ECustomizationCategory K2Node_Event_category, bool K2Node_Event_bShowPanel, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_2, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_1, bool CallFunc_IsValid_ReturnValue, enum class EHeadPresetLocation K2Node_ComponentBoundEvent_location, class UObject* K2Node_CustomEvent_Item_2, class UHexListView* K2Node_CustomEvent_List_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, class UObject* CallFunc_Array_Get_Item, class UW_HeadPresetWidget_list_C* K2Node_DynamicCast_AsW_Head_Preset_Widget_List, bool K2Node_DynamicCast_bSuccess_2, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class UW_HeadPresetWidget_list_C* K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* K2Node_CustomEvent_Item_1, bool K2Node_CustomEvent_Is_Hovered, class UHexListView* K2Node_CustomEvent_List_1, class UObject* K2Node_ComponentBoundEvent_Item_8, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UW_HeadPresetWidget_list_C* K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2, bool K2Node_DynamicCast_bSuccess_4, class UObject* K2Node_ComponentBoundEvent_Item_7, bool K2Node_ComponentBoundEvent_bIsHovered_2, class UObject* K2Node_ComponentBoundEvent_Item_6, class UObject* K2Node_ComponentBoundEvent_Item_5, bool K2Node_ComponentBoundEvent_bIsHovered_1, class UObject* K2Node_ComponentBoundEvent_Item_4, class UObject* K2Node_ComponentBoundEvent_Item_3, bool K2Node_ComponentBoundEvent_bIsHovered, class UObject* K2Node_ComponentBoundEvent_Item_2, bool K2Node_ComponentBoundEvent_bIsSelected_2, class UObject* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_Is_Selected, class UHexListView* K2Node_CustomEvent_List, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_3, class UW_HeadPresetWidget_list_C* K2Node_DynamicCast_AsW_Head_Preset_Widget_List_3, bool K2Node_DynamicCast_bSuccess_5, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsSelected_1, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Customization_C", "ExecuteUbergraph_W_Head_Customization");

	Params::UW_Head_Customization_C_ExecuteUbergraph_W_Head_Customization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsArmorSlotVisible_ReturnValue = CallFunc_IsArmorSlotVisible_ReturnValue;
	Parms.K2Node_Event_category = K2Node_Event_category;
	Parms.K2Node_Event_bShowPanel = K2Node_Event_bShowPanel;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_2 = K2Node_ComponentBoundEvent_Customization_Category_2;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_1 = K2Node_ComponentBoundEvent_Customization_Category_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_location = K2Node_ComponentBoundEvent_location;
	Parms.K2Node_CustomEvent_Item_2 = K2Node_CustomEvent_Item_2;
	Parms.K2Node_CustomEvent_List_2 = K2Node_CustomEvent_List_2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_2 = CallFunc_PostEventAtLocation_ReturnValue_2;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue = CallFunc_GetWidgetFromItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Head_Preset_Widget_List = K2Node_DynamicCast_AsW_Head_Preset_Widget_List;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_1 = CallFunc_GetWidgetFromItem_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1 = K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_Is_Hovered = K2Node_CustomEvent_Is_Hovered;
	Parms.K2Node_CustomEvent_List_1 = K2Node_CustomEvent_List_1;
	Parms.K2Node_ComponentBoundEvent_Item_8 = K2Node_ComponentBoundEvent_Item_8;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_2 = CallFunc_GetWidgetFromItem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2 = K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_ComponentBoundEvent_Item_7 = K2Node_ComponentBoundEvent_Item_7;
	Parms.K2Node_ComponentBoundEvent_bIsHovered_2 = K2Node_ComponentBoundEvent_bIsHovered_2;
	Parms.K2Node_ComponentBoundEvent_Item_6 = K2Node_ComponentBoundEvent_Item_6;
	Parms.K2Node_ComponentBoundEvent_Item_5 = K2Node_ComponentBoundEvent_Item_5;
	Parms.K2Node_ComponentBoundEvent_bIsHovered_1 = K2Node_ComponentBoundEvent_bIsHovered_1;
	Parms.K2Node_ComponentBoundEvent_Item_4 = K2Node_ComponentBoundEvent_Item_4;
	Parms.K2Node_ComponentBoundEvent_Item_3 = K2Node_ComponentBoundEvent_Item_3;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.K2Node_ComponentBoundEvent_Item_2 = K2Node_ComponentBoundEvent_Item_2;
	Parms.K2Node_ComponentBoundEvent_bIsSelected_2 = K2Node_ComponentBoundEvent_bIsSelected_2;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Is_Selected = K2Node_CustomEvent_Is_Selected;
	Parms.K2Node_CustomEvent_List = K2Node_CustomEvent_List;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_3 = CallFunc_GetWidgetFromItem_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsW_Head_Preset_Widget_List_3 = K2Node_DynamicCast_AsW_Head_Preset_Widget_List_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsSelected_1 = K2Node_ComponentBoundEvent_bIsSelected_1;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.K2Node_ComponentBoundEvent_Customization_Category = K2Node_ComponentBoundEvent_Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}

}


