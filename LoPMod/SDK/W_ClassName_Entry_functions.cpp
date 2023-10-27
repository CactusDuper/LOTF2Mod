#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ClassName_Entry.W_ClassName_Entry_C
// (None)

class UClass* UW_ClassName_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ClassName_Entry_C");

	return Clss;
}


// W_ClassName_Entry_C W_ClassName_Entry.Default__W_ClassName_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ClassName_Entry_C* UW_ClassName_Entry_C::GetDefaultObj()
{
	static class UW_ClassName_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ClassName_Entry_C*>(UW_ClassName_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ClassName_Entry.W_ClassName_Entry_C.Set Is Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Hovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassName_Entry_C::Set_Is_Hovered(bool Is_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassName_Entry_C", "Set Is Hovered");

	Params::UW_ClassName_Entry_C_Set_Is_Hovered_Params Parms{};

	Parms.Is_Hovered = Is_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassName_Entry.W_ClassName_Entry_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassName_Entry_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassName_Entry_C", "SetSelected");

	Params::UW_ClassName_Entry_C_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassName_Entry.W_ClassName_Entry_C.ExecuteUbergraph_W_ClassName_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Hovered                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassName_Entry_C::ExecuteUbergraph_W_ClassName_Entry(int32 EntryPoint, bool K2Node_CustomEvent_Is_Hovered, bool K2Node_Event_bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassName_Entry_C", "ExecuteUbergraph_W_ClassName_Entry");

	Params::UW_ClassName_Entry_C_ExecuteUbergraph_W_ClassName_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Is_Hovered = K2Node_CustomEvent_Is_Hovered;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


