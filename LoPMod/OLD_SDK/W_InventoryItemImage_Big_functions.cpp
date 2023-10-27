#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_InventoryItemImage_Big.W_InventoryItemImage_Big_C
// (None)

class UClass* UW_InventoryItemImage_Big_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_InventoryItemImage_Big_C");

	return Clss;
}


// W_InventoryItemImage_Big_C W_InventoryItemImage_Big.Default__W_InventoryItemImage_Big_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_InventoryItemImage_Big_C* UW_InventoryItemImage_Big_C::GetDefaultObj()
{
	static class UW_InventoryItemImage_Big_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_InventoryItemImage_Big_C*>(UW_InventoryItemImage_Big_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_InventoryItemImage_Big.W_InventoryItemImage_Big_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryItemImage_Big_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryItemImage_Big_C", "PreConstruct");

	Params::UW_InventoryItemImage_Big_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InventoryItemImage_Big.W_InventoryItemImage_Big_C.ExecuteUbergraph_W_InventoryItemImage_Big
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryItemImage_Big_C::ExecuteUbergraph_W_InventoryItemImage_Big(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryItemImage_Big_C", "ExecuteUbergraph_W_InventoryItemImage_Big");

	Params::UW_InventoryItemImage_Big_C_ExecuteUbergraph_W_InventoryItemImage_Big_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


