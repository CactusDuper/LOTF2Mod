#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryItemInfo.WBP_InventoryItemInfo_C
// (None)

class UClass* UWBP_InventoryItemInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryItemInfo_C");

	return Clss;
}


// WBP_InventoryItemInfo_C WBP_InventoryItemInfo.Default__WBP_InventoryItemInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryItemInfo_C* UWBP_InventoryItemInfo_C::GetDefaultObj()
{
	static class UWBP_InventoryItemInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryItemInfo_C*>(UWBP_InventoryItemInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryItemInfo.WBP_InventoryItemInfo_C.SetWeightDecreasedStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bWeightDecreased                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemInfo_C::SetWeightDecreasedStatus(bool bWeightDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryItemInfo_C", "SetWeightDecreasedStatus");

	Params::UWBP_InventoryItemInfo_C_SetWeightDecreasedStatus_Params Parms{};

	Parms.bWeightDecreased = bWeightDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryItemInfo.WBP_InventoryItemInfo_C.ExecuteUbergraph_WBP_InventoryItemInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWeightDecreased                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemInfo_C::ExecuteUbergraph_WBP_InventoryItemInfo(int32 EntryPoint, bool K2Node_Event_bWeightDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryItemInfo_C", "ExecuteUbergraph_WBP_InventoryItemInfo");

	Params::UWBP_InventoryItemInfo_C_ExecuteUbergraph_WBP_InventoryItemInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWeightDecreased = K2Node_Event_bWeightDecreased;

	UObject::ProcessEvent(Func, &Parms);

}

}


