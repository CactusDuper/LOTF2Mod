#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HeadPresetWidget_list.W_HeadPresetWidget_list_C
// (None)

class UClass* UW_HeadPresetWidget_list_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HeadPresetWidget_list_C");

	return Clss;
}


// W_HeadPresetWidget_list_C W_HeadPresetWidget_list.Default__W_HeadPresetWidget_list_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HeadPresetWidget_list_C* UW_HeadPresetWidget_list_C::GetDefaultObj()
{
	static class UW_HeadPresetWidget_list_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HeadPresetWidget_list_C*>(UW_HeadPresetWidget_list_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HeadPresetWidget_list.W_HeadPresetWidget_list_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_list_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_list_C", "PreConstruct");

	Params::UW_HeadPresetWidget_list_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadPresetWidget_list.W_HeadPresetWidget_list_C.On Focus In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadPresetWidget_list_C::On_Focus_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_list_C", "On Focus In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadPresetWidget_list.W_HeadPresetWidget_list_C.On Focus Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadPresetWidget_list_C::On_Focus_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_list_C", "On Focus Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadPresetWidget_list.W_HeadPresetWidget_list_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_list_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_list_C", "SetSelected");

	Params::UW_HeadPresetWidget_list_C_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadPresetWidget_list.W_HeadPresetWidget_list_C.SetFocused
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_list_C::SetFocused(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_list_C", "SetFocused");

	Params::UW_HeadPresetWidget_list_C_SetFocused_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadPresetWidget_list.W_HeadPresetWidget_list_C.ExecuteUbergraph_W_HeadPresetWidget_list
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_Event_bSelected_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_list_C::ExecuteUbergraph_W_HeadPresetWidget_list(int32 EntryPoint, bool K2Node_Event_bSelected, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bSelected_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_list_C", "ExecuteUbergraph_W_HeadPresetWidget_list");

	Params::UW_HeadPresetWidget_list_C_ExecuteUbergraph_W_HeadPresetWidget_list_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_bSelected_1 = K2Node_Event_bSelected_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadPresetWidget_list.W_HeadPresetWidget_list_C.OnHeadSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      HeadName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHeadPresetWidget*           Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadPresetWidget_list_C::OnHeadSelected__DelegateSignature(const class FString& HeadName, int32 ID, class UHeadPresetWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadPresetWidget_list_C", "OnHeadSelected__DelegateSignature");

	Params::UW_HeadPresetWidget_list_C_OnHeadSelected__DelegateSignature_Params Parms{};

	Parms.HeadName = HeadName;
	Parms.ID = ID;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


