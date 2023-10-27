#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Panel_Inventory.W_Panel_Inventory_C
// (None)

class UClass* UW_Panel_Inventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Panel_Inventory_C");

	return Clss;
}


// W_Panel_Inventory_C W_Panel_Inventory.Default__W_Panel_Inventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Panel_Inventory_C* UW_Panel_Inventory_C::GetDefaultObj()
{
	static class UW_Panel_Inventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Panel_Inventory_C*>(UW_Panel_Inventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Panel_Inventory.W_Panel_Inventory_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Panel_Inventory_C::GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Inventory_C", "GetDesiredFocusTarget");

	Params::UW_Panel_Inventory_C_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_ReturnValue = CallFunc_GetFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Panel_Inventory.W_Panel_Inventory_C.RefreshFocus_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Panel_Inventory_C::RefreshFocus_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Inventory_C", "RefreshFocus_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Panel_Inventory.W_Panel_Inventory_C.BP_SelectGrid
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Panel_Inventory_C::BP_SelectGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Inventory_C", "BP_SelectGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Panel_Inventory.W_Panel_Inventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Inventory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Inventory_C", "PreConstruct");

	Params::UW_Panel_Inventory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Panel_Inventory.W_Panel_Inventory_C.ExecuteUbergraph_W_Panel_Inventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Panel_Inventory_C::ExecuteUbergraph_W_Panel_Inventory(int32 EntryPoint, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Panel_Inventory_C", "ExecuteUbergraph_W_Panel_Inventory");

	Params::UW_Panel_Inventory_C_ExecuteUbergraph_W_Panel_Inventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


