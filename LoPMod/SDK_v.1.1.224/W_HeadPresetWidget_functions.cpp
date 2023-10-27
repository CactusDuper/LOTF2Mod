#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HeadPresetWidget.W_HeadPresetWidget_C
// (None)

class UClass* UW_HeadPresetWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HeadPresetWidget_C");

	return Clss;
}


// W_HeadPresetWidget_C W_HeadPresetWidget.Default__W_HeadPresetWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HeadPresetWidget_C* UW_HeadPresetWidget_C::GetDefaultObj()
{
	static class UW_HeadPresetWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HeadPresetWidget_C*>(UW_HeadPresetWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HeadPresetWidget.W_HeadPresetWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_C", "PreConstruct");

	Params::UW_HeadPresetWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadPresetWidget.W_HeadPresetWidget_C.BndEvt__W_HeadPresetWidget_WBP_FocusableButton_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HeadPresetWidget_C::BndEvt__W_HeadPresetWidget_WBP_FocusableButton_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_C", "BndEvt__W_HeadPresetWidget_WBP_FocusableButton_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadPresetWidget.W_HeadPresetWidget_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_C", "SetSelected");

	Params::UW_HeadPresetWidget_C_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadPresetWidget.W_HeadPresetWidget_C.ExecuteUbergraph_W_HeadPresetWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_HeadPresetWidget_C::ExecuteUbergraph_W_HeadPresetWidget(int32 EntryPoint, bool K2Node_Event_bSelected, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_C", "ExecuteUbergraph_W_HeadPresetWidget");

	Params::UW_HeadPresetWidget_C_ExecuteUbergraph_W_HeadPresetWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadPresetWidget.W_HeadPresetWidget_C.On Head Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHeadPresetLocation     Head_Location                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_C::On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_C", "On Head Selected__DelegateSignature");

	Params::UW_HeadPresetWidget_C_On_Head_Selected__DelegateSignature_Params Parms{};

	Parms.Head_Location = Head_Location;

	UObject::ProcessEvent(Func, &Parms);

}

}


