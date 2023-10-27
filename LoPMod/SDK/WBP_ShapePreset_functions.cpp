#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShapePreset.WBP_ShapePreset_C
// (None)

class UClass* UWBP_ShapePreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShapePreset_C");

	return Clss;
}


// WBP_ShapePreset_C WBP_ShapePreset.Default__WBP_ShapePreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShapePreset_C* UWBP_ShapePreset_C::GetDefaultObj()
{
	static class UWBP_ShapePreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShapePreset_C*>(UWBP_ShapePreset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShapePreset.WBP_ShapePreset_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShapePreset_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShapePreset_C", "SetSelected");

	Params::UWBP_ShapePreset_C_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShapePreset.WBP_ShapePreset_C.SetFocused
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShapePreset_C::SetFocused(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShapePreset_C", "SetFocused");

	Params::UWBP_ShapePreset_C_SetFocused_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShapePreset.WBP_ShapePreset_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShapePreset_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShapePreset_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShapePreset.WBP_ShapePreset_C.ExecuteUbergraph_WBP_ShapePreset
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               K2Node_Event_bSelected_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShapePreset_C::ExecuteUbergraph_WBP_ShapePreset(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool K2Node_Event_bSelected_1, bool K2Node_Event_bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShapePreset_C", "ExecuteUbergraph_WBP_ShapePreset");

	Params::UWBP_ShapePreset_C_ExecuteUbergraph_WBP_ShapePreset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Event_bSelected_1 = K2Node_Event_bSelected_1;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


