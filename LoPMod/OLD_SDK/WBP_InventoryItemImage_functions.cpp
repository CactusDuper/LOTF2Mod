#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryItemImage.WBP_InventoryItemImage_C
// (None)

class UClass* UWBP_InventoryItemImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryItemImage_C");

	return Clss;
}


// WBP_InventoryItemImage_C WBP_InventoryItemImage.Default__WBP_InventoryItemImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryItemImage_C* UWBP_InventoryItemImage_C::GetDefaultObj()
{
	static class UWBP_InventoryItemImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryItemImage_C*>(UWBP_InventoryItemImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryItemImage.WBP_InventoryItemImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemImage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryItemImage_C", "PreConstruct");

	Params::UWBP_InventoryItemImage_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryItemImage.WBP_InventoryItemImage_C.SetIsEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEquipped                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemImage_C::SetIsEquipped(bool bEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryItemImage_C", "SetIsEquipped");

	Params::UWBP_InventoryItemImage_C_SetIsEquipped_Params Parms{};

	Parms.bEquipped = bEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryItemImage.WBP_InventoryItemImage_C.ExecuteUbergraph_WBP_InventoryItemImage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEquipped                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryItemImage_C::ExecuteUbergraph_WBP_InventoryItemImage(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryItemImage_C", "ExecuteUbergraph_WBP_InventoryItemImage");

	Params::UWBP_InventoryItemImage_C_ExecuteUbergraph_WBP_InventoryItemImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bEquipped = K2Node_Event_bEquipped;

	UObject::ProcessEvent(Func, &Parms);

}

}


