#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryItemTitle.WBP_InventoryItemTitle_C
// (None)

class UClass* UWBP_InventoryItemTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryItemTitle_C");

	return Clss;
}


// WBP_InventoryItemTitle_C WBP_InventoryItemTitle.Default__WBP_InventoryItemTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryItemTitle_C* UWBP_InventoryItemTitle_C::GetDefaultObj()
{
	static class UWBP_InventoryItemTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryItemTitle_C*>(UWBP_InventoryItemTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryItemTitle.WBP_InventoryItemTitle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemTitle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryItemTitle_C", "PreConstruct");

	Params::UWBP_InventoryItemTitle_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryItemTitle.WBP_InventoryItemTitle_C.ExecuteUbergraph_WBP_InventoryItemTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemTitle_C::ExecuteUbergraph_WBP_InventoryItemTitle(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryItemTitle_C", "ExecuteUbergraph_WBP_InventoryItemTitle");

	Params::UWBP_InventoryItemTitle_C_ExecuteUbergraph_WBP_InventoryItemTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


