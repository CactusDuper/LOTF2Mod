#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HeadCustomizationSocket.W_HeadCustomizationSocket_C
// (None)

class UClass* UW_HeadCustomizationSocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HeadCustomizationSocket_C");

	return Clss;
}


// W_HeadCustomizationSocket_C W_HeadCustomizationSocket.Default__W_HeadCustomizationSocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HeadCustomizationSocket_C* UW_HeadCustomizationSocket_C::GetDefaultObj()
{
	static class UW_HeadCustomizationSocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HeadCustomizationSocket_C*>(UW_HeadCustomizationSocket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HeadCustomizationSocket.W_HeadCustomizationSocket_C.BndEvt__W_HeadCustomizationSocket_Button_100_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HeadCustomizationSocket_C::BndEvt__W_HeadCustomizationSocket_Button_100_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadCustomizationSocket_C", "BndEvt__W_HeadCustomizationSocket_Button_100_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadCustomizationSocket.W_HeadCustomizationSocket_C.OnInputCaptureEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadCustomizationSocket_C::OnInputCaptureEnd_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadCustomizationSocket_C", "OnInputCaptureEnd_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadCustomizationSocket.W_HeadCustomizationSocket_C.ShowSlider
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadCustomizationSocket_C::ShowSlider(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadCustomizationSocket_C", "ShowSlider");

	Params::UW_HeadCustomizationSocket_C_ShowSlider_Params Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadCustomizationSocket.W_HeadCustomizationSocket_C.SetSliderFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadCustomizationSocket_C::SetSliderFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadCustomizationSocket_C", "SetSliderFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadCustomizationSocket.W_HeadCustomizationSocket_C.ExecuteUbergraph_W_HeadCustomizationSocket
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShow                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadCustomizationSocket_C::ExecuteUbergraph_W_HeadCustomizationSocket(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadCustomizationSocket_C", "ExecuteUbergraph_W_HeadCustomizationSocket");

	Params::UW_HeadCustomizationSocket_C_ExecuteUbergraph_W_HeadCustomizationSocket_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bShow = K2Node_Event_bShow;

	UObject::ProcessEvent(Func, &Parms);

}

}


