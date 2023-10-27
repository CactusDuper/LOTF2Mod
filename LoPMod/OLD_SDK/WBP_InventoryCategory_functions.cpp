#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryCategory.WBP_InventoryCategory_C
// (None)

class UClass* UWBP_InventoryCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryCategory_C");

	return Clss;
}


// WBP_InventoryCategory_C WBP_InventoryCategory.Default__WBP_InventoryCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryCategory_C* UWBP_InventoryCategory_C::GetDefaultObj()
{
	static class UWBP_InventoryCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryCategory_C*>(UWBP_InventoryCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryCategory.WBP_InventoryCategory_C.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryCategory_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryCategory_C", "SetSelected");

	Params::UWBP_InventoryCategory_C_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryCategory.WBP_InventoryCategory_C.BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_0_OnFocusIn__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InventoryCategory_C::BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_0_OnFocusIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryCategory_C", "BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_0_OnFocusIn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryCategory.WBP_InventoryCategory_C.BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_1_OnFocusOut__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InventoryCategory_C::BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_1_OnFocusOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryCategory_C", "BndEvt__WBP_InventoryCategory_Background_Button_K2Node_ComponentBoundEvent_1_OnFocusOut__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryCategory.WBP_InventoryCategory_C.ExecuteUbergraph_WBP_InventoryCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryCategory_C::ExecuteUbergraph_WBP_InventoryCategory(int32 EntryPoint, bool K2Node_Event_bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryCategory_C", "ExecuteUbergraph_WBP_InventoryCategory");

	Params::UWBP_InventoryCategory_C_ExecuteUbergraph_WBP_InventoryCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


