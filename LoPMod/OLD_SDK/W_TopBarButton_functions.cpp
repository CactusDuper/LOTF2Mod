#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TopBarButton.W_TopBarButton_C
// (None)

class UClass* UW_TopBarButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TopBarButton_C");

	return Clss;
}


// W_TopBarButton_C W_TopBarButton.Default__W_TopBarButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TopBarButton_C* UW_TopBarButton_C::GetDefaultObj()
{
	static class UW_TopBarButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TopBarButton_C*>(UW_TopBarButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TopBarButton.W_TopBarButton_C.Refresh Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TopBarButton_C::Refresh_Visibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TopBarButton_C", "Refresh Visibility");

	Params::UW_TopBarButton_C_Refresh_Visibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TopBarButton.W_TopBarButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TopBarButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TopBarButton_C", "PreConstruct");

	Params::UW_TopBarButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TopBarButton.W_TopBarButton_C.On Focus In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TopBarButton_C::On_Focus_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TopBarButton_C", "On Focus In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TopBarButton.W_TopBarButton_C.On Focus Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TopBarButton_C::On_Focus_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TopBarButton_C", "On Focus Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TopBarButton.W_TopBarButton_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TopBarButton_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TopBarButton_C", "SetSelected");

	Params::UW_TopBarButton_C_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TopBarButton.W_TopBarButton_C.ExecuteUbergraph_W_TopBarButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TopBarButton_C::ExecuteUbergraph_W_TopBarButton(int32 EntryPoint, bool K2Node_Event_bSelected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TopBarButton_C", "ExecuteUbergraph_W_TopBarButton");

	Params::UW_TopBarButton_C_ExecuteUbergraph_W_TopBarButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


