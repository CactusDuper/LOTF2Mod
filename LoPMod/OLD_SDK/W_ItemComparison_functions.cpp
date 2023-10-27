#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemComparison.W_ItemComparison_C
// (None)

class UClass* UW_ItemComparison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemComparison_C");

	return Clss;
}


// W_ItemComparison_C W_ItemComparison.Default__W_ItemComparison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemComparison_C* UW_ItemComparison_C::GetDefaultObj()
{
	static class UW_ItemComparison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemComparison_C*>(UW_ItemComparison_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemComparison.W_ItemComparison_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemComparison_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemComparison_C", "PreConstruct");

	Params::UW_ItemComparison_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemComparison.W_ItemComparison_C.BP_UpdateEquipStatus
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemComparison_C::BP_UpdateEquipStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemComparison_C", "BP_UpdateEquipStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemComparison.W_ItemComparison_C.ExecuteUbergraph_W_ItemComparison
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemComparison_C::ExecuteUbergraph_W_ItemComparison(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemComparison_C", "ExecuteUbergraph_W_ItemComparison");

	Params::UW_ItemComparison_C_ExecuteUbergraph_W_ItemComparison_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


