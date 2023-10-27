#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_InventoryStatRow.W_InventoryStatRow_C
// (None)

class UClass* UW_InventoryStatRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_InventoryStatRow_C");

	return Clss;
}


// W_InventoryStatRow_C W_InventoryStatRow.Default__W_InventoryStatRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_InventoryStatRow_C* UW_InventoryStatRow_C::GetDefaultObj()
{
	static class UW_InventoryStatRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_InventoryStatRow_C*>(UW_InventoryStatRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_InventoryStatRow.W_InventoryStatRow_C.ShowBackground
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowBackground                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryStatRow_C::ShowBackground(bool bShowBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryStatRow_C", "ShowBackground");

	Params::UW_InventoryStatRow_C_ShowBackground_Params Parms{};

	Parms.bShowBackground = bShowBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InventoryStatRow.W_InventoryStatRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryStatRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryStatRow_C", "PreConstruct");

	Params::UW_InventoryStatRow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InventoryStatRow.W_InventoryStatRow_C.SetStatRequirementsStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPlayerHasStats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRequirementsIgnored                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryStatRow_C::SetStatRequirementsStatus(bool bPlayerHasStats, bool bRequirementsIgnored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryStatRow_C", "SetStatRequirementsStatus");

	Params::UW_InventoryStatRow_C_SetStatRequirementsStatus_Params Parms{};

	Parms.bPlayerHasStats = bPlayerHasStats;
	Parms.bRequirementsIgnored = bRequirementsIgnored;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InventoryStatRow.W_InventoryStatRow_C.ExecuteUbergraph_W_InventoryStatRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowBackground                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlayerHasStats                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bRequirementsIgnored                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryStatRow_C::ExecuteUbergraph_W_InventoryStatRow(int32 EntryPoint, bool K2Node_Event_bShowBackground, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bPlayerHasStats, bool K2Node_Event_bRequirementsIgnored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryStatRow_C", "ExecuteUbergraph_W_InventoryStatRow");

	Params::UW_InventoryStatRow_C_ExecuteUbergraph_W_InventoryStatRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bShowBackground = K2Node_Event_bShowBackground;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bPlayerHasStats = K2Node_Event_bPlayerHasStats;
	Parms.K2Node_Event_bRequirementsIgnored = K2Node_Event_bRequirementsIgnored;

	UObject::ProcessEvent(Func, &Parms);

}

}


